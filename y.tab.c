/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "main.y"

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


#line 95 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 264 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUMBER = 3,                     /* NUMBER  */
  YYSYMBOL_NUMBERF = 4,                    /* NUMBERF  */
  YYSYMBOL_TYPE = 5,                       /* TYPE  */
  YYSYMBOL_POINT_TYPE = 6,                 /* POINT_TYPE  */
  YYSYMBOL_NAME = 7,                       /* NAME  */
  YYSYMBOL_NULLPTR = 8,                    /* NULLPTR  */
  YYSYMBOL_TRUE = 9,                       /* TRUE  */
  YYSYMBOL_FALSE = 10,                     /* FALSE  */
  YYSYMBOL_SWITCH = 11,                    /* SWITCH  */
  YYSYMBOL_CASE = 12,                      /* CASE  */
  YYSYMBOL_DEFAULT = 13,                   /* DEFAULT  */
  YYSYMBOL_BREAK = 14,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 15,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 16,                    /* RETURN  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_WHILE = 18,                     /* WHILE  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSEIF = 20,                    /* ELSEIF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_DO = 22,                        /* DO  */
  YYSYMBOL_CIN = 23,                       /* CIN  */
  YYSYMBOL_COUT = 24,                      /* COUT  */
  YYSYMBOL_LBRACE = 25,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 26,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 27,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 28,                    /* RPAREN  */
  YYSYMBOL_SEMICOLON = 29,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 30,                     /* COMMA  */
  YYSYMBOL_BYTEAND = 31,                   /* BYTEAND  */
  YYSYMBOL_BYTEOR = 32,                    /* BYTEOR  */
  YYSYMBOL_BYTEXOR = 33,                   /* BYTEXOR  */
  YYSYMBOL_LE = 34,                        /* LE  */
  YYSYMBOL_GE = 35,                        /* GE  */
  YYSYMBOL_EQ = 36,                        /* EQ  */
  YYSYMBOL_NE = 37,                        /* NE  */
  YYSYMBOL_LT = 38,                        /* LT  */
  YYSYMBOL_GT = 39,                        /* GT  */
  YYSYMBOL_ASSIGN = 40,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 41,                      /* PLUS  */
  YYSYMBOL_MINUS = 42,                     /* MINUS  */
  YYSYMBOL_MUL = 43,                       /* MUL  */
  YYSYMBOL_DIV = 44,                       /* DIV  */
  YYSYMBOL_REMDIV = 45,                    /* REMDIV  */
  YYSYMBOL_NOT = 46,                       /* NOT  */
  YYSYMBOL_AND = 47,                       /* AND  */
  YYSYMBOL_OR = 48,                        /* OR  */
  YYSYMBOL_OUT = 49,                       /* OUT  */
  YYSYMBOL_IN = 50,                        /* IN  */
  YYSYMBOL_DOBLEBUCKET = 51,               /* DOBLEBUCKET  */
  YYSYMBOL_BUCKET = 52,                    /* BUCKET  */
  YYSYMBOL_QUESTION = 53,                  /* QUESTION  */
  YYSYMBOL_DOUBLEPOINT = 54,               /* DOUBLEPOINT  */
  YYSYMBOL_YYACCEPT = 55,                  /* $accept  */
  YYSYMBOL_program = 56,                   /* program  */
  YYSYMBOL_rule = 57,                      /* rule  */
  YYSYMBOL_declar = 58,                    /* declar  */
  YYSYMBOL_expression = 59,                /* expression  */
  YYSYMBOL_assign_stmt = 60,               /* assign_stmt  */
  YYSYMBOL_variable_create = 61,           /* variable_create  */
  YYSYMBOL_variable_use = 62,              /* variable_use  */
  YYSYMBOL_statements = 63,                /* statements  */
  YYSYMBOL_branching = 64,                 /* branching  */
  YYSYMBOL_switch_branch = 65,             /* switch_branch  */
  YYSYMBOL_switch_stmt = 66,               /* switch_stmt  */
  YYSYMBOL_case_default_branch = 67,       /* case_default_branch  */
  YYSYMBOL_case_default_list = 68,         /* case_default_list  */
  YYSYMBOL_case_stmt = 69,                 /* case_stmt  */
  YYSYMBOL_default_stmt = 70,              /* default_stmt  */
  YYSYMBOL_for_branch = 71,                /* for_branch  */
  YYSYMBOL_for_stmt = 72,                  /* for_stmt  */
  YYSYMBOL_while_branch = 73,              /* while_branch  */
  YYSYMBOL_while_stmt = 74,                /* while_stmt  */
  YYSYMBOL_if_branch = 75,                 /* if_branch  */
  YYSYMBOL_if_stmt = 76,                   /* if_stmt  */
  YYSYMBOL_elseif_branch = 77,             /* elseif_branch  */
  YYSYMBOL_elseif_list = 78,               /* elseif_list  */
  YYSYMBOL_elseif_stmt = 79,               /* elseif_stmt  */
  YYSYMBOL_else_branch = 80,               /* else_branch  */
  YYSYMBOL_else_stmt = 81,                 /* else_stmt  */
  YYSYMBOL_out_exp = 82,                   /* out_exp  */
  YYSYMBOL_in_exp = 83,                    /* in_exp  */
  YYSYMBOL_rule_func = 84,                 /* rule_func  */
  YYSYMBOL_func = 85,                      /* func  */
  YYSYMBOL_args = 86,                      /* args  */
  YYSYMBOL_body = 87,                      /* body  */
  YYSYMBOL_func_call = 88,                 /* func_call  */
  YYSYMBOL_args_value = 89                 /* args_value  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1004

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  118
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  247

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   309


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    70,    70,    81,    84,    92,    93,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     133,   134,   135,   138,   139,   140,   141,   142,   143,   144,
     145,   148,   151,   154,   157,   160,   163,   166,   169,   172,
     175,   180,   181,   186,   191,   196,   197,   198,   201,   208,
     214,   220,   223,   230,   237,   241,   248,   254,   259,   265,
     271,   277,   283,   290,   296,   305,   311,   317,   320,   326,
     332,   335,   336,   343,   349,   355,   358,   364,   369,   372,
     373,   375,   376,   380,   383,   386,   389,   392,   395,   400,
     403,   408,   411,   419,   422,   431,   432,   435,   436
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUMBER", "NUMBERF",
  "TYPE", "POINT_TYPE", "NAME", "NULLPTR", "TRUE", "FALSE", "SWITCH",
  "CASE", "DEFAULT", "BREAK", "CONTINUE", "RETURN", "FOR", "WHILE", "IF",
  "ELSEIF", "ELSE", "DO", "CIN", "COUT", "LBRACE", "RBRACE", "LPAREN",
  "RPAREN", "SEMICOLON", "COMMA", "BYTEAND", "BYTEOR", "BYTEXOR", "LE",
  "GE", "EQ", "NE", "LT", "GT", "ASSIGN", "PLUS", "MINUS", "MUL", "DIV",
  "REMDIV", "NOT", "AND", "OR", "OUT", "IN", "DOBLEBUCKET", "BUCKET",
  "QUESTION", "DOUBLEPOINT", "$accept", "program", "rule", "declar",
  "expression", "assign_stmt", "variable_create", "variable_use",
  "statements", "branching", "switch_branch", "switch_stmt",
  "case_default_branch", "case_default_list", "case_stmt", "default_stmt",
  "for_branch", "for_stmt", "while_branch", "while_stmt", "if_branch",
  "if_stmt", "elseif_branch", "elseif_list", "elseif_stmt", "else_branch",
  "else_stmt", "out_exp", "in_exp", "rule_func", "func", "args", "body",
  "func_call", "args_value", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-75)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     108,    -1,     8,    23,   108,   -69,     5,   -69,   -69,   -69,
     -69,    28,    42,   -69,    55,   164,   -69,    86,   108,    34,
      41,    30,    37,    70,    79,     1,    90,    95,    98,   102,
      87,   -69,   953,   -69,   -69,   -69,   -69,   135,   -69,    33,
     -69,   148,   127,   151,   556,   116,   578,   -69,   -69,   -69,
     -69,     9,    17,   -69,   -69,   -69,   -69,    30,   -69,   -69,
     -69,    17,   -69,    17,    17,    17,   170,   182,   373,   -69,
     -69,    33,    17,    17,   187,    17,   -69,    33,   158,   160,
     163,   -69,   165,   167,   174,   175,   176,    17,    60,   -69,
     936,   600,   177,   -69,   127,   -69,   194,   -69,   196,   622,
     -69,   -69,   -69,   -69,   644,   -69,   512,    88,    59,    96,
     906,   906,    43,   171,   172,   -69,    17,    17,    17,    17,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      17,    17,    17,    17,   959,   202,   252,   -69,    20,   512,
      16,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     396,   199,   -69,   -69,    62,   -69,   169,   173,   139,    17,
     -69,   666,    17,   -69,   -69,   688,   710,   -69,   732,   -69,
     -69,    17,   -69,   -69,   -69,   -69,   120,   120,   120,   -69,
     -69,   -69,   -69,   -69,   -69,   906,   906,   924,   924,   924,
      43,    43,    43,   488,    17,    17,   -69,   -69,   -69,   221,
     -69,    17,   -69,    17,   -69,   -69,   864,   879,   879,   -69,
     289,   -69,   324,   -69,   754,   -69,   776,   -69,   512,    17,
     419,   442,   -69,   512,   350,   213,   894,   879,   798,   206,
     -69,   -69,   -69,   888,   -69,    17,   -69,    97,   222,   -69,
     820,   465,   387,   -69,   842,   -69,   -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     0,   109,   110,     1,
       4,     0,     0,   111,     0,     0,   103,     0,     0,     0,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   106,     0,     5,   113,    60,    67,     0,    66,     0,
      65,     0,    61,     0,     0,     0,     0,   104,   112,    40,
      41,     0,     0,    55,    56,    45,    44,    43,    50,    46,
      47,     0,    54,     0,     0,     0,     0,     0,     0,     7,
       8,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,    42,
       0,     0,     0,    98,    63,    91,     0,    62,     0,     0,
     105,   114,    59,   108,     0,   115,   117,     0,     0,     0,
      11,    12,    23,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,     0,    99,
       0,     6,    37,    38,    39,    33,    32,    34,    35,    36,
       0,     0,    78,    69,     0,    71,     0,     0,     0,     0,
      86,     0,     0,    92,    64,     0,     0,    89,     0,   107,
     116,     0,    70,    22,    48,    49,    16,    17,    18,    24,
      25,    26,    27,    28,    29,     9,    10,    13,    14,    15,
      21,    19,    20,     0,     0,     0,    87,    90,    58,     0,
      57,     0,    52,     0,    68,    72,     0,    76,     0,    80,
       0,    85,     0,    94,     0,    97,     0,    88,   118,     0,
       0,     0,   102,   100,     0,     0,     0,    75,     0,     0,
      95,    93,    96,    30,    83,     0,    77,    55,     0,    79,
       0,     0,    55,    82,     0,    84,    81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -69,   -36,   145,   -68,   179,   -69,   -42,   -69,
     -69,   -69,   -69,    99,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   166,   -69,   185,   -69,   -69,   -69,   248,
      -4,   -69,   -45,   -15,   -69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,     4,    32,    68,    87,    33,    69,    34,    35,
      36,    37,   154,   155,   156,   157,    38,    39,    40,    41,
      42,    43,    94,    95,    96,    97,    98,   140,   138,     5,
       6,    14,    44,    70,   107
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,   104,   101,    90,    55,    56,     7,    13,    57,    58,
      59,    60,    55,    56,    48,     8,    57,    58,    59,    60,
      55,    56,   159,     9,    57,    58,    59,    60,    61,    45,
      62,    45,    11,     1,     2,   134,    61,   105,    19,    20,
      89,    49,    63,    64,    61,   200,   161,    65,    50,   198,
      63,    64,    66,    67,   168,    65,    12,    51,    63,    64,
      66,    67,   101,    65,    52,   201,   195,    15,    66,    67,
     199,    16,   151,   152,   151,   152,    45,   119,   120,   121,
     122,   123,   124,    17,    45,    18,   153,   172,   204,    45,
     116,   117,   118,   119,   120,   121,   122,   123,   124,    53,
     125,   126,   127,   128,   129,   130,   131,   132,    54,   -74,
     -74,    46,   133,     1,     2,    47,   170,    71,   171,   101,
     214,   216,    72,   -74,   173,    73,   101,   116,   117,   118,
     119,   120,   121,   122,   123,   124,    75,   125,   126,   127,
     128,   129,   130,   131,   132,   102,    45,    92,    93,   133,
      45,    45,    74,    45,   119,   120,   121,   122,   123,   124,
      88,   226,   227,   228,   208,   209,   130,   131,   132,    19,
      20,    21,   101,    91,   101,    22,    99,   113,    23,    24,
      25,    26,    27,    28,   101,   101,   101,    29,    30,   114,
      31,    45,    45,    45,   137,   244,   106,   108,   142,    45,
     143,    45,   101,   144,   162,   145,   109,   146,   110,   111,
     112,    45,    45,    45,   147,   148,   149,   135,   136,   165,
     139,   166,   174,   206,   175,    45,   203,   207,   222,    45,
     196,   240,   150,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   237,   125,   126,   127,   128,   129,   130,   131,
     132,   242,    10,   205,     0,   133,   141,     0,     0,     0,
     163,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   164,
     197,     0,     0,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,   125,   126,   127,   128,   129,   130,   131,
     132,     0,     0,     0,   210,   133,     0,   212,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   229,     0,     0,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     0,
     125,   126,   127,   128,   129,   130,   131,   132,     0,   220,
     221,     0,   133,     0,     0,     0,   223,     0,   224,     0,
       0,     0,   230,     0,     0,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   233,   125,   126,   127,   128,   129,
     130,   131,   132,     0,     0,     0,     0,   133,   236,     0,
     241,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,   125,   126,   127,   128,   129,   130,   131,   132,   -73,
     -73,     0,   115,   133,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   -73,   125,   126,   127,   128,   129,   130,
     131,   132,     0,     0,     0,   202,   133,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,   125,   126,   127,
     128,   129,   130,   131,   132,     0,     0,     0,   234,   133,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     0,
     125,   126,   127,   128,   129,   130,   131,   132,     0,     0,
       0,   235,   133,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,   125,   126,   127,   128,   129,   130,   131,
     132,     0,     0,     0,   245,   133,   116,   117,   118,   119,
     120,   121,   122,   123,   124,     0,   125,   126,   127,   128,
     129,   130,   131,   132,     0,     0,     0,     0,   133,   116,
     117,   118,   119,   120,   121,   122,   123,   124,     0,   125,
     126,   127,   128,   129,   130,   131,   132,     0,     0,     0,
       0,   133,   219,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,   125,   126,   127,   128,   129,   130,   131,
     132,    19,    20,    21,     0,   133,     0,    22,     0,     0,
      23,    24,    25,    26,    27,    28,     0,     0,     0,    29,
      30,     0,   100,    19,    20,    21,     0,     0,     0,    22,
       0,     0,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,    30,     0,   103,    19,    20,    21,     0,     0,
       0,    22,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    29,    30,     0,   160,    19,    20,    21,
       0,     0,     0,    22,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,    30,     0,   167,    19,
      20,    21,     0,     0,     0,    22,     0,     0,    23,    24,
      25,    26,    27,    28,     0,     0,     0,    29,    30,     0,
     169,    19,    20,    21,     0,     0,     0,    22,     0,     0,
      23,    24,    25,    26,    27,    28,     0,     0,     0,    29,
      30,     0,   211,    19,    20,    21,     0,     0,     0,    22,
       0,     0,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,    30,     0,   213,    19,    20,    21,     0,     0,
       0,    22,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    29,    30,     0,   215,    19,    20,    21,
       0,     0,     0,    22,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,    30,     0,   217,    19,
      20,    21,     0,     0,     0,    22,     0,     0,    23,    24,
      25,    26,    27,    28,     0,     0,     0,    29,    30,     0,
     231,    19,    20,    21,     0,     0,     0,    22,     0,     0,
      23,    24,    25,    26,    27,    28,     0,     0,     0,    29,
      30,     0,   232,    19,    20,    21,     0,     0,     0,    22,
       0,     0,    23,    24,    25,    26,    27,    28,     0,     0,
       0,    29,    30,     0,   239,    19,    20,    21,     0,     0,
       0,    22,     0,     0,    23,    24,    25,    26,    27,    28,
       0,     0,     0,    29,    30,     0,   243,    19,    20,    21,
       0,     0,     0,    22,     0,     0,    23,    24,    25,    26,
      27,    28,     0,     0,     0,    29,    30,     0,   246,    19,
      20,    21,     0,     0,     0,    22,     0,     0,   225,    24,
      25,    26,    27,    28,    19,    20,    21,    29,    30,     0,
      22,     0,     0,    23,    24,    25,    26,    27,    28,    19,
      20,    21,    29,    30,     0,    22,     0,     0,   238,    24,
      25,    26,    27,    28,     0,     0,     0,    29,    30,   116,
     117,   118,   119,   120,   121,   122,   123,   124,     0,   125,
     126,   127,   128,   129,   130,   131,   132,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,     0,     0,   127,
     128,   129,   130,   131,   132,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   158,     0,    77,    78,    79,    80,
     130,   131,   132,     0,     0,     0,    81,    82,    83,    84,
      85,    86,    76,    77,    78,    79,    80,     0,   194,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    81,
      82,    83,    84,    85,    86
};

static const yytype_int16 yycheck[] =
{
      15,    46,    44,    39,     3,     4,     7,    11,     7,     8,
       9,    10,     3,     4,    18,     7,     7,     8,     9,    10,
       3,     4,    90,     0,     7,     8,     9,    10,    27,    44,
      29,    46,    27,     5,     6,    71,    27,    28,     5,     6,
       7,     7,    41,    42,    27,    29,    91,    46,     7,    29,
      41,    42,    51,    52,    99,    46,    28,    27,    41,    42,
      51,    52,   104,    46,    27,    49,   134,    25,    51,    52,
      50,    29,    12,    13,    12,    13,    91,    34,    35,    36,
      37,    38,    39,    28,    99,    30,    26,    28,    26,   104,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    29,
      41,    42,    43,    44,    45,    46,    47,    48,    29,    12,
      13,    25,    53,     5,     6,    29,    28,    27,    30,   161,
     165,   166,    27,    26,    28,    27,   168,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    49,    41,    42,    43,
      44,    45,    46,    47,    48,    29,   161,    20,    21,    53,
     165,   166,    50,   168,    34,    35,    36,    37,    38,    39,
      25,   206,   207,   208,    25,    26,    46,    47,    48,     5,
       6,     7,   214,    25,   216,    11,    25,     7,    14,    15,
      16,    17,    18,    19,   226,   227,   228,    23,    24,     7,
      26,   206,   207,   208,     7,   240,    51,    52,    40,   214,
      40,   216,   244,    40,    27,    40,    61,    40,    63,    64,
      65,   226,   227,   228,    40,    40,    40,    72,    73,    25,
      75,    25,    51,    54,    52,   240,    27,    54,     7,   244,
      28,    25,    87,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    29,    41,    42,    43,    44,    45,    46,    47,
      48,    29,     4,   154,    -1,    53,    77,    -1,    -1,    -1,
      94,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,    94,
      28,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,   159,    53,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   171,    28,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,   194,
     195,    -1,    53,    -1,    -1,    -1,   201,    -1,   203,    -1,
      -1,    -1,    28,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,   219,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    -1,    -1,    -1,    53,    28,    -1,
     235,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    12,
      13,    -1,    29,    53,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    26,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    29,    53,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    -1,    -1,    29,    53,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      -1,    29,    53,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    29,    53,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    53,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,     5,     6,     7,    -1,    53,    -1,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    23,
      24,    -1,    26,     5,     6,     7,    -1,    -1,    -1,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    -1,    26,     5,     6,     7,    -1,    -1,
      -1,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    -1,    26,     5,     6,     7,
      -1,    -1,    -1,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    -1,    26,     5,
       6,     7,    -1,    -1,    -1,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    -1,
      26,     5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    23,
      24,    -1,    26,     5,     6,     7,    -1,    -1,    -1,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    -1,    26,     5,     6,     7,    -1,    -1,
      -1,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    -1,    26,     5,     6,     7,
      -1,    -1,    -1,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    -1,    26,     5,
       6,     7,    -1,    -1,    -1,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    -1,
      26,     5,     6,     7,    -1,    -1,    -1,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    23,
      24,    -1,    26,     5,     6,     7,    -1,    -1,    -1,    11,
      -1,    -1,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    23,    24,    -1,    26,     5,     6,     7,    -1,    -1,
      -1,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    23,    24,    -1,    26,     5,     6,     7,
      -1,    -1,    -1,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    24,    -1,    26,     5,
       6,     7,    -1,    -1,    -1,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,     5,     6,     7,    23,    24,    -1,
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,     5,
       6,     7,    23,    24,    -1,    11,    -1,    -1,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    23,    24,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    43,
      44,    45,    46,    47,    48,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    28,    -1,    30,    31,    32,    33,
      46,    47,    48,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    29,    30,    31,    32,    33,    -1,    29,    30,
      31,    32,    33,    40,    41,    42,    43,    44,    45,    40,
      41,    42,    43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,    56,    57,    84,    85,     7,     7,     0,
      84,    27,    28,    85,    86,    25,    29,    28,    30,     5,
       6,     7,    11,    14,    15,    16,    17,    18,    19,    23,
      24,    26,    58,    61,    63,    64,    65,    66,    71,    72,
      73,    74,    75,    76,    87,    88,    25,    29,    85,     7,
       7,    27,    27,    29,    29,     3,     4,     7,     8,     9,
      10,    27,    29,    41,    42,    46,    51,    52,    59,    62,
      88,    27,    27,    27,    50,    49,    29,    30,    31,    32,
      33,    40,    41,    42,    43,    44,    45,    60,    25,     7,
      58,    25,    20,    21,    77,    78,    79,    80,    81,    25,
      26,    63,    29,    26,    87,    28,    59,    89,    59,    59,
      59,    59,    59,     7,     7,    29,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    41,    42,    43,    44,    45,
      46,    47,    48,    53,    58,    59,    59,     7,    83,    59,
      82,    61,    40,    40,    40,    40,    40,    40,    40,    40,
      59,    12,    13,    26,    67,    68,    69,    70,    28,    60,
      26,    87,    27,    78,    80,    25,    25,    26,    87,    26,
      28,    30,    28,    28,    51,    52,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    29,    60,    28,    28,    29,    50,
      29,    49,    29,    27,    26,    68,    54,    54,    25,    26,
      59,    26,    59,    26,    87,    26,    87,    26,    59,    54,
      59,    59,     7,    59,    59,    14,    87,    87,    87,    28,
      28,    26,    26,    59,    29,    29,    28,    29,    14,    26,
      25,    59,    29,    26,    87,    29,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    57,    58,    58,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    59,    59,    59,    59,    59,    59,    59,    59,    59,
      59,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      61,    61,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      66,    67,    67,    68,    68,    68,    68,    69,    70,    71,
      71,    71,    71,    72,    72,    73,    73,    74,    75,    75,
      76,    77,    77,    78,    78,    79,    80,    80,    81,    82,
      82,    83,    83,    84,    84,    84,    84,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     3,     1,     1,     3,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     3,
       5,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     2,     4,     3,     2,     2,     2,     4,     4,     2,
       1,     1,     2,     2,     3,     1,     1,     1,     4,     3,
       4,     1,     2,     5,     4,     3,     2,     4,     1,     6,
       4,     8,     7,     6,     8,     4,     3,     4,     4,     3,
       4,     1,     2,     4,     3,     4,     4,     3,     1,     1,
       3,     1,     3,     4,     5,     6,     5,     7,     6,     2,
       2,     1,     3,     1,     2,     3,     4,     1,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: rule  */
