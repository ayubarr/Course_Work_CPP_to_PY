%{
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Внешние ссылки на файлы ввода и вывода
extern FILE* yyout;
extern FILE* yyin;


// Лексический анализатор и обработчик ошибок
void yyerror(char *s);
int yylex();


// Режим отладки
int yydebug = 0;

// Уровень отступов для форматирования
char* gen_tabs();
int tab_level = 0;

%}

%union{
    char nonterm[64];
    double numberf;
    int number; 
    char constant_lexems[32];
    char var[4098];
}

%token<number> NUMBER;
%token<numberf> NUMBERF;
%token<var> TYPE POINT_TYPE NAME;
%token<constant_lexems> NULLPTR TRUE FALSE SWITCH CASE DEFAULT BREAK CONTINUE RETURN FOR WHILE IF ELSEIF ELSE DO CIN COUT;
%token <data> LBRACE RBRACE LPAREN RPAREN SEMICOLON COMMA BYTEAND BYTEOR BYTEXOR;
%token <data> LE GE  EQ NE LT GT ASSIGN PLUS MINUS MUL DIV REMDIV;
%token <data> NOT AND OR;
%token <data> OUT IN;
%token <data> DOBLEBUCKET BUCKET;
%token <data> QUESTION DOUBLEPOINT;

%left QUESTION DOUBLEPOINT
%left PLUS MINUS
%left MUL DIV REMDIV
%left BYTEAND BYTEOR BYTEXOR
%left NOT AND OR
%right ASSIGN
%left EQ NE LT LE GT GE
%left LPAREN RPAREN


%type<nonterm> program rule rule_func func args body statements
%type<nonterm> declar expression variable_create variable_use out_exp in_exp args_value func_call
%type<nonterm> branching if_stmt elseif_stmt else_stmt if_branch elseif_list elseif_branch else_branch 
%type<nonterm> while_branch while_stmt for_branch for_stmt


%type<nonterm> switch_branch switch_stmt case_default_branch case_default_list case_stmt default_stmt

%type<nonterm> assign_stmt

%start program


%%

// Определение главного правила программы
program: rule {
    fprintf(yyout, "import sys\n"); // Генерация строки импорта для Python
    fprintf(yyout, "\n");
    fprintf(yyout, "%s", $1); // Вывод сгенерированного тела программы

    fprintf(yyout, "\n\n\n");
    fprintf(yyout, "if __name__ == \"__main__\":\n\tmain()\n"); // Добавление вызова main-функции
}

// Правило для объединения частей программы
rule: 
    rule_func {
        sprintf($$, "%s\n", $1); // Добавление функции
    }
    | rule rule_func {
        sprintf($$, "%s\n%s", $1, $2); // Добавление нескольких функций
    }



    
// Обработка объявления переменных
declar: variable_create {sprintf($$,"%s",$1);}
    | declar COMMA variable_create {sprintf($$, "%s = %s", $1, $3);}

