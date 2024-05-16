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
#line 1 "grammar.y"



/*****************************************************************************/
/*                                                                           */
/*  CROBOTS                                                                  */
/*                                                                           */
/*  (C) Copyright Tom Poindexter, 1985, all rights reserved.                 */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

#include <stdio.h>
#include "crobots.h"
#include "compiler.h"
#ifdef UNIX
#include <string.h>
#endif


#line 92 "y.tab.c"

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
    IDENTIFIER = 258,              /* IDENTIFIER  */
    CONSTANT = 259,                /* CONSTANT  */
    INC_OP = 260,                  /* INC_OP  */
    DEC_OP = 261,                  /* DEC_OP  */
    LEFT_OP = 262,                 /* LEFT_OP  */
    RIGHT_OP = 263,                /* RIGHT_OP  */
    LE_OP = 264,                   /* LE_OP  */
    GE_OP = 265,                   /* GE_OP  */
    EQ_OP = 266,                   /* EQ_OP  */
    NE_OP = 267,                   /* NE_OP  */
    AND_OP = 268,                  /* AND_OP  */
    OR_OP = 269,                   /* OR_OP  */
    MUL_ASSIGN = 270,              /* MUL_ASSIGN  */
    DIV_ASSIGN = 271,              /* DIV_ASSIGN  */
    MOD_ASSIGN = 272,              /* MOD_ASSIGN  */
    ADD_ASSIGN = 273,              /* ADD_ASSIGN  */
    SUB_ASSIGN = 274,              /* SUB_ASSIGN  */
    LEFT_ASSIGN = 275,             /* LEFT_ASSIGN  */
    RIGHT_ASSIGN = 276,            /* RIGHT_ASSIGN  */
    AND_ASSIGN = 277,              /* AND_ASSIGN  */
    XOR_ASSIGN = 278,              /* XOR_ASSIGN  */
    OR_ASSIGN = 279,               /* OR_ASSIGN  */
    EXTERN = 280,                  /* EXTERN  */
    AUTO = 281,                    /* AUTO  */
    REGISTER = 282,                /* REGISTER  */
    INT = 283,                     /* INT  */
    LONG = 284,                    /* LONG  */
    IF = 285,                      /* IF  */
    ELSE = 286,                    /* ELSE  */
    WHILE = 287,                   /* WHILE  */
    FOR = 288,                     /* FOR  */
    RETURN = 289,                  /* RETURN  */
    BREAK = 290,                   /* BREAK  */
    U_NEGATIVE = 291,              /* U_NEGATIVE  */
    U_NOT = 292,                   /* U_NOT  */
    U_ONES = 293                   /* U_ONES  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IDENTIFIER 258
#define CONSTANT 259
#define INC_OP 260
#define DEC_OP 261
#define LEFT_OP 262
#define RIGHT_OP 263
#define LE_OP 264
#define GE_OP 265
#define EQ_OP 266
#define NE_OP 267
#define AND_OP 268
#define OR_OP 269
#define MUL_ASSIGN 270
#define DIV_ASSIGN 271
#define MOD_ASSIGN 272
#define ADD_ASSIGN 273
#define SUB_ASSIGN 274
#define LEFT_ASSIGN 275
#define RIGHT_ASSIGN 276
#define AND_ASSIGN 277
#define XOR_ASSIGN 278
#define OR_ASSIGN 279
#define EXTERN 280
#define AUTO 281
#define REGISTER 282
#define INT 283
#define LONG 284
#define IF 285
#define ELSE 286
#define WHILE 287
#define FOR 288
#define RETURN 289
#define BREAK 290
#define U_NEGATIVE 291
#define U_NOT 292
#define U_ONES 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_CONSTANT = 4,                   /* CONSTANT  */
  YYSYMBOL_INC_OP = 5,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 6,                     /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 7,                    /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 8,                   /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 9,                      /* LE_OP  */
  YYSYMBOL_GE_OP = 10,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 11,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 12,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 13,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 14,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 15,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 16,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 17,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 18,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 19,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 20,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 21,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 22,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 23,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 24,                 /* OR_ASSIGN  */
  YYSYMBOL_EXTERN = 25,                    /* EXTERN  */
  YYSYMBOL_AUTO = 26,                      /* AUTO  */
  YYSYMBOL_REGISTER = 27,                  /* REGISTER  */
  YYSYMBOL_INT = 28,                       /* INT  */
  YYSYMBOL_LONG = 29,                      /* LONG  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_ELSE = 31,                      /* ELSE  */
  YYSYMBOL_WHILE = 32,                     /* WHILE  */
  YYSYMBOL_FOR = 33,                       /* FOR  */
  YYSYMBOL_RETURN = 34,                    /* RETURN  */
  YYSYMBOL_BREAK = 35,                     /* BREAK  */
  YYSYMBOL_U_NEGATIVE = 36,                /* U_NEGATIVE  */
  YYSYMBOL_U_NOT = 37,                     /* U_NOT  */
  YYSYMBOL_U_ONES = 38,                    /* U_ONES  */
  YYSYMBOL_39_ = 39,                       /* '='  */
  YYSYMBOL_40_ = 40,                       /* '|'  */
  YYSYMBOL_41_ = 41,                       /* '^'  */
  YYSYMBOL_42_ = 42,                       /* '&'  */
  YYSYMBOL_43_ = 43,                       /* '<'  */
  YYSYMBOL_44_ = 44,                       /* '>'  */
  YYSYMBOL_45_ = 45,                       /* '+'  */
  YYSYMBOL_46_ = 46,                       /* '-'  */
  YYSYMBOL_47_ = 47,                       /* '*'  */
  YYSYMBOL_48_ = 48,                       /* '/'  */
  YYSYMBOL_49_ = 49,                       /* '%'  */
  YYSYMBOL_50_ = 50,                       /* '!'  */
  YYSYMBOL_51_ = 51,                       /* '~'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* ';'  */
  YYSYMBOL_56_ = 56,                       /* '{'  */
  YYSYMBOL_57_ = 57,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_primary_expr = 59,              /* primary_expr  */
  YYSYMBOL_postfix_expr = 60,              /* postfix_expr  */
  YYSYMBOL_fcall_start = 61,               /* fcall_start  */
  YYSYMBOL_argument_expr_list = 62,        /* argument_expr_list  */
  YYSYMBOL_unary_expr = 63,                /* unary_expr  */
  YYSYMBOL_unary_operator = 64,            /* unary_operator  */
  YYSYMBOL_cast_expr = 65,                 /* cast_expr  */
  YYSYMBOL_multiplicative_expr = 66,       /* multiplicative_expr  */
  YYSYMBOL_additive_expr = 67,             /* additive_expr  */
  YYSYMBOL_shift_expr = 68,                /* shift_expr  */
  YYSYMBOL_relational_expr = 69,           /* relational_expr  */
  YYSYMBOL_equality_expr = 70,             /* equality_expr  */
  YYSYMBOL_and_expr = 71,                  /* and_expr  */
  YYSYMBOL_exclusive_or_expr = 72,         /* exclusive_or_expr  */
  YYSYMBOL_inclusive_or_expr = 73,         /* inclusive_or_expr  */
  YYSYMBOL_logical_and_expr = 74,          /* logical_and_expr  */
  YYSYMBOL_logical_or_expr = 75,           /* logical_or_expr  */
  YYSYMBOL_conditional_expr = 76,          /* conditional_expr  */
  YYSYMBOL_assignment_expr = 77,           /* assignment_expr  */
  YYSYMBOL_assignment_lval = 78,           /* assignment_lval  */
  YYSYMBOL_assignment_operator = 79,       /* assignment_operator  */
  YYSYMBOL_expr = 80,                      /* expr  */
  YYSYMBOL_declaration = 81,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 82,    /* declaration_specifiers  */
  YYSYMBOL_init_declarator_list = 83,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 84,           /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 85,   /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 86,            /* type_specifier  */
  YYSYMBOL_declarator = 87,                /* declarator  */
  YYSYMBOL_declarator2 = 88,               /* declarator2  */
  YYSYMBOL_func_start = 89,                /* func_start  */
  YYSYMBOL_type_specifier_list = 90,       /* type_specifier_list  */
  YYSYMBOL_parameter_identifier = 91,      /* parameter_identifier  */
  YYSYMBOL_parameter_declaration_list = 92, /* parameter_declaration_list  */
  YYSYMBOL_parameter_type_list = 93,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 94,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 95,     /* parameter_declaration  */
  YYSYMBOL_type_name = 96,                 /* type_name  */
  YYSYMBOL_abstract_declarator = 97,       /* abstract_declarator  */
  YYSYMBOL_abstract_declarator2 = 98,      /* abstract_declarator2  */
  YYSYMBOL_initializer = 99,               /* initializer  */
  YYSYMBOL_initializer_list = 100,         /* initializer_list  */
  YYSYMBOL_statement = 101,                /* statement  */
  YYSYMBOL_compound_statement = 102,       /* compound_statement  */
  YYSYMBOL_declaration_list = 103,         /* declaration_list  */
  YYSYMBOL_statement_list = 104,           /* statement_list  */
  YYSYMBOL_expression_statement = 105,     /* expression_statement  */
  YYSYMBOL_selection_statement = 106,      /* selection_statement  */
  YYSYMBOL_selection1_statement = 107,     /* selection1_statement  */
  YYSYMBOL_selection2_statement = 108,     /* selection2_statement  */
  YYSYMBOL_if_clause = 109,                /* if_clause  */
  YYSYMBOL_else_clause = 110,              /* else_clause  */
  YYSYMBOL_iteration_statement = 111,      /* iteration_statement  */
  YYSYMBOL_while_token = 112,              /* while_token  */
  YYSYMBOL_while_clause = 113,             /* while_clause  */
  YYSYMBOL_jump_statement = 114,           /* jump_statement  */
  YYSYMBOL_file = 115,                     /* file  */
  YYSYMBOL_external_definition = 116,      /* external_definition  */
  YYSYMBOL_function_definition = 117,      /* function_definition  */
  YYSYMBOL_function_body = 118,            /* function_body  */
  YYSYMBOL_identifier = 119                /* identifier  */
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
typedef int16_t yytype_int16;
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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   436

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  215

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
       2,     2,     2,    50,     2,     2,     2,    49,    42,     2,
      52,    53,    47,    45,    54,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
      43,    39,    44,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,    40,    57,    51,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    78,    78,    93,    98,   102,   103,   114,   125,   140,
     158,   167,   168,   172,   173,   186,   199,   224,   229,   234,
     242,   243,   247,   248,   253,   258,   266,   267,   272,   280,
     281,   286,   294,   295,   300,   305,   310,   318,   319,   324,
     332,   333,   341,   342,   350,   351,   359,   360,   368,   369,
     377,   381,   382,   399,   408,   410,   412,   414,   416,   418,
     420,   422,   424,   426,   428,   433,   437,   438,   442,   443,
     444,   445,   449,   450,   454,   455,   465,   466,   467,   471,
     472,   476,   480,   491,   496,   504,   511,   512,   516,   524,
     525,   529,   533,   534,   538,   539,   543,   544,   548,   552,
     553,   554,   555,   556,   560,   561,   562,   566,   567,   571,
     572,   573,   574,   575,   579,   580,   581,   582,   586,   587,
     591,   592,   596,   597,   605,   606,   610,   618,   625,   633,
     640,   647,   655,   662,   669,   677,   685,   686,   690,   699,
     705,   706,   710,   711,   715
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
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "CONSTANT", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "EXTERN", "AUTO", "REGISTER",
  "INT", "LONG", "IF", "ELSE", "WHILE", "FOR", "RETURN", "BREAK",
  "U_NEGATIVE", "U_NOT", "U_ONES", "'='", "'|'", "'^'", "'&'", "'<'",
  "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'~'", "'('", "')'",
  "','", "';'", "'{'", "'}'", "$accept", "primary_expr", "postfix_expr",
  "fcall_start", "argument_expr_list", "unary_expr", "unary_operator",
  "cast_expr", "multiplicative_expr", "additive_expr", "shift_expr",
  "relational_expr", "equality_expr", "and_expr", "exclusive_or_expr",
  "inclusive_or_expr", "logical_and_expr", "logical_or_expr",
  "conditional_expr", "assignment_expr", "assignment_lval",
  "assignment_operator", "expr", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "declarator", "declarator2", "func_start",
  "type_specifier_list", "parameter_identifier",
  "parameter_declaration_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "type_name", "abstract_declarator",
  "abstract_declarator2", "initializer", "initializer_list", "statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "selection1_statement",
  "selection2_statement", "if_clause", "else_clause",
  "iteration_statement", "while_token", "while_clause", "jump_statement",
  "file", "external_definition", "function_definition", "function_body",
  "identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     313,   -88,   -88,   -88,   -88,   -88,   -88,   -88,    12,   193,
     193,    79,   -27,    13,   114,   -88,   -88,   -88,   -88,    25,
     -88,    72,   -88,   -88,   145,   -88,    12,   -88,    79,   -88,
     -88,   -88,   -88,    33,   -88,   -88,   -88,    28,   -88,   299,
     -88,   -88,   364,   364,   -19,   -88,   267,   -15,   -88,   -88,
     -88,   357,   -88,   -88,   -88,    22,   331,   378,   384,   -88,
      73,   110,   117,    26,   147,     7,    10,    17,    49,    54,
     -88,   -88,   384,    29,   -88,   -88,   178,   211,   -88,   -88,
     -88,   -88,   277,   -88,    21,   277,   -88,   -88,    63,   -88,
     -88,   -88,    28,   -88,   299,   -88,   -88,   384,   -88,   -88,
     384,   -88,    38,   -88,    57,   -88,    36,    83,   -88,   -88,
     -88,   -88,   132,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   384,   384,
     384,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     384,   384,   384,   384,   384,   384,   -88,   -88,   -88,   244,
     -88,   -88,    85,   384,   -88,   -88,   -88,   -16,    91,   -88,
     -88,   101,   -88,   -88,    95,   384,   -88,   384,   -88,   -88,
     -88,    73,    73,   110,   110,   117,   117,   117,   117,    26,
      26,   147,     7,    10,    17,    49,   -88,   -88,   277,   107,
      39,   -88,   -88,   -88,    19,   116,    84,   -88,   -88,   125,
      24,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   160,
     -88,   -88,   137,   -88,   -88
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   144,    76,    77,    78,    79,    80,   139,     0,    68,
      70,     0,    81,     0,     0,   136,   138,    82,    66,     0,
      72,    74,    69,    71,     0,   118,     0,   142,     0,   140,
      85,    83,    89,     0,    88,     1,   137,     0,    67,     0,
     141,     3,     0,     0,     0,   131,     0,     0,    17,    18,
      19,     0,   122,   114,     5,    13,     0,    20,     0,    22,
      26,    29,    32,    37,    40,    42,    44,    46,    48,    50,
      51,    65,     0,     0,   120,   109,     0,     0,   110,   111,
     124,   125,     0,   112,     0,     0,   113,     2,    74,   119,
     143,    84,     0,    73,     0,   104,    75,     0,    14,    15,
       0,   134,     0,   133,     0,    86,    96,     0,     8,     9,
      10,     7,     0,    11,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    54,    53,    20,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,   123,   116,     0,
     115,   121,   126,     0,   130,    90,   107,     0,     0,   135,
       4,     0,    87,    97,    98,     0,     6,     0,    23,    24,
      25,    27,    28,    30,    31,    35,    36,    33,    34,    38,
      39,    41,    43,    45,    47,    49,   117,   129,     0,     0,
       0,   105,   128,   100,    96,     0,    91,    92,    95,     0,
       0,    21,    12,   127,   132,   106,   108,    94,   101,     0,
      99,   102,     0,    93,   103
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,   -88,   -88,   -88,   -22,   -88,   -47,    61,    65,
      27,    86,    35,    67,    68,    23,    78,   -88,   -88,   -33,
     -88,   -88,   -41,    18,   123,   -88,   190,   -88,   -48,    -7,
     -88,   -88,   180,   140,   -88,    37,   -88,    30,   185,    77,
     -88,   -87,   -88,   -73,    98,   216,   166,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   230,   -88,
     231,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    54,    55,    56,   112,   126,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,   125,    73,    25,    26,    19,    20,     9,    10,    11,
      12,    13,   194,    32,    33,   195,   196,   197,   198,   163,
     164,    96,   157,    74,    75,    28,    77,    78,    79,    80,
      81,    82,   188,    83,    84,    85,    86,    14,    15,    16,
      29,    87
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      17,    21,    57,   105,   151,   102,    95,   156,    17,   152,
     104,   127,   154,    34,    17,     1,     1,    57,     7,    88,
      98,    99,     1,   113,    57,    30,    17,   108,   109,    57,
      88,     1,     7,   100,    57,   135,   136,    17,   190,   146,
     103,   191,     1,    41,    42,    43,    89,     5,     6,   141,
      57,   142,     5,     6,    57,    57,   104,   143,   162,   158,
      57,    95,   144,    57,     5,     6,    31,    18,   145,   137,
     138,   161,    57,   153,   110,    57,   151,   211,    57,    37,
      38,   168,   169,   170,   147,    48,    91,    92,   161,    49,
      50,    51,    34,   159,    89,    94,   205,     2,     3,     4,
       5,     6,    39,   206,     2,     3,     4,     5,     6,    27,
     160,    39,   189,   105,    35,   203,   187,     1,   201,    27,
     128,   129,   130,     8,   133,   134,    90,    57,    24,     5,
       6,    57,    22,    23,   202,    24,   165,     8,   209,     2,
       3,     4,     5,     6,   192,    57,   162,   200,     1,    41,
      42,    43,   105,   161,   193,   131,   132,    95,   139,   140,
     204,   105,   175,   176,   177,   178,    57,   184,    57,   208,
       2,     3,     4,     5,     6,    44,   181,    45,   210,    46,
      47,     1,    41,    42,    43,   166,   167,   207,     5,     6,
     214,    48,   171,   172,    17,    49,    50,    51,   173,   174,
      52,    24,    53,     2,     3,     4,     5,     6,    44,   182,
      45,   183,    46,    47,     1,    41,    42,    43,     2,     3,
       4,     5,     6,   185,    48,   179,   180,    93,    49,    50,
      51,   106,   155,    52,    24,   148,   107,   212,   199,   213,
      76,    44,   149,    45,    36,    46,    47,     1,    41,    42,
      43,     0,    40,     0,     0,     0,     0,    48,     0,     0,
       0,    49,    50,    51,     0,     0,    52,    24,   150,     0,
       1,    41,    42,    43,    44,     0,    45,     0,    46,    47,
       1,    41,    42,    43,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,    49,    50,    51,     0,     0,    52,
      24,   186,     1,    41,    42,    43,     0,    44,     0,    45,
       0,    46,    47,    48,     0,     0,     1,    49,    50,    51,
       0,     0,   101,    48,     0,     0,     0,    49,    50,    51,
       0,     0,    52,    24,     1,    41,    42,    43,     2,     3,
       4,     5,     6,     0,     0,    48,     0,     0,     0,    49,
      50,    51,     0,     0,     0,    94,     0,     0,     0,     0,
       1,    41,    42,    43,     0,     0,     0,     1,    41,    42,
      43,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,    49,    50,    51,   111,     5,     6,     1,    41,    42,
      43,     0,     0,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    48,     0,     0,     0,    49,    50,    51,
      48,     0,     0,     0,    49,    50,    97,   124,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,    49,    50,    51
};