#line 70 "main.y"
              {
    fprintf(yyout, "import sys\n"); // Генерация строки импорта для Python
    fprintf(yyout, "\n");
    fprintf(yyout, "%s", (yyvsp[0].nonterm)); // Вывод сгенерированного тела программы

    fprintf(yyout, "\n\n\n");
    fprintf(yyout, "if __name__ == \"__main__\":\n\tmain()\n"); // Добавление вызова main-функции
}
#line 1654 "y.tab.c"
    break;

  case 3: /* rule: rule_func  */
#line 81 "main.y"
              {
        sprintf((yyval.nonterm), "%s\n", (yyvsp[0].nonterm)); // Добавление функции
    }
#line 1662 "y.tab.c"
    break;

  case 4: /* rule: rule rule_func  */
#line 84 "main.y"
                     {
        sprintf((yyval.nonterm), "%s\n%s", (yyvsp[-1].nonterm), (yyvsp[0].nonterm)); // Добавление нескольких функций
    }
#line 1670 "y.tab.c"
    break;

  case 5: /* declar: variable_create  */
#line 92 "main.y"
                        {sprintf((yyval.nonterm),"%s",(yyvsp[0].nonterm));}
#line 1676 "y.tab.c"
    break;

  case 6: /* declar: declar COMMA variable_create  */