// Обработка выражений в различных операциях
expression: variable_use {sprintf($$,"%s",$1);}
    | func_call {sprintf($$,"%s",$1);}
    | expression PLUS expression {sprintf($$,"%s + %s",$1,$3);}
    | expression MINUS expression {sprintf($$,"%s - %s",$1,$3);}
    | PLUS expression {sprintf($$,"+ %s",$2);}
    | MINUS expression {sprintf($$,"- %s",$2);}
    | expression MUL expression {sprintf($$,"%s * %s",$1,$3);}
    | expression DIV expression {sprintf($$,"%s / %s",$1,$3);}
    | expression REMDIV expression {sprintf($$,"%s %% %s",$1,$3);}
    | expression BYTEAND expression {sprintf($$,"%s & %s",$1,$3);}
    | expression BYTEOR expression {sprintf($$,"%s | %s",$1,$3);}
    | expression BYTEXOR expression {sprintf($$,"%s ^ %s",$1,$3);}
    | expression AND expression {sprintf($$,"%s and %s",$1,$3);}
    | expression OR expression {sprintf($$,"%s or %s",$1,$3);}
    | expression NOT expression {sprintf($$,"%s not(%s)",$1,$3);}
    | LPAREN expression RPAREN {sprintf($$,"(%s)",$2);}
    | NOT expression {sprintf($$,"not(%s)", $2);}
    | expression LE expression {sprintf($$,"%s <= %s",$1,$3);}
    | expression GE expression {sprintf($$,"%s >= %s",$1,$3);}
    | expression EQ expression {sprintf($$,"%s == %s",$1,$3);}
    | expression NE expression {sprintf($$,"%s != %s",$1,$3);}
    | expression LT expression {sprintf($$,"%s < %s",$1,$3);}
    | expression GT expression {sprintf($$,"%s > %s",$1,$3);}
    | expression QUESTION expression DOUBLEPOINT expression {sprintf($$,"%s if %s else %s",$1,$3, $5);}

// Обработка присваиваний
assign_stmt: ASSIGN {sprintf($$,"=");}
| MINUS ASSIGN {sprintf($$,"-=");}
| PLUS ASSIGN {sprintf($$,"+=");}
| MUL ASSIGN {sprintf($$,"*=");}
| DIV ASSIGN {sprintf($$,"/=");}
| REMDIV ASSIGN {sprintf($$,"%%=");}
| BYTEAND ASSIGN {sprintf($$,"= int(%s) &",yylval); if(yydebug) printf("Atantion! &= maybe not normal convert for %s!\n",yylval);}
| BYTEOR ASSIGN {sprintf($$,"= int(%s) |",yylval); if(yydebug) printf("Atantion! |= maybe not normal convert for %s!\n",yylval);}
| BYTEXOR ASSIGN {sprintf($$,"= int(%s) ^",yylval); if(yydebug) printf("Atantion! ^= maybe not normal convert for %s!\n",yylval);}

// Обработка создания переменных
variable_create: TYPE NAME {sprintf($$,"%s",$2);}
    | POINT_TYPE NAME {sprintf($$,"%s",$2);}
    | NAME {sprintf($$,"%s",$1);}

// Обработка использования переменных
variable_use: NAME {sprintf($$,"%s",$1);}
    | NUMBERF {sprintf($$,"%lf",$1);}
    | NUMBER {sprintf($$,"%d",$1);}
    | TRUE {sprintf($$,"True");}
    | FALSE {sprintf($$,"False");}
    | DOBLEBUCKET NAME DOBLEBUCKET {sprintf($$,"\"%s\"",$2);}
    | BUCKET NAME BUCKET {sprintf($$,"'%s'",$2);}
    | NULLPTR {sprintf($$,"None");}

// Определение операторов программы
statements: declar SEMICOLON {
    sprintf($$, "%s = None", $1); // Объявление переменной
}
    | declar assign_stmt expression SEMICOLON {
        sprintf($$, "%s %s %s", $1, $2, $3); // Присваивание значения переменной
}
    | RETURN expression SEMICOLON {
        sprintf($$, "return %s", $2); // Возврат значения
}
    | RETURN SEMICOLON {
        sprintf($$, "return"); // Пустой возврат
}
    | BREAK SEMICOLON {
        sprintf($$, "break"); // Оператор break
}
    | CONTINUE SEMICOLON {
        sprintf($$, "continue"); // Оператор continue
}
    | COUT OUT out_exp SEMICOLON {
        sprintf($$, "print(%s)", $3); // Вывод в Python через print
}
    | CIN IN in_exp SEMICOLON {
        sprintf($$, "%s", $3); // Чтение ввода
}
    | func_call SEMICOLON {
        sprintf($$, "%s", $1); // Вызов функции
}
    | branching {
        sprintf($$, "%s", $1); // Условные конструкции или циклы
}