static const yytype_int16 yycheck[] =
{
       0,     8,    24,    51,    77,    46,    39,    94,     8,    82,
      51,    58,    85,    13,    14,     3,     3,    39,     0,    26,
      42,    43,     3,    56,    46,    52,    26,     5,     6,    51,
      37,     3,    14,    52,    56,     9,    10,    37,    54,    72,
      55,    57,     3,     4,     5,     6,    28,    28,    29,    42,
      72,    41,    28,    29,    76,    77,    97,    40,   106,   100,
      82,    94,    13,    85,    28,    29,    53,    55,    14,    43,
      44,    52,    94,    52,    52,    97,   149,    53,   100,    54,
      55,   128,   129,   130,    55,    46,    53,    54,    52,    50,
      51,    52,    92,    55,    76,    56,    57,    25,    26,    27,
      28,    29,    39,   190,    25,    26,    27,    28,    29,    11,
      53,    39,   153,   161,     0,   188,    31,     3,   165,    21,
      47,    48,    49,     0,     7,     8,    28,   149,    56,    28,
      29,   153,     9,    10,   167,    56,    53,    14,    54,    25,
      26,    27,    28,    29,    53,   167,   194,    52,     3,     4,
       5,     6,   200,    52,    53,    45,    46,   190,    11,    12,
      53,   209,   135,   136,   137,   138,   188,   144,   190,    53,
      25,    26,    27,    28,    29,    30,   141,    32,    53,    34,
      35,     3,     4,     5,     6,    53,    54,   194,    28,    29,
      53,    46,   131,   132,   194,    50,    51,    52,   133,   134,
      55,    56,    57,    25,    26,    27,    28,    29,    30,   142,
      32,   143,    34,    35,     3,     4,     5,     6,    25,    26,
      27,    28,    29,   145,    46,   139,   140,    37,    50,    51,
      52,    51,    92,    55,    56,    57,    51,   200,   161,   209,
      24,    30,    76,    32,    14,    34,    35,     3,     4,     5,
       6,    -1,    21,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    55,    56,    57,    -1,
       3,     4,     5,     6,    30,    -1,    32,    -1,    34,    35,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,    55,
      56,    57,     3,     4,     5,     6,    -1,    30,    -1,    32,
      -1,    34,    35,    46,    -1,    -1,     3,    50,    51,    52,
      -1,    -1,    55,    46,    -1,    -1,    -1,    50,    51,    52,
      -1,    -1,    55,    56,     3,     4,     5,     6,    25,    26,
      27,    28,    29,    -1,    -1,    46,    -1,    -1,    -1,    50,
      51,    52,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,
      -1,    50,    51,    52,    53,    28,    29,     3,     4,     5,
       6,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    46,    -1,    -1,    -1,    50,    51,    52,
      46,    -1,    -1,    -1,    50,    51,    52,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    50,    51,    52
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    25,    26,    27,    28,    29,    81,    82,    85,
      86,    87,    88,    89,   115,   116,   117,   119,    55,    83,
      84,    87,    82,    82,    56,    81,    82,   102,   103,   118,
      52,    53,    91,    92,   119,     0,   116,    54,    55,    39,
     118,     4,     5,     6,    30,    32,    34,    35,    46,    50,
      51,    52,    55,    57,    59,    60,    61,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    80,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   111,   112,   113,   114,   119,    87,    81,
     102,    53,    54,    84,    56,    77,    99,    52,    63,    63,
      52,    55,    80,    55,    80,    86,    90,    96,     5,     6,
      52,    53,    62,    77,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    39,    79,    63,    65,    47,    48,
      49,    45,    46,     7,     8,     9,    10,    43,    44,    11,
      12,    42,    41,    40,    13,    14,    77,    55,    57,   104,
      57,   101,   101,    52,   101,    91,    99,   100,    80,    55,
      53,    52,    86,    97,    98,    53,    53,    54,    65,    65,
      65,    66,    66,    67,    67,    68,    68,    68,    68,    69,
      69,    70,    71,    72,    73,    74,    57,    31,   110,    80,
      54,    57,    53,    53,    90,    93,    94,    95,    96,    97,
      52,    65,    77,   101,    53,    57,    99,    87,    53,    54,
      53,    53,    93,    95,    53
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    59,    60,    60,    60,    60,    60,
      61,    62,    62,    63,    63,    63,    63,    64,    64,    64,
      65,    65,    66,    66,    66,    66,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    69,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    77,    77,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    80,    81,    81,    82,    82,
      82,    82,    83,    83,    84,    84,    85,    85,    85,    86,
      86,    87,    88,    88,    88,    89,    90,    90,    91,    92,
      92,    93,    94,    94,    95,    95,    96,    96,    97,    98,
      98,    98,    98,    98,    99,    99,    99,   100,   100,   101,
     101,   101,   101,   101,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   118,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     3,     1,     3,     2,     2,     2,
       2,     1,     3,     1,     2,     2,     2,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     1,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     3,     1,     2,
       1,     2,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     1,     3,     2,     1,     1,     2,     1,     3,
       2,     3,     3,     4,     1,     3,     4,     1,     3,     1,
       1,     1,     1,     1,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     1,     1,     2,     4,     4,     1,
       2,     1,     4,     2,     2,     3,     1,     2,     1,     1,
       2,     3,     1,     2,     1
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
  case 2: /* primary_expr: identifier  */
#line 79 "grammar.y"
                { /* printf("IDENTIFIER\n"); */
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    if (findvar(last_ident,func_tab) == -1) {
		      /* printf("\n***undeclared %s***\n",last_ident); */
		      undeclared++;
		    }
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!efetch(work))
		  return(1);
		}