#line 93 "main.y"
                                   {sprintf((yyval.nonterm), "%s = %s", (yyvsp[-2].nonterm), (yyvsp[0].nonterm));}
#line 1682 "y.tab.c"
    break;

  case 7: /* expression: variable_use  */
#line 96 "main.y"
                         {sprintf((yyval.nonterm),"%s",(yyvsp[0].nonterm));}
#line 1688 "y.tab.c"
    break;

  case 8: /* expression: func_call  */
#line 97 "main.y"
                {sprintf((yyval.nonterm),"%s",(yyvsp[0].nonterm));}
#line 1694 "y.tab.c"
    break;

  case 9: /* expression: expression PLUS expression  */
#line 98 "main.y"
                                 {sprintf((yyval.nonterm),"%s + %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1700 "y.tab.c"
    break;

  case 10: /* expression: expression MINUS expression  */
#line 99 "main.y"
                                  {sprintf((yyval.nonterm),"%s - %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1706 "y.tab.c"
    break;

  case 11: /* expression: PLUS expression  */
#line 100 "main.y"
                      {sprintf((yyval.nonterm),"+ %s",(yyvsp[0].nonterm));}
#line 1712 "y.tab.c"
    break;

  case 12: /* expression: MINUS expression  */
#line 101 "main.y"
                       {sprintf((yyval.nonterm),"- %s",(yyvsp[0].nonterm));}
#line 1718 "y.tab.c"
    break;

  case 13: /* expression: expression MUL expression  */
#line 102 "main.y"
                                {sprintf((yyval.nonterm),"%s * %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1724 "y.tab.c"
    break;

  case 14: /* expression: expression DIV expression  */
#line 103 "main.y"
                                {sprintf((yyval.nonterm),"%s / %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1730 "y.tab.c"
    break;

  case 15: /* expression: expression REMDIV expression  */
#line 104 "main.y"
                                   {sprintf((yyval.nonterm),"%s %% %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1736 "y.tab.c"
    break;

  case 16: /* expression: expression BYTEAND expression  */
#line 105 "main.y"
                                    {sprintf((yyval.nonterm),"%s & %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1742 "y.tab.c"
    break;

  case 17: /* expression: expression BYTEOR expression  */
#line 106 "main.y"
                                   {sprintf((yyval.nonterm),"%s | %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1748 "y.tab.c"
    break;

  case 18: /* expression: expression BYTEXOR expression  */
#line 107 "main.y"
                                    {sprintf((yyval.nonterm),"%s ^ %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1754 "y.tab.c"
    break;

  case 19: /* expression: expression AND expression  */
#line 108 "main.y"
                                {sprintf((yyval.nonterm),"%s and %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1760 "y.tab.c"
    break;

  case 20: /* expression: expression OR expression  */
#line 109 "main.y"
                               {sprintf((yyval.nonterm),"%s or %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1766 "y.tab.c"
    break;

  case 21: /* expression: expression NOT expression  */
#line 110 "main.y"
                                {sprintf((yyval.nonterm),"%s not(%s)",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1772 "y.tab.c"
    break;

  case 22: /* expression: LPAREN expression RPAREN  */
#line 111 "main.y"
                               {sprintf((yyval.nonterm),"(%s)",(yyvsp[-1].nonterm));}
#line 1778 "y.tab.c"
    break;

  case 23: /* expression: NOT expression  */
#line 112 "main.y"
                     {sprintf((yyval.nonterm),"not(%s)", (yyvsp[0].nonterm));}
#line 1784 "y.tab.c"
    break;

  case 24: /* expression: expression LE expression  */
#line 113 "main.y"
                               {sprintf((yyval.nonterm),"%s <= %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1790 "y.tab.c"
    break;

  case 25: /* expression: expression GE expression  */
#line 114 "main.y"
                               {sprintf((yyval.nonterm),"%s >= %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1796 "y.tab.c"
    break;

  case 26: /* expression: expression EQ expression  */
#line 115 "main.y"
                               {sprintf((yyval.nonterm),"%s == %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1802 "y.tab.c"
    break;

  case 27: /* expression: expression NE expression  */
#line 116 "main.y"
                               {sprintf((yyval.nonterm),"%s != %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1808 "y.tab.c"
    break;

  case 28: /* expression: expression LT expression  */
#line 117 "main.y"
                               {sprintf((yyval.nonterm),"%s < %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1814 "y.tab.c"
    break;

  case 29: /* expression: expression GT expression  */
#line 118 "main.y"
                               {sprintf((yyval.nonterm),"%s > %s",(yyvsp[-2].nonterm),(yyvsp[0].nonterm));}
#line 1820 "y.tab.c"
    break;

  case 30: /* expression: expression QUESTION expression DOUBLEPOINT expression  */
#line 119 "main.y"
                                                            {sprintf((yyval.nonterm),"%s if %s else %s",(yyvsp[-4].nonterm),(yyvsp[-2].nonterm), (yyvsp[0].nonterm));}
#line 1826 "y.tab.c"
    break;

  case 31: /* assign_stmt: ASSIGN  */
#line 122 "main.y"
                    {sprintf((yyval.nonterm),"=");}
#line 1832 "y.tab.c"
    break;

  case 32: /* assign_stmt: MINUS ASSIGN  */
#line 123 "main.y"
               {sprintf((yyval.nonterm),"-=");}
#line 1838 "y.tab.c"
    break;

  case 33: /* assign_stmt: PLUS ASSIGN  */
#line 124 "main.y"
              {sprintf((yyval.nonterm),"+=");}
#line 1844 "y.tab.c"
    break;

  case 34: /* assign_stmt: MUL ASSIGN  */
#line 125 "main.y"
             {sprintf((yyval.nonterm),"*=");}
#line 1850 "y.tab.c"
    break;

  case 35: /* assign_stmt: DIV ASSIGN  */
#line 126 "main.y"
             {sprintf((yyval.nonterm),"/=");}
#line 1856 "y.tab.c"
    break;

  case 36: /* assign_stmt: REMDIV ASSIGN  */
#line 127 "main.y"
                {sprintf((yyval.nonterm),"%%=");}
#line 1862 "y.tab.c"
    break;

  case 37: /* assign_stmt: BYTEAND ASSIGN  */
#line 128 "main.y"
                 {sprintf((yyval.nonterm),"= int(%s) &",yylval); if(yydebug) printf("Atantion! &= maybe not normal convert for %s!\n",yylval);}
#line 1868 "y.tab.c"
    break;

  case 38: /* assign_stmt: BYTEOR ASSIGN  */
#line 129 "main.y"
                {sprintf((yyval.nonterm),"= int(%s) |",yylval); if(yydebug) printf("Atantion! |= maybe not normal convert for %s!\n",yylval);}
#line 1874 "y.tab.c"
    break;

  case 39: /* assign_stmt: BYTEXOR ASSIGN  */
#line 130 "main.y"
                 {sprintf((yyval.nonterm),"= int(%s) ^",yylval); if(yydebug) printf("Atantion! ^= maybe not normal convert for %s!\n",yylval);}
#line 1880 "y.tab.c"
    break;

  case 40: /* variable_create: TYPE NAME  */
#line 133 "main.y"
                           {sprintf((yyval.nonterm),"%s",(yyvsp[0].var));}
#line 1886 "y.tab.c"
    break;

  case 41: /* variable_create: POINT_TYPE NAME  */
#line 134 "main.y"
                      {sprintf((yyval.nonterm),"%s",(yyvsp[0].var));}
#line 1892 "y.tab.c"
    break;

  case 42: /* variable_create: NAME  */
#line 135 "main.y"
           {sprintf((yyval.nonterm),"%s",(yyvsp[0].var));}
#line 1898 "y.tab.c"
    break;

  case 43: /* variable_use: NAME  */
#line 138 "main.y"
                   {sprintf((yyval.nonterm),"%s",(yyvsp[0].var));}
#line 1904 "y.tab.c"
    break;

  case 44: /* variable_use: NUMBERF  */
#line 139 "main.y"
              {sprintf((yyval.nonterm),"%lf",(yyvsp[0].numberf));}
#line 1910 "y.tab.c"
    break;

  case 45: /* variable_use: NUMBER  */
#line 140 "main.y"
             {sprintf((yyval.nonterm),"%d",(yyvsp[0].number));}
#line 1916 "y.tab.c"
    break;

  case 46: /* variable_use: TRUE  */
#line 141 "main.y"
           {sprintf((yyval.nonterm),"True");}
#line 1922 "y.tab.c"
    break;

  case 47: /* variable_use: FALSE  */
#line 142 "main.y"
            {sprintf((yyval.nonterm),"False");}
#line 1928 "y.tab.c"
    break;

  case 48: /* variable_use: DOBLEBUCKET NAME DOBLEBUCKET  */
#line 143 "main.y"
                                   {sprintf((yyval.nonterm),"\"%s\"",(yyvsp[-1].var));}
#line 1934 "y.tab.c"
    break;

  case 49: /* variable_use: BUCKET NAME BUCKET  */
#line 144 "main.y"
                         {sprintf((yyval.nonterm),"'%s'",(yyvsp[-1].var));}
#line 1940 "y.tab.c"
    break;

  case 50: /* variable_use: NULLPTR  */
#line 145 "main.y"
              {sprintf((yyval.nonterm),"None");}
#line 1946 "y.tab.c"
    break;

  case 51: /* statements: declar SEMICOLON  */
#line 148 "main.y"
                             {
    sprintf((yyval.nonterm), "%s = None", (yyvsp[-1].nonterm)); // Объявление переменной
}
#line 1954 "y.tab.c"
    break;

  case 52: /* statements: declar assign_stmt expression SEMICOLON  */
#line 151 "main.y"
                                              {
        sprintf((yyval.nonterm), "%s %s %s", (yyvsp[-3].nonterm), (yyvsp[-2].nonterm), (yyvsp[-1].nonterm)); // Присваивание значения переменной
}
#line 1962 "y.tab.c"
    break;

  case 53: /* statements: RETURN expression SEMICOLON  */
#line 154 "main.y"
                                  {
        sprintf((yyval.nonterm), "return %s", (yyvsp[-1].nonterm)); // Возврат значения
}
#line 1970 "y.tab.c"
    break;

  case 54: /* statements: RETURN SEMICOLON  */
#line 157 "main.y"
                       {
        sprintf((yyval.nonterm), "return"); // Пустой возврат
}
#line 1978 "y.tab.c"
    break;

  case 55: /* statements: BREAK SEMICOLON  */
#line 160 "main.y"
                      {
        sprintf((yyval.nonterm), "break"); // Оператор break
}
#line 1986 "y.tab.c"
    break;

  case 56: /* statements: CONTINUE SEMICOLON  */
#line 163 "main.y"
                         {
        sprintf((yyval.nonterm), "continue"); // Оператор continue
}
#line 1994 "y.tab.c"
    break;

  case 57: /* statements: COUT OUT out_exp SEMICOLON  */
#line 166 "main.y"
                                 {
        sprintf((yyval.nonterm), "print(%s)", (yyvsp[-1].nonterm)); // Вывод в Python через print
}
#line 2002 "y.tab.c"
    break;

  case 58: /* statements: CIN IN in_exp SEMICOLON  */
#line 169 "main.y"
                              {
        sprintf((yyval.nonterm), "%s", (yyvsp[-1].nonterm)); // Чтение ввода
}
#line 2010 "y.tab.c"
    break;

  case 59: /* statements: func_call SEMICOLON  */
#line 172 "main.y"
                          {
        sprintf((yyval.nonterm), "%s", (yyvsp[-1].nonterm)); // Вызов функции
}
#line 2018 "y.tab.c"
    break;

  case 60: /* statements: branching  */
#line 175 "main.y"
                {
        sprintf((yyval.nonterm), "%s", (yyvsp[0].nonterm)); // Условные конструкции или циклы
}
#line 2026 "y.tab.c"
    break;

  case 61: /* branching: if_branch  */
#line 180 "main.y"
                    {sprintf((yyval.nonterm),"%s",(yyvsp[0].nonterm));}
#line 2032 "y.tab.c"
    break;

  case 62: /* branching: if_branch else_branch  */
#line 181 "main.y"
                       {
    char* tabs = gen_tabs();
    sprintf((yyval.nonterm),"%s\t%s%s",(yyvsp[-1].nonterm),tabs,(yyvsp[0].nonterm));
    free(tabs);
}
#line 2042 "y.tab.c"
    break;

  case 63: /* branching: if_branch elseif_branch  */
#line 186 "main.y"
                          {
    char* tabs = gen_tabs();
    sprintf((yyval.nonterm),"%s\t%s%s",(yyvsp[-1].nonterm),tabs,(yyvsp[0].nonterm));
    free(tabs);
}
#line 2052 "y.tab.c"
    break;

  case 64: /* branching: if_branch elseif_branch else_branch  */
#line 191 "main.y"
                                      {
    char* tabs = gen_tabs();
    sprintf((yyval.nonterm),"%s\t%s%s\t%s%s",(yyvsp[-2].nonterm),tabs,(yyvsp[-1].nonterm),tabs,(yyvsp[0].nonterm));
    free(tabs);
}
#line 2062 "y.tab.c"
    break;

  case 65: /* branching: while_branch  */
#line 196 "main.y"
               {sprintf((yyval.nonterm),"%s",(yyvsp[0].nonterm));}
#line 2068 "y.tab.c"
    break;

  case 66: /* branching: for_branch  */
#line 197 "main.y"
             {sprintf((yyval.nonterm),"%s",(yyvsp[0].nonterm));}
#line 2074 "y.tab.c"
    break;

  case 67: /* branching: switch_branch  */
#line 198 "main.y"
                {sprintf((yyval.nonterm),"%s",(yyvsp[0].nonterm));}
#line 2080 "y.tab.c"
    break;

  case 68: /* switch_branch: switch_stmt LBRACE case_default_branch RBRACE  */
#line 201 "main.y"
                                                             {
    // Генерация отступов и формирование строки для switch с блоком case
    char* tabs = gen_tabs(); 
    sprintf((yyval.nonterm), "%s\t%s%s", (yyvsp[-3].nonterm), tabs, (yyvsp[-1].nonterm)); // Формируем строку, добавляя отступы
    free(tabs); // Освобождение памяти от отступов
    tab_level--; // Уменьшаем уровень отступа
}
#line 2092 "y.tab.c"
    break;

  case 69: /* switch_branch: switch_stmt LBRACE RBRACE  */
#line 208 "main.y"
                                {
        tab_level--; // Уменьшаем уровень отступа
        sprintf((yyval.nonterm), "#%s", (yyvsp[-2].nonterm)); // Генерируем строку без тела case
    }
#line 2101 "y.tab.c"
    break;

  case 70: /* switch_stmt: SWITCH LPAREN expression RPAREN  */
#line 214 "main.y"
                                             {
    tab_level++; // Увеличиваем уровень отступа для содержимого
    sprintf((yyval.nonterm), "match (%s):\n", (yyvsp[-1].nonterm)); // Формируем строку для switch
}
#line 2110 "y.tab.c"
    break;

  case 71: /* case_default_branch: case_default_list  */
#line 220 "main.y"
                                       {
    sprintf((yyval.nonterm), "%s", (yyvsp[0].nonterm)); // Формируем строку для блока case или default
}
#line 2118 "y.tab.c"
    break;

  case 72: /* case_default_branch: case_default_branch case_default_list  */
#line 223 "main.y"
                                            {
        char* tabs = gen_tabs(); // Генерация отступов
        sprintf((yyval.nonterm), "%s\t%s%s", (yyvsp[-1].nonterm), tabs, (yyvsp[0].nonterm)); // Формируем строку с отступами
        free(tabs); // Освобождение памяти от отступов
    }
#line 2128 "y.tab.c"
    break;

  case 73: /* case_default_list: case_stmt DOUBLEPOINT body BREAK SEMICOLON  */
#line 230 "main.y"
                                                              {
    // Формирование строки для case с телом и break
    char* tabs = gen_tabs(); 
    sprintf((yyval.nonterm), "%s%s%s", (yyvsp[-4].nonterm), tabs, (yyvsp[-2].nonterm)); // Формируем строку с отступами
    free(tabs); 
    tab_level--; // Уменьшаем уровень отступа
}
#line 2140 "y.tab.c"
    break;

  case 74: /* case_default_list: case_stmt DOUBLEPOINT BREAK SEMICOLON  */
#line 237 "main.y"
                                            {
        tab_level--; 
        sprintf((yyval.nonterm), "#%s", (yyvsp[-3].nonterm)); // Генерация строки для case без тела
    }
#line 2149 "y.tab.c"
    break;

  case 75: /* case_default_list: default_stmt DOUBLEPOINT body  */
#line 241 "main.y"
                                    {
        // Формирование строки для default с телом
        char* tabs = gen_tabs(); 
        sprintf((yyval.nonterm), "%s%s%s", (yyvsp[-2].nonterm), tabs, (yyvsp[0].nonterm)); 
        free(tabs);
        tab_level--; 
    }
#line 2161 "y.tab.c"
    break;

  case 76: /* case_default_list: default_stmt DOUBLEPOINT  */
#line 248 "main.y"
                               {
        tab_level--; 
        sprintf((yyval.nonterm), "#case _:"); // Генерация строки для default без тела
    }
#line 2170 "y.tab.c"
    break;

  case 77: /* case_stmt: CASE LPAREN expression RPAREN  */
#line 254 "main.y"
                                         {
    tab_level++; 
    sprintf((yyval.nonterm), "case (%s):\n", (yyvsp[-1].nonterm)); // Формирование строки для case
}
#line 2179 "y.tab.c"
    break;

  case 78: /* default_stmt: DEFAULT  */
#line 259 "main.y"
                      {
    tab_level++; 
    sprintf((yyval.nonterm), "case _:\n"); // Формирование строки для default
}
#line 2188 "y.tab.c"
    break;

  case 79: /* for_branch: for_stmt declar RPAREN LBRACE body RBRACE  */
#line 265 "main.y"
                                                      {
    char* tabs = gen_tabs();
    sprintf((yyval.nonterm),"%s%s%s%s%s",(yyvsp[-5].nonterm),tabs,(yyvsp[-1].nonterm),tabs,(yyvsp[-4].nonterm));
    free(tabs);
    tab_level--;
}
#line 2199 "y.tab.c"
    break;

  case 80: /* for_branch: for_stmt declar RPAREN RBRACE  */
#line 271 "main.y"
                               {
    char* tabs = gen_tabs();
    sprintf((yyval.nonterm),"'''\n%s%s%s%s\n%s'''",tabs,(yyvsp[-3].nonterm),tabs,(yyvsp[-2].nonterm),tabs);
    tab_level--;
    free(tabs);
}
#line 2210 "y.tab.c"
    break;

  case 81: /* for_branch: for_stmt declar assign_stmt expression RPAREN LBRACE body RBRACE  */
#line 277 "main.y"
                                                                  {
    char* tabs = gen_tabs();
    sprintf((yyval.nonterm),"%s%s%s%s\t%s %s %s",(yyvsp[-7].nonterm),tabs,(yyvsp[-1].nonterm),tabs,(yyvsp[-6].nonterm),(yyvsp[-5].nonterm),(yyvsp[-4].nonterm));
    free(tabs);
    tab_level--;
}
#line 2221 "y.tab.c"
    break;

  case 82: /* for_branch: for_stmt declar assign_stmt expression RPAREN LBRACE RBRACE  */
#line 283 "main.y"
                                                             {
    char* tabs = gen_tabs();
    sprintf((yyval.nonterm),"'''\n%s%s%s\t%s  %s %s\n%s'''",tabs,(yyvsp[-6].nonterm),tabs,(yyvsp[-5].nonterm),(yyvsp[-4].nonterm),(yyvsp[-3].nonterm),tabs);
    tab_level--;
    free(tabs);
}
#line 2232 "y.tab.c"
    break;

  case 83: /* for_stmt: FOR LPAREN declar SEMICOLON expression SEMICOLON  */
#line 290 "main.y"
                                                            {
    tab_level++;
    char* tabs = gen_tabs();
    sprintf((yyval.nonterm),"%s\n%swhile (%s):\n",(yyvsp[-3].nonterm),tabs,(yyvsp[-1].nonterm));
    free(tabs);
}
#line 2243 "y.tab.c"
    break;

  case 84: /* for_stmt: FOR LPAREN declar assign_stmt expression SEMICOLON expression SEMICOLON  */
#line 296 "main.y"
                                                                          {
    tab_level++;
    char* tabs = gen_tabs();
    sprintf((yyval.nonterm),"%s %s %s\n%swhile (%s):\n",(yyvsp[-5].nonterm),(yyvsp[-4].nonterm),(yyvsp[-3].nonterm),tabs,(yyvsp[-1].nonterm));
    free(tabs);
}
#line 2254 "y.tab.c"
    break;

  case 85: /* while_branch: while_stmt LBRACE body RBRACE  */
#line 305 "main.y"
                                            {
    char* tabs = gen_tabs(); 
    sprintf((yyval.nonterm),"%s%s%s",(yyvsp[-3].nonterm),tabs,(yyvsp[-1].nonterm)); // Формирование строки для while
    free(tabs); 
    tab_level--; 
}
#line 2265 "y.tab.c"
    break;

  case 86: /* while_branch: while_stmt LBRACE RBRACE  */
#line 311 "main.y"
                          {
    tab_level--; 
    sprintf((yyval.nonterm),"#%s",(yyvsp[-2].nonterm)); // Генерация строки для while без тела
}
#line 2274 "y.tab.c"
    break;

  case 87: /* while_stmt: WHILE LPAREN expression RPAREN  */
#line 317 "main.y"
                                            {tab_level++;sprintf((yyval.nonterm),"while (%s):\n",(yyvsp[-1].nonterm));}
#line 2280 "y.tab.c"
    break;

  case 88: /* if_branch: if_stmt LBRACE body RBRACE  */
#line 320 "main.y"
                                      {
    char* tabs = gen_tabs(); 
    sprintf((yyval.nonterm),"%s%s%s",(yyvsp[-3].nonterm),tabs,(yyvsp[-1].nonterm)); // Формирование строки для if
    free(tabs); 
    tab_level--; 
}
#line 2291 "y.tab.c"
    break;

  case 89: /* if_branch: if_stmt LBRACE RBRACE  */
#line 326 "main.y"
                        {
    tab_level--; 
    sprintf((yyval.nonterm),"#%s",(yyvsp[-2].nonterm)); // Генерация строки для if без тела
}
#line 2300 "y.tab.c"
    break;

  case 90: /* if_stmt: IF LPAREN expression RPAREN  */
#line 332 "main.y"
                                     {tab_level++;sprintf((yyval.nonterm),"if (%s):\n",(yyvsp[-1].nonterm));}
#line 2306 "y.tab.c"
    break;

  case 91: /* elseif_branch: elseif_list  */
#line 335 "main.y"
                           {sprintf((yyval.nonterm),"%s",(yyvsp[0].nonterm));}
#line 2312 "y.tab.c"
    break;

  case 92: /* elseif_branch: elseif_branch elseif_list  */
#line 336 "main.y"
                            {
    char* tabs = gen_tabs(); 
    sprintf((yyval.nonterm),"%s\t%s%s",(yyvsp[-1].nonterm),tabs,(yyvsp[0].nonterm)); // Формируем строку для elseif с отступами
    free(tabs);
}
#line 2322 "y.tab.c"
    break;

  case 93: /* elseif_list: elseif_stmt LBRACE body RBRACE  */
#line 343 "main.y"
                                            {
    char* tabs = gen_tabs(); 
    sprintf((yyval.nonterm),"%s%s%s",(yyvsp[-3].nonterm),tabs,(yyvsp[-1].nonterm)); // Формируем строку для elseif с отступами
    free(tabs); 
    tab_level--; 
}
#line 2333 "y.tab.c"
    break;

  case 94: /* elseif_list: elseif_stmt LBRACE RBRACE  */
#line 349 "main.y"
                            {
    tab_level--; 
    sprintf((yyval.nonterm),"#%s",(yyvsp[-2].nonterm)); // Генерация строки для elseif без тела
}
#line 2342 "y.tab.c"
    break;

  case 95: /* elseif_stmt: ELSEIF LPAREN expression RPAREN  */
#line 355 "main.y"
                                             {tab_level++;sprintf((yyval.nonterm),"elif (%s):\n",(yyvsp[-1].nonterm));}
#line 2348 "y.tab.c"
    break;

  case 96: /* else_branch: else_stmt LBRACE body RBRACE  */
#line 358 "main.y"
                                          {
    char* tabs = gen_tabs(); 
    sprintf((yyval.nonterm),"%s%s%s",(yyvsp[-3].nonterm),tabs,(yyvsp[-1].nonterm)); // Формируем строку для else с отступами
    free(tabs); 
    tab_level--; 
}
#line 2359 "y.tab.c"
    break;

  case 97: /* else_branch: else_stmt LBRACE RBRACE  */
#line 364 "main.y"
                          {
    tab_level--; 
    sprintf((yyval.nonterm),"#%s",(yyvsp[-2].nonterm)); // Генерация строки для else без тела
}
#line 2368 "y.tab.c"
    break;

  case 98: /* else_stmt: ELSE  */
#line 369 "main.y"
                {tab_level++;sprintf((yyval.nonterm),"else:\n");}
#line 2374 "y.tab.c"
    break;

  case 99: /* out_exp: expression  */
#line 372 "main.y"
                    {sprintf((yyval.nonterm),"%s",(yyvsp[0].nonterm));}
#line 2380 "y.tab.c"
    break;

  case 100: /* out_exp: out_exp OUT expression  */
#line 373 "main.y"
                             {sprintf((yyval.nonterm),"%s, %s",(yyvsp[-2].nonterm), (yyvsp[0].nonterm));}
#line 2386 "y.tab.c"
    break;

  case 101: /* in_exp: NAME  */
#line 375 "main.y"
             {sprintf((yyval.nonterm),"%s = input()",(yyvsp[0].var));}
#line 2392 "y.tab.c"
    break;

  case 102: /* in_exp: in_exp IN NAME  */
#line 376 "main.y"
                     {sprintf((yyval.nonterm),"%s\n\t%s = input()",(yyvsp[-2].nonterm),(yyvsp[0].var));}
#line 2398 "y.tab.c"
    break;

  case 103: /* rule_func: func LPAREN RPAREN SEMICOLON  */
#line 380 "main.y"
                                 {
        sprintf((yyval.nonterm), ""); // Пустая функция
    }
#line 2406 "y.tab.c"
    break;

  case 104: /* rule_func: func LPAREN args RPAREN SEMICOLON  */
#line 383 "main.y"
                                        {
        sprintf((yyval.nonterm), ""); // Пустая функция с аргументами
    }
#line 2414 "y.tab.c"
    break;

  case 105: /* rule_func: func LPAREN RPAREN LBRACE body RBRACE  */
#line 386 "main.y"
                                            {
        sprintf((yyval.nonterm), "def %s():\n%s", (yyvsp[-5].nonterm), (yyvsp[-1].nonterm)); // Функция с телом
    }
#line 2422 "y.tab.c"
    break;

  case 106: /* rule_func: func LPAREN RPAREN LBRACE RBRACE  */
#line 389 "main.y"
                                       {
        sprintf((yyval.nonterm), "def %s():\n\treturn 0\n", (yyvsp[-4].nonterm)); // Функция без тела, возвращающая 0
    }
#line 2430 "y.tab.c"
    break;

  case 107: /* rule_func: func LPAREN args RPAREN LBRACE body RBRACE  */
#line 392 "main.y"
                                                 {
        sprintf((yyval.nonterm), "def %s(%s):\n%s", (yyvsp[-6].nonterm), (yyvsp[-4].nonterm), (yyvsp[-1].nonterm)); // Функция с аргументами и телом
    }
#line 2438 "y.tab.c"
    break;

  case 108: /* rule_func: func LPAREN args RPAREN LBRACE RBRACE  */
#line 395 "main.y"
                                            {
        sprintf((yyval.nonterm), "def %s(%s):\n\treturn 0\n", (yyvsp[-5].nonterm), (yyvsp[-3].nonterm)); // Функция с аргументами без тела
    }
#line 2446 "y.tab.c"
    break;

  case 109: /* func: TYPE NAME  */
#line 400 "main.y"
                {
    sprintf((yyval.nonterm), "%s", (yyvsp[0].var)); // Обычный тип функции
}
#line 2454 "y.tab.c"
    break;

  case 110: /* func: POINT_TYPE NAME  */
#line 403 "main.y"
                      {
        sprintf((yyval.nonterm), "%s", (yyvsp[0].var)); // Указатель как тип функции
}
#line 2462 "y.tab.c"
    break;

  case 111: /* args: func  */
#line 408 "main.y"
           {
    sprintf((yyval.nonterm), "%s", (yyvsp[0].nonterm)); // Один аргумент
}
#line 2470 "y.tab.c"
    break;

  case 112: /* args: args COMMA func  */
#line 411 "main.y"
                      {
        sprintf((yyval.nonterm), "%s, %s", (yyvsp[-2].nonterm), (yyvsp[0].nonterm)); // Несколько аргументов через запятую
}
#line 2478 "y.tab.c"
    break;

  case 113: /* body: statements  */
#line 419 "main.y"
                 {
    sprintf((yyval.nonterm), "\t%s\n", (yyvsp[0].nonterm)); // Одиночный оператор
}
#line 2486 "y.tab.c"
    break;

  case 114: /* body: body statements  */
#line 422 "main.y"
                      {
        if (tab_level < 0) tab_level = 0; // Контроль уровня отступа
        char* tabs = gen_tabs();
        sprintf((yyval.nonterm), "%s\t%s%s\n", (yyvsp[-1].nonterm), tabs, (yyvsp[0].nonterm)); // Добавление следующего оператора
        free(tabs);
}
#line 2497 "y.tab.c"
    break;

  case 115: /* func_call: NAME LPAREN RPAREN  */
#line 431 "main.y"
                              {sprintf((yyval.nonterm),"%s()",(yyvsp[-2].var));}
#line 2503 "y.tab.c"
    break;

  case 116: /* func_call: NAME LPAREN args_value RPAREN  */
#line 432 "main.y"
                                    {sprintf((yyval.nonterm),"%s(%s)",(yyvsp[-3].var),(yyvsp[-1].nonterm));}
#line 2509 "y.tab.c"
    break;

  case 117: /* args_value: expression  */
#line 435 "main.y"
                       {sprintf((yyval.nonterm), "%s", (yyvsp[0].nonterm));}
#line 2515 "y.tab.c"
    break;

  case 118: /* args_value: args_value COMMA expression  */
#line 436 "main.y"
                                  {sprintf((yyval.nonterm), "%s, %s", (yyvsp[-2].nonterm), (yyvsp[0].nonterm));}
#line 2521 "y.tab.c"
    break;


#line 2525 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 439 "main.y"



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