// Определение условных конструкций
branching: if_branch{sprintf($$,"%s",$1);}
| if_branch else_branch{
    char* tabs = gen_tabs();
    sprintf($$,"%s\t%s%s",$1,tabs,$2);
    free(tabs);
}
| if_branch elseif_branch {
    char* tabs = gen_tabs();
    sprintf($$,"%s\t%s%s",$1,tabs,$2);
    free(tabs);
}
| if_branch elseif_branch else_branch {
    char* tabs = gen_tabs();
    sprintf($$,"%s\t%s%s\t%s%s",$1,tabs,$2,tabs,$3);
    free(tabs);
}
| while_branch {sprintf($$,"%s",$1);}
| for_branch {sprintf($$,"%s",$1);}
| switch_branch {sprintf($$,"%s",$1);}

// Конструкция switch-case: обработка конструкции switch в языке, создание соответствующего кода
switch_branch: switch_stmt LBRACE case_default_branch RBRACE {
    // Генерация отступов и формирование строки для switch с блоком case
    char* tabs = gen_tabs(); 
    sprintf($$, "%s\t%s%s", $1, tabs, $3); // Формируем строку, добавляя отступы
    free(tabs); // Освобождение памяти от отступов
    tab_level--; // Уменьшаем уровень отступа
}
    | switch_stmt LBRACE RBRACE {
        tab_level--; // Уменьшаем уровень отступа
        sprintf($$, "#%s", $1); // Генерируем строку без тела case
    }

// Обработка оператора switch
switch_stmt: SWITCH LPAREN expression RPAREN {
    tab_level++; // Увеличиваем уровень отступа для содержимого
    sprintf($$, "match (%s):\n", $3); // Формируем строку для switch
}

// Обработка блоков case и default в switch
case_default_branch: case_default_list {
    sprintf($$, "%s", $1); // Формируем строку для блока case или default
}
    | case_default_branch case_default_list {
        char* tabs = gen_tabs(); // Генерация отступов
        sprintf($$, "%s\t%s%s", $1, tabs, $2); // Формируем строку с отступами
        free(tabs); // Освобождение памяти от отступов
    }

// Обработка списка case и default
case_default_list: case_stmt DOUBLEPOINT body BREAK SEMICOLON {
    // Формирование строки для case с телом и break
    char* tabs = gen_tabs(); 
    sprintf($$, "%s%s%s", $1, tabs, $3); // Формируем строку с отступами
    free(tabs); 
    tab_level--; // Уменьшаем уровень отступа
}
    | case_stmt DOUBLEPOINT BREAK SEMICOLON {
        tab_level--; 
        sprintf($$, "#%s", $1); // Генерация строки для case без тела
    }
    | default_stmt DOUBLEPOINT body {
        // Формирование строки для default с телом
        char* tabs = gen_tabs(); 
        sprintf($$, "%s%s%s", $1, tabs, $3); 
        free(tabs);
        tab_level--; 
    }
    | default_stmt DOUBLEPOINT {
        tab_level--; 
        sprintf($$, "#case _:"); // Генерация строки для default без тела
    }

// Обработка конструкций case и default
case_stmt: CASE LPAREN expression RPAREN {
    tab_level++; 
    sprintf($$, "case (%s):\n", $3); // Формирование строки для case
}

default_stmt: DEFAULT {
    tab_level++; 
    sprintf($$, "case _:\n"); // Формирование строки для default
}


