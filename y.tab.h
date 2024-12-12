/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NUMBER = 258,                  /* NUMBER  */
    NUMBERF = 259,                 /* NUMBERF  */
    TYPE = 260,                    /* TYPE  */
    POINT_TYPE = 261,              /* POINT_TYPE  */
    NAME = 262,                    /* NAME  */
    NULLPTR = 263,                 /* NULLPTR  */
    TRUE = 264,                    /* TRUE  */
    FALSE = 265,                   /* FALSE  */
    SWITCH = 266,                  /* SWITCH  */
    CASE = 267,                    /* CASE  */
    DEFAULT = 268,                 /* DEFAULT  */
    BREAK = 269,                   /* BREAK  */
    CONTINUE = 270,                /* CONTINUE  */
    RETURN = 271,                  /* RETURN  */
    FOR = 272,                     /* FOR  */
    WHILE = 273,                   /* WHILE  */
    IF = 274,                      /* IF  */
    ELSEIF = 275,                  /* ELSEIF  */
    ELSE = 276,                    /* ELSE  */
    DO = 277,                      /* DO  */
    CIN = 278,                     /* CIN  */
    COUT = 279,                    /* COUT  */
    LBRACE = 280,                  /* LBRACE  */
    RBRACE = 281,                  /* RBRACE  */
    LPAREN = 282,                  /* LPAREN  */
    RPAREN = 283,                  /* RPAREN  */
    SEMICOLON = 284,               /* SEMICOLON  */
    COMMA = 285,                   /* COMMA  */
    BYTEAND = 286,                 /* BYTEAND  */
    BYTEOR = 287,                  /* BYTEOR  */
    BYTEXOR = 288,                 /* BYTEXOR  */
    LE = 289,                      /* LE  */
    GE = 290,                      /* GE  */
    EQ = 291,                      /* EQ  */
    NE = 292,                      /* NE  */
    LT = 293,                      /* LT  */
    GT = 294,                      /* GT  */
    ASSIGN = 295,                  /* ASSIGN  */
    PLUS = 296,                    /* PLUS  */
    MINUS = 297,                   /* MINUS  */
    MUL = 298,                     /* MUL  */
    DIV = 299,                     /* DIV  */
    REMDIV = 300,                  /* REMDIV  */
    NOT = 301,                     /* NOT  */
    AND = 302,                     /* AND  */
    OR = 303,                      /* OR  */
    OUT = 304,                     /* OUT  */
    IN = 305,                      /* IN  */
    DOBLEBUCKET = 306,             /* DOBLEBUCKET  */
    BUCKET = 307,                  /* BUCKET  */
    QUESTION = 308,                /* QUESTION  */
    DOUBLEPOINT = 309              /* DOUBLEPOINT  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define NUMBER 258
#define NUMBERF 259
#define TYPE 260
#define POINT_TYPE 261
#define NAME 262
#define NULLPTR 263
#define TRUE 264
#define FALSE 265
#define SWITCH 266
#define CASE 267
#define DEFAULT 268
#define BREAK 269
#define CONTINUE 270
#define RETURN 271
#define FOR 272
#define WHILE 273
#define IF 274
#define ELSEIF 275
#define ELSE 276
#define DO 277
#define CIN 278
#define COUT 279
#define LBRACE 280
#define RBRACE 281
#define LPAREN 282
#define RPAREN 283
#define SEMICOLON 284
#define COMMA 285
#define BYTEAND 286
#define BYTEOR 287
#define BYTEXOR 288
#define LE 289
#define GE 290
#define EQ 291
#define NE 292
#define LT 293
#define GT 294
#define ASSIGN 295
#define PLUS 296
#define MINUS 297
#define MUL 298
#define DIV 299
#define REMDIV 300
#define NOT 301
#define AND 302
#define OR 303
#define OUT 304
#define IN 305
#define DOBLEBUCKET 306
#define BUCKET 307
#define QUESTION 308
#define DOUBLEPOINT 309

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "main.y"

    char nonterm[64];
    double numberf;
    int number; 
    char constant_lexems[32];
    char var[4098];

#line 183 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