#line 1545 "y.tab.c"
    break;

  case 3: /* primary_expr: CONSTANT  */
#line 94 "grammar.y"
                { /*printf("CONSTANT\n"); */
		 if (!econst(kk))
		   return(1);
		}
#line 1554 "y.tab.c"
    break;

  case 6: /* postfix_expr: fcall_start argument_expr_list ')'  */
#line 104 "grammar.y"
                { /* printf("FCALL\n"); */
		popid(func_ident,func_stack,&func_off); /* note ptr to off */
		if ((work = findvar(func_ident,func_tab)) == -1) {
		  /* printf("\n***declared %s***\n",func_ident); */
		  undeclared--; /*function name mistakenly undeclared*/
		  work = allocvar(func_ident,func_tab);
		}
		if(!efcall(work))
		  return(1);
		}
#line 1569 "y.tab.c"
    break;

  case 7: /* postfix_expr: fcall_start ')'  */
#line 115 "grammar.y"
                { /* printf("FCALL\n"); */
		popid(func_ident,func_stack,&func_off); /* note ptr to off */
		if ((work = findvar(func_ident,func_tab)) == -1) {
		  /* printf("\n***declared %s***\n",func_ident); */
		  undeclared--; /*function name mistakenly undeclared*/
		  work = allocvar(func_ident,func_tab);
		}
		if (!efcall(work))
		  return(1);
		}