for_branch: for_stmt declar RPAREN LBRACE body RBRACE {
    char* tabs = gen_tabs();
    sprintf($$,"%s%s%s%s%s",$1,tabs,$5,tabs,$2);
    free(tabs);
    tab_level--;
}
| for_stmt declar RPAREN RBRACE{
    char* tabs = gen_tabs();
    sprintf($$,"'''\n%s%s%s%s\n%s'''",tabs,$1,tabs,$2,tabs);
    tab_level--;
    free(tabs);
}
|for_stmt declar assign_stmt expression RPAREN LBRACE body RBRACE {
    char* tabs = gen_tabs();
    sprintf($$,"%s%s%s%s\t%s %s %s",$1,tabs,$7,tabs,$2,$3,$4);
    free(tabs);
    tab_level--;
}
| for_stmt declar assign_stmt expression RPAREN LBRACE RBRACE{
    char* tabs = gen_tabs();
    sprintf($$,"'''\n%s%s%s\t%s  %s %s\n%s'''",tabs,$1,tabs,$2,$3,$4,tabs);
    tab_level--;
    free(tabs);
}

for_stmt:  FOR LPAREN declar SEMICOLON expression SEMICOLON {
    tab_level++;
    char* tabs = gen_tabs();
    sprintf($$,"%s\n%swhile (%s):\n",$3,tabs,$5);
    free(tabs);
}
| FOR LPAREN declar assign_stmt expression SEMICOLON expression SEMICOLON {
    tab_level++;
    char* tabs = gen_tabs();
    sprintf($$,"%s %s %s\n%swhile (%s):\n",$3,$4,$5,tabs,$7);
    free(tabs);
}


// Обработка конструкций while, if, elseif, else
while_branch: while_stmt LBRACE body RBRACE {
    char* tabs = gen_tabs(); 
    sprintf($$,"%s%s%s",$1,tabs,$3); // Формирование строки для while
    free(tabs); 
    tab_level--; 
}
| while_stmt LBRACE RBRACE{
    tab_level--; 
    sprintf($$,"#%s",$1); // Генерация строки для while без тела
}

// Обработка конструкций while
while_stmt:  WHILE LPAREN expression RPAREN {tab_level++;sprintf($$,"while (%s):\n",$3);}

// Обработка конструкций if
if_branch: if_stmt LBRACE body RBRACE {
    char* tabs = gen_tabs(); 
    sprintf($$,"%s%s%s",$1,tabs,$3); // Формирование строки для if
    free(tabs); 
    tab_level--; 
}
| if_stmt LBRACE RBRACE {
    tab_level--; 
    sprintf($$,"#%s",$1); // Генерация строки для if без тела
}

// Обработка конструкций if
if_stmt: IF LPAREN expression RPAREN {tab_level++;sprintf($$,"if (%s):\n",$3);}

// Обработка конструкции elseif
elseif_branch: elseif_list {sprintf($$,"%s",$1);}
| elseif_branch elseif_list {
    char* tabs = gen_tabs(); 
    sprintf($$,"%s\t%s%s",$1,tabs,$2); // Формируем строку для elseif с отступами
    free(tabs);
}

// Обработка списка elseif
elseif_list: elseif_stmt LBRACE body RBRACE {
    char* tabs = gen_tabs(); 
    sprintf($$,"%s%s%s",$1,tabs,$3); // Формируем строку для elseif с отступами
    free(tabs); 
    tab_level--; 
}
| elseif_stmt LBRACE RBRACE {
    tab_level--; 
    sprintf($$,"#%s",$1); // Генерация строки для elseif без тела
}

// Обработка конструкций elseif
elseif_stmt: ELSEIF LPAREN expression RPAREN {tab_level++;sprintf($$,"elif (%s):\n",$3);}

// Обработка конструкции else
else_branch: else_stmt LBRACE body RBRACE {
    char* tabs = gen_tabs(); 
    sprintf($$,"%s%s%s",$1,tabs,$3); // Формируем строку для else с отступами
    free(tabs); 
    tab_level--; 
}
| else_stmt LBRACE RBRACE {
    tab_level--; 
    sprintf($$,"#%s",$1); // Генерация строки для else без тела
}

else_stmt: ELSE {tab_level++;sprintf($$,"else:\n");} // Формирование строки для else

// Обработка выражений
out_exp: expression {sprintf($$,"%s",$1);}
    | out_exp OUT expression {sprintf($$,"%s, %s",$1, $3);}