#line 1584 "y.tab.c"
    break;

  case 8: /* postfix_expr: postfix_expr INC_OP  */
#line 126 "grammar.y"
                { /* printf("POSTFIX-INC\n"); */
		/* this is wrong!  same as infix increment */
		postfix++;
		if (!econst(1L))
		  return(1);
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if(!estore(work,ADD_ASSIGN))
		  return(1);
		}
#line 1603 "y.tab.c"
    break;

  case 9: /* postfix_expr: postfix_expr DEC_OP  */
#line 141 "grammar.y"
                { /* printf("POSTFIX-DEC\n"); */
		/* this is wrong!  same as infix decrement */
		postfix++;
		if (!econst(1L))
		  return(1);
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!estore(work,SUB_ASSIGN))
		  return(1);
		}
#line 1622 "y.tab.c"
    break;

  case 10: /* fcall_start: postfix_expr '('  */
#line 159 "grammar.y"
                { /* printf("FCALL-START\n"); */
		stackid(last_ident,func_stack,&func_off); /* note ptr to off */
		if (!eframe())
		  return(1);
		}
#line 1632 "y.tab.c"
    break;

  case 14: /* unary_expr: INC_OP unary_expr  */
#line 174 "grammar.y"
                { /* printf("INFIX-INC\n"); */
		if (!econst(1L))
		  return(1);
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!estore(work,ADD_ASSIGN))
		  return(1);
		}
#line 1649 "y.tab.c"
    break;

  case 15: /* unary_expr: DEC_OP unary_expr  */
#line 187 "grammar.y"
                { /* printf("INFIX-DEC\n"); */
		if (!econst(1L))
		  return(1);
		if ((work = findvar(last_ident,var_tab)) == -1)
		  if ((work = findvar(last_ident,ext_tab)) == -1) {
		    work = allocvar(last_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!estore(work,SUB_ASSIGN))
		  return(1);
		}
#line 1666 "y.tab.c"
    break;

  case 16: /* unary_expr: unary_operator cast_expr  */
#line 200 "grammar.y"
                { /* printf("UNARY-OP\n"); */
		/* note special tokens defined only to pass to interpreter */
		un_op = *(op_stack + op_off);
		op_off--;
		if (un_op == '-') {
		  if (!econst(0L))
		    return(1);
		  if (!ebinop(U_NEGATIVE))
		    return(1);
		} else if (un_op == '!') {
		  if (!econst(0L))
		    return(1);
		  if (!ebinop(U_NOT))
		    return(1);
		} else if (un_op == '~') {
		  if (!econst(0L))
		    return(1);
		  if (!ebinop(U_ONES))
		    return(1);
		}
		}
#line 1692 "y.tab.c"
    break;

  case 17: /* unary_operator: '-'  */
#line 225 "grammar.y"
                { /* printf("UNARY-OP\n"); */
		op_off++;
		*(op_stack + op_off) = '-';
		}
#line 1701 "y.tab.c"
    break;

  case 18: /* unary_operator: '!'  */
#line 230 "grammar.y"
                { 
		op_off++;
		*(op_stack + op_off) = '!';
		}
#line 1710 "y.tab.c"
    break;

  case 19: /* unary_operator: '~'  */
#line 235 "grammar.y"
                { 
		op_off++;
		*(op_stack + op_off) = '~';
		}
#line 1719 "y.tab.c"
    break;

  case 23: /* multiplicative_expr: multiplicative_expr '*' cast_expr  */
#line 249 "grammar.y"
                { /* printf("MULTIPLY\n"); */
		if (!ebinop('*'))
		  return(1);
		}
#line 1728 "y.tab.c"
    break;

  case 24: /* multiplicative_expr: multiplicative_expr '/' cast_expr  */
#line 254 "grammar.y"
                { /*printf("DIVIDE\n"); */
		if (!ebinop('/'))
		  return(1);
		}
#line 1737 "y.tab.c"
    break;

  case 25: /* multiplicative_expr: multiplicative_expr '%' cast_expr  */
#line 259 "grammar.y"
                { /* printf("MOD\n"); */
		if (!ebinop('%'))
		  return(1);
		}
#line 1746 "y.tab.c"
    break;

  case 27: /* additive_expr: additive_expr '+' multiplicative_expr  */
#line 268 "grammar.y"
                { /* printf("ADD\n"); */
		if (!ebinop('+'))
		  return(1);
		}
#line 1755 "y.tab.c"
    break;

  case 28: /* additive_expr: additive_expr '-' multiplicative_expr  */
#line 273 "grammar.y"
                { /* printf("SUBTRACT\n"); */
		if (!ebinop('-'))
		  return(1);
		}
#line 1764 "y.tab.c"
    break;

  case 30: /* shift_expr: shift_expr LEFT_OP additive_expr  */
#line 282 "grammar.y"
                { /* printf("SHIFT-LEFT\n"); */
		if (!ebinop(LEFT_OP))
		  return(1);
		}
#line 1773 "y.tab.c"
    break;

  case 31: /* shift_expr: shift_expr RIGHT_OP additive_expr  */
#line 287 "grammar.y"
                { /* printf("SHIFT-RIGHT\n"); */
		if (!ebinop(RIGHT_OP))
		  return(1);
		}
#line 1782 "y.tab.c"
    break;

  case 33: /* relational_expr: relational_expr '<' shift_expr  */
#line 296 "grammar.y"
                { /* printf("LESS-THAN\n"); */
		if (!ebinop('<'))
		  return(1);
		}
#line 1791 "y.tab.c"
    break;

  case 34: /* relational_expr: relational_expr '>' shift_expr  */
#line 301 "grammar.y"
                { /* printf("GREATER-THAN\n"); */
		if (!ebinop('>'))
		  return(1);
		}
#line 1800 "y.tab.c"
    break;

  case 35: /* relational_expr: relational_expr LE_OP shift_expr  */
#line 306 "grammar.y"
                { /*printf("LESS-EQUAL\n"); */
		if (!ebinop(LE_OP))
		  return(1);
		}
#line 1809 "y.tab.c"
    break;

  case 36: /* relational_expr: relational_expr GE_OP shift_expr  */
#line 311 "grammar.y"
                { /* printf("GREATER-EQUAL\n"); */
		if (!ebinop(GE_OP))
		  return(1);
		}
#line 1818 "y.tab.c"
    break;

  case 38: /* equality_expr: equality_expr EQ_OP relational_expr  */
#line 320 "grammar.y"
                { /* printf("EQUAL\n"); */
		if (!ebinop(EQ_OP))
		  return(1);
		}
#line 1827 "y.tab.c"
    break;

  case 39: /* equality_expr: equality_expr NE_OP relational_expr  */
#line 325 "grammar.y"
                { /* printf("NOT-EQUAL\n"); */
		if (!ebinop(NE_OP))
		  return(1);
		}
#line 1836 "y.tab.c"
    break;

  case 41: /* and_expr: and_expr '&' equality_expr  */
#line 334 "grammar.y"
                { /* printf("AND\n"); */
		if (!ebinop('&'))
		  return(1);
		}
#line 1845 "y.tab.c"
    break;

  case 43: /* exclusive_or_expr: exclusive_or_expr '^' and_expr  */
#line 343 "grammar.y"
                { /* printf("EXCLUSIVE-OR\n"); */
		if (!ebinop('^'))
		  return(1);
		}
#line 1854 "y.tab.c"
    break;

  case 45: /* inclusive_or_expr: inclusive_or_expr '|' exclusive_or_expr  */
#line 352 "grammar.y"
                { /* printf("INCLUSIVE-OR\n"); */
		if (!ebinop('|'))
		  return(1);
		}
#line 1863 "y.tab.c"
    break;

  case 47: /* logical_and_expr: logical_and_expr AND_OP inclusive_or_expr  */
#line 361 "grammar.y"
                { /* printf("LOGICAL-AND\n"); */
		if (!ebinop(AND_OP))
		  return(1);
		}
#line 1872 "y.tab.c"
    break;

  case 49: /* logical_or_expr: logical_or_expr OR_OP logical_and_expr  */
#line 370 "grammar.y"
                { /* printf("LOGICAL-OR\n"); */
		if (!ebinop(OR_OP))
		  return(1);
		}
#line 1881 "y.tab.c"
    break;

  case 52: /* assignment_expr: assignment_lval assignment_expr  */
#line 383 "grammar.y"
                { /* printf("ASSIGNMENT\n"); */
		/* func_ident used as temp storage */
		popid(func_ident,var_stack,&var_off); /* note ptr to off */
		if ((work = findvar(func_ident,var_tab)) == -1)
		  if ((work = findvar(func_ident,ext_tab)) == -1) {
		    work = allocvar(func_ident,var_tab);
		  }
		  else
		    work |= EXTERNAL;
		if (!estore(work,*(op_stack + op_off)))
		  return(1);
		op_off--;
		}
#line 1899 "y.tab.c"
    break;

  case 53: /* assignment_lval: unary_expr assignment_operator  */
#line 400 "grammar.y"
                { /* printf("ASSIGNMENT-LVAL\n"); */
		stackid(last_ident,var_stack,&var_off); /* note ptr to off */
		op_off++;
		*(op_stack + op_off) = work;
		}
#line 1909 "y.tab.c"
    break;

  case 54: /* assignment_operator: '='  */
#line 409 "grammar.y"
                { work =  '=';}
#line 1915 "y.tab.c"
    break;

  case 55: /* assignment_operator: MUL_ASSIGN  */
#line 411 "grammar.y"
                { work = MUL_ASSIGN;}
#line 1921 "y.tab.c"
    break;

  case 56: /* assignment_operator: DIV_ASSIGN  */
#line 413 "grammar.y"
                { work = DIV_ASSIGN;}
#line 1927 "y.tab.c"
    break;

  case 57: /* assignment_operator: MOD_ASSIGN  */
#line 415 "grammar.y"
                { work = MOD_ASSIGN;}
#line 1933 "y.tab.c"
    break;

  case 58: /* assignment_operator: ADD_ASSIGN  */
#line 417 "grammar.y"
                { work = ADD_ASSIGN;}
#line 1939 "y.tab.c"
    break;

  case 59: /* assignment_operator: SUB_ASSIGN  */
#line 419 "grammar.y"
                { work = SUB_ASSIGN;}
#line 1945 "y.tab.c"
    break;

  case 60: /* assignment_operator: LEFT_ASSIGN  */
#line 421 "grammar.y"
                { work = LEFT_ASSIGN;}
#line 1951 "y.tab.c"
    break;

  case 61: /* assignment_operator: RIGHT_ASSIGN  */
#line 423 "grammar.y"
                { work = RIGHT_ASSIGN;}
#line 1957 "y.tab.c"
    break;

  case 62: /* assignment_operator: AND_ASSIGN  */
#line 425 "grammar.y"
                { work = AND_ASSIGN;}
#line 1963 "y.tab.c"
    break;

  case 63: /* assignment_operator: XOR_ASSIGN  */
#line 427 "grammar.y"
                { work = XOR_ASSIGN;}
#line 1969 "y.tab.c"
    break;

  case 64: /* assignment_operator: OR_ASSIGN  */
#line 429 "grammar.y"
                { work = OR_ASSIGN;}
#line 1975 "y.tab.c"
    break;

  case 75: /* init_declarator: declarator '=' initializer  */
#line 456 "grammar.y"
                { /* printf("INITIALIZER\n"); */
		fprintf(yyout,"\n**Warning** unsupported initializer\n");
		/* get rid of constant placed on stack */
		if (!echop())
		  return(1);
		}
#line 1986 "y.tab.c"
    break;

  case 82: /* declarator2: identifier  */
#line 481 "grammar.y"
                { /* printf("VARIABLE-DECLARE\n"); */
		if (in_func) {
		  if (findvar(last_ident,var_tab) == -1)
		    allocvar(last_ident,var_tab);
		}
		else {
		  if (findvar(last_ident,ext_tab) == -1)
		    allocvar(last_ident,ext_tab);
		}
		}
#line 2001 "y.tab.c"
    break;

  case 83: /* declarator2: func_start ')'  */
#line 492 "grammar.y"
                { /* printf("FUNCTION-DECLARE\n"); */
		if (new_func() == -1)
		  return (1); /* exit the parser */
		}
#line 2010 "y.tab.c"
    break;

  case 84: /* declarator2: func_start parameter_declaration_list ')'  */
#line 497 "grammar.y"
                { /* printf("FUNCTION-DECLARE\n"); */
		if (new_func() == -1)
		  return (1); /* exit the parser */
		}
#line 2019 "y.tab.c"
    break;

  case 85: /* func_start: declarator2 '('  */
#line 505 "grammar.y"
                { /* printf("FUNCTION-DEF-START\n"); */
		strcpy(func_ident,last_ident);
		}
#line 2027 "y.tab.c"
    break;

  case 88: /* parameter_identifier: identifier  */
#line 517 "grammar.y"
                { /* printf("PARAMETER-DECLARE\n"); */
		allocvar(last_ident,var_tab);
		num_parm++;
		}
#line 2036 "y.tab.c"
    break;

  case 123: /* expression_statement: expr ';'  */
#line 598 "grammar.y"
                { /* printf("CHOP\n"); */
		if (!echop())
		  return(1);
		}
#line 2045 "y.tab.c"
    break;

  case 126: /* selection1_statement: if_clause statement  */
#line 611 "grammar.y"
                { /* printf("IF-THEN\n"); */
		else_part();
		close_if();
		}
#line 2054 "y.tab.c"
    break;

  case 127: /* selection2_statement: if_clause statement else_clause statement  */
#line 619 "grammar.y"
                { /* printf("IF-THEN-ELSE\n"); */
		close_if();
		}
#line 2062 "y.tab.c"
    break;

  case 128: /* if_clause: IF '(' expr ')'  */
#line 626 "grammar.y"
                { /* printf("IF-CLAUSE\n"); */
		if (!new_if())
		  return (1); /* exit parser */
		}
#line 2071 "y.tab.c"
    break;

  case 129: /* else_clause: ELSE  */
#line 634 "grammar.y"
                { /* printf("ELSE-CLAUSE\n"); */
		else_part();
		}
#line 2079 "y.tab.c"
    break;

  case 130: /* iteration_statement: while_clause statement  */
#line 641 "grammar.y"
                { /* printf("WHILE\n"); */
		close_while();
		}
#line 2087 "y.tab.c"
    break;

  case 131: /* while_token: WHILE  */
#line 648 "grammar.y"
                { /* printf("WHILE-TOKEN\n"); */
		if (!new_while())
		  return (1);  /* exit the parser */
		}
#line 2096 "y.tab.c"
    break;

  case 132: /* while_clause: while_token '(' expr ')'  */
#line 656 "grammar.y"
                { /* printf("WHILE-CLAUSE\n"); */
		while_expr();
		}
#line 2104 "y.tab.c"
    break;

  case 133: /* jump_statement: BREAK ';'  */
#line 663 "grammar.y"
                { /* printf("BREAK\n"); */
		/* breaks can be handled by building a instruct chain */
		/* as part of the while_nest structures and patching them */
		/* on while_close.  maybe later */
		fprintf(yyout,"\n**Warning** unsupported break\n");
		}
#line 2115 "y.tab.c"
    break;

  case 134: /* jump_statement: RETURN ';'  */
#line 670 "grammar.y"
                { /* printf("RETURN-NOEXPR\n"); */
		/* all functions must return a value */
		if (!econst(1L))
		  return(1);
		if (!eretsub())
		  return(1);
		}
#line 2127 "y.tab.c"
    break;

  case 135: /* jump_statement: RETURN expr ';'  */
#line 678 "grammar.y"
                { /* printf("RETURN\n"); */
		if (!eretsub())
		  return(1);
		}
#line 2136 "y.tab.c"
    break;

  case 138: /* external_definition: function_definition  */
#line 691 "grammar.y"
                { /* printf("FUNCTION-DEFINITION\n"); */
		/* all functions must return a value */
		if (!econst(1L))
		  return(1);
		if (!eretsub())
		  return(1);
		end_func();
		}
#line 2149 "y.tab.c"
    break;

  case 139: /* external_definition: declaration  */
#line 700 "grammar.y"
                { /* printf("EXTERNAL-DECLARE\n"); */
		}
#line 2156 "y.tab.c"
    break;


#line 2160 "y.tab.c"

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