in_exp: NAME {sprintf($$,"%s = input()",$1);}
    | in_exp IN NAME {sprintf($$,"%s\n\t%s = input()",$1,$3);}

// Правила для определения функций
rule_func: 
    func LPAREN RPAREN SEMICOLON {
        sprintf($$, ""); // Пустая функция
    }
    | func LPAREN args RPAREN SEMICOLON {
        sprintf($$, ""); // Пустая функция с аргументами
    }
    | func LPAREN RPAREN LBRACE body RBRACE {
        sprintf($$, "def %s():\n%s", $1, $5); // Функция с телом
    }
    | func LPAREN RPAREN LBRACE RBRACE {
        sprintf($$, "def %s():\n\treturn 0\n", $1); // Функция без тела, возвращающая 0
    }
    | func LPAREN args RPAREN LBRACE body RBRACE {
        sprintf($$, "def %s(%s):\n%s", $1, $3, $6); // Функция с аргументами и телом
    }
    | func LPAREN args RPAREN LBRACE RBRACE {
        sprintf($$, "def %s(%s):\n\treturn 0\n", $1, $3); // Функция с аргументами без тела
    }

// Определение имени и типа функции
func: TYPE NAME {
    sprintf($$, "%s", $2); // Обычный тип функции
}
    | POINT_TYPE NAME {
        sprintf($$, "%s", $2); // Указатель как тип функции
}

// Определение аргументов функции
args: func {
    sprintf($$, "%s", $1); // Один аргумент
}
    | args COMMA func {
        sprintf($$, "%s, %s", $1, $3); // Несколько аргументов через запятую
}




// Правила для тела функции
body: statements {
    sprintf($$, "\t%s\n", $1); // Одиночный оператор
}
    | body statements {
        if (tab_level < 0) tab_level = 0; // Контроль уровня отступа
        char* tabs = gen_tabs();
        sprintf($$, "%s\t%s%s\n", $1, tabs, $2); // Добавление следующего оператора
        free(tabs);
}


// Обработка вызова функции
func_call: NAME LPAREN RPAREN {sprintf($$,"%s()",$1);}
    | NAME LPAREN args_value RPAREN {sprintf($$,"%s(%s)",$1,$3);}

// Обработка значений аргументов функции
args_value: expression {sprintf($$, "%s", $1);}
    | args_value COMMA expression {sprintf($$, "%s, %s", $1, $3);}


%%


char* gen_tabs() {
    char* result = malloc(tab_level * sizeof(char) + 1);
    for (int i = 0; i < tab_level; i++) {
        result[i] = '\t';
    }
    result[tab_level] = '\0';
    return result;
}

void yyerror(char *s) {
    fprintf(stderr, "error: %s\n", s);
}

int main(int argc, char **argv) {
    char* filename = "main.cpp";

    if (argc < 2) {
        yydebug = 0;
    }
    else if (argc == 2) {
        if (argv[1][0] == '-' && argv[1][1] == 'd') {
            yydebug = 1;
        }
        else {
            filename = argv[1];
            filename[strlen(filename)] = '\0';
        }
    }
    else if (argc == 3) {
        if (argv[1][0] == '-' && argv[1][1] == 'd') {
            yydebug = 1;
            filename = argv[2];
            filename[strlen(filename)] = '\0';
        }
        else if (argv[2][0] == '-' && argv[2][1] == 'd') {
            filename = argv[1];
            yydebug = 1;
        }
    }
    else {
        printf("Too many arguments, usage: ./translate_program.exe [-d for debug] [filename]");
        return 1;
    }

    yyin = fopen(filename, "r");
    if (!yyin) {
        printf("No such file: %s", filename);
        return 2;
    }
    yyout = fopen("output.py", "w");

    if (yydebug) {
        while (yyparse()) {
            printf("numb: %lf, str: %s ;\n", yylval, yylval);
        } 
    }

    return 0;
}