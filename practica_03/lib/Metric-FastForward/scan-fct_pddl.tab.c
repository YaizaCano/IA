/* A Bison parser, made by GNU Bison 3.6.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         fct_pddlparse
#define yylex           fct_pddllex
#define yyerror         fct_pddlerror
#define yydebug         fct_pddldebug
#define yynerrs         fct_pddlnerrs
#define yylval          fct_pddllval
#define yychar          fct_pddlchar

/* First part of user prologue.  */
#line 24 "scan-fct_pddl.y"

#ifdef YYDEBUG
  extern int yydebug=1;
#endif


#include <stdio.h>
#include <string.h> 
#include "ff.h"
#include "memory.h"
#include "parse.h"


#ifndef SCAN_ERR
#define SCAN_ERR
#define DEFINE_EXPECTED            0
#define PROBLEM_EXPECTED           1
#define PROBNAME_EXPECTED          2
#define LBRACKET_EXPECTED          3
#define RBRACKET_EXPECTED          4
#define DOMDEFS_EXPECTED           5
#define REQUIREM_EXPECTED          6
#define TYPEDLIST_EXPECTED         7
#define DOMEXT_EXPECTED            8
#define DOMEXTNAME_EXPECTED        9
#define TYPEDEF_EXPECTED          10
#define CONSTLIST_EXPECTED        11
#define PREDDEF_EXPECTED          12 
#define NAME_EXPECTED             13
#define VARIABLE_EXPECTED         14
#define ACTIONFUNCTOR_EXPECTED    15
#define ATOM_FORMULA_EXPECTED     16
#define EFFECT_DEF_EXPECTED       17
#define NEG_FORMULA_EXPECTED      18
#define NOT_SUPPORTED             19
#define SITUATION_EXPECTED        20
#define SITNAME_EXPECTED          21
#define BDOMAIN_EXPECTED          22
#define BADDOMAIN                 23
#define INIFACTS                  24
#define GOALDEF                   25
#define ADLGOAL                   26
#endif


static char * serrmsg[] = {
  "'define' expected",
  "'problem' expected",
  "problem name expected",
  "'(' expected",
  "')' expected",
  "additional domain definitions expected",
  "requirements (e.g. ':strips') expected",
  "typed list of <%s> expected",
  "domain extension expected",
  "domain to be extented expected",
  "type definition expected",
  "list of constants expected",
  "predicate definition expected",
  "<name> expected",
  "<variable> expected",
  "action functor expected",
  "atomic formula expected",
  "effect definition expected",
  "negated atomic formula expected",
  "requirement %s not supported by this IPP version",  
  "'situation' expected",
  "situation name expected",
  "':domain' expected",
  "this problem needs another domain file",
  "initial facts definition expected",
  "goal definition expected",
  "first order logic expression expected",
  NULL
};


void fcterr( int errno, char *par );


static int sact_err;
static char *sact_err_par = NULL;
static Bool sis_negated = FALSE;


#line 164 "scan-fct_pddl.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int fct_pddldebug;
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
    DEFINE_TOK = 258,              /* DEFINE_TOK  */
    PROBLEM_TOK = 259,             /* PROBLEM_TOK  */
    SITUATION_TOK = 260,           /* SITUATION_TOK  */
    BSITUATION_TOK = 261,          /* BSITUATION_TOK  */
    OBJECTS_TOK = 262,             /* OBJECTS_TOK  */
    BDOMAIN_TOK = 263,             /* BDOMAIN_TOK  */
    INIT_TOK = 264,                /* INIT_TOK  */
    GOAL_TOK = 265,                /* GOAL_TOK  */
    METRIC_TOK = 266,              /* METRIC_TOK  */
    AND_TOK = 267,                 /* AND_TOK  */
    NOT_TOK = 268,                 /* NOT_TOK  */
    NAME = 269,                    /* NAME  */
    VARIABLE = 270,                /* VARIABLE  */
    NUM = 271,                     /* NUM  */
    LE_TOK = 272,                  /* LE_TOK  */
    LEQ_TOK = 273,                 /* LEQ_TOK  */
    EQ_TOK = 274,                  /* EQ_TOK  */
    GEQ_TOK = 275,                 /* GEQ_TOK  */
    GE_TOK = 276,                  /* GE_TOK  */
    MINUS_TOK = 277,               /* MINUS_TOK  */
    AD_TOK = 278,                  /* AD_TOK  */
    MU_TOK = 279,                  /* MU_TOK  */
    DI_TOK = 280,                  /* DI_TOK  */
    FORALL_TOK = 281,              /* FORALL_TOK  */
    IMPLY_TOK = 282,               /* IMPLY_TOK  */
    OR_TOK = 283,                  /* OR_TOK  */
    EXISTS_TOK = 284,              /* EXISTS_TOK  */
    EITHER_TOK = 285,              /* EITHER_TOK  */
    OPEN_PAREN = 286,              /* OPEN_PAREN  */
    CLOSE_PAREN = 287              /* CLOSE_PAREN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 114 "scan-fct_pddl.y"


  char string[MAX_LENGTH];
  char* pstring;
  ParseExpNode *pParseExpNode;
  PlNode* pPlNode;
  FactList* pFactList;
  TokenList* pTokenList;
  TypedList* pTypedList;


#line 255 "scan-fct_pddl.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE fct_pddllval;

int fct_pddlparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DEFINE_TOK = 3,                 /* DEFINE_TOK  */
  YYSYMBOL_PROBLEM_TOK = 4,                /* PROBLEM_TOK  */
  YYSYMBOL_SITUATION_TOK = 5,              /* SITUATION_TOK  */
  YYSYMBOL_BSITUATION_TOK = 6,             /* BSITUATION_TOK  */
  YYSYMBOL_OBJECTS_TOK = 7,                /* OBJECTS_TOK  */
  YYSYMBOL_BDOMAIN_TOK = 8,                /* BDOMAIN_TOK  */
  YYSYMBOL_INIT_TOK = 9,                   /* INIT_TOK  */
  YYSYMBOL_GOAL_TOK = 10,                  /* GOAL_TOK  */
  YYSYMBOL_METRIC_TOK = 11,                /* METRIC_TOK  */
  YYSYMBOL_AND_TOK = 12,                   /* AND_TOK  */
  YYSYMBOL_NOT_TOK = 13,                   /* NOT_TOK  */
  YYSYMBOL_NAME = 14,                      /* NAME  */
  YYSYMBOL_VARIABLE = 15,                  /* VARIABLE  */
  YYSYMBOL_NUM = 16,                       /* NUM  */
  YYSYMBOL_LE_TOK = 17,                    /* LE_TOK  */
  YYSYMBOL_LEQ_TOK = 18,                   /* LEQ_TOK  */
  YYSYMBOL_EQ_TOK = 19,                    /* EQ_TOK  */
  YYSYMBOL_GEQ_TOK = 20,                   /* GEQ_TOK  */
  YYSYMBOL_GE_TOK = 21,                    /* GE_TOK  */
  YYSYMBOL_MINUS_TOK = 22,                 /* MINUS_TOK  */
  YYSYMBOL_AD_TOK = 23,                    /* AD_TOK  */
  YYSYMBOL_MU_TOK = 24,                    /* MU_TOK  */
  YYSYMBOL_DI_TOK = 25,                    /* DI_TOK  */
  YYSYMBOL_FORALL_TOK = 26,                /* FORALL_TOK  */
  YYSYMBOL_IMPLY_TOK = 27,                 /* IMPLY_TOK  */
  YYSYMBOL_OR_TOK = 28,                    /* OR_TOK  */
  YYSYMBOL_EXISTS_TOK = 29,                /* EXISTS_TOK  */
  YYSYMBOL_EITHER_TOK = 30,                /* EITHER_TOK  */
  YYSYMBOL_OPEN_PAREN = 31,                /* OPEN_PAREN  */
  YYSYMBOL_CLOSE_PAREN = 32,               /* CLOSE_PAREN  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_file = 34,                      /* file  */
  YYSYMBOL_problem_definition = 35,        /* problem_definition  */
  YYSYMBOL_36_1 = 36,                      /* $@1  */
  YYSYMBOL_problem_name = 37,              /* problem_name  */
  YYSYMBOL_base_domain_name = 38,          /* base_domain_name  */
  YYSYMBOL_problem_defs = 39,              /* problem_defs  */
  YYSYMBOL_objects_def = 40,               /* objects_def  */
  YYSYMBOL_init_def = 41,                  /* init_def  */
  YYSYMBOL_42_2 = 42,                      /* $@2  */
  YYSYMBOL_goal_def = 43,                  /* goal_def  */
  YYSYMBOL_44_3 = 44,                      /* $@3  */
  YYSYMBOL_metric_def = 45,                /* metric_def  */
  YYSYMBOL_adl_goal_description = 46,      /* adl_goal_description  */
  YYSYMBOL_adl_goal_description_star = 47, /* adl_goal_description_star  */
  YYSYMBOL_init_el_plus = 48,              /* init_el_plus  */
  YYSYMBOL_init_el = 49,                   /* init_el  */
  YYSYMBOL_f_exp = 50,                     /* f_exp  */
  YYSYMBOL_ground_f_exp = 51,              /* ground_f_exp  */
  YYSYMBOL_literal_term = 52,              /* literal_term  */
  YYSYMBOL_atomic_formula_term = 53,       /* atomic_formula_term  */
  YYSYMBOL_term_star = 54,                 /* term_star  */
  YYSYMBOL_term = 55,                      /* term  */
  YYSYMBOL_name_plus = 56,                 /* name_plus  */
  YYSYMBOL_typed_list_name = 57,           /* typed_list_name  */
  YYSYMBOL_typed_list_variable = 58,       /* typed_list_variable  */
  YYSYMBOL_predicate = 59,                 /* predicate  */
  YYSYMBOL_literal_name = 60,              /* literal_name  */
  YYSYMBOL_atomic_formula_name = 61,       /* atomic_formula_name  */
  YYSYMBOL_name_star = 62                  /* name_star  */
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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   203

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

#define YYMAXUTOK   287


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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINEYYN -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   182,   182,   185,   192,   191,   207,   217,   228,   231,
     233,   235,   237,   239,   245,   255,   254,   269,   268,   282,
     307,   315,   323,   331,   339,   347,   360,   366,   372,   378,
     388,   403,   426,   430,   449,   454,   464,   469,   486,   514,
     522,   531,   537,   544,   551,   558,   569,   577,   586,   592,
     599,   606,   613,   624,   630,   639,   646,   659,   663,   674,
     680,   690,   697,   710,   712,   721,   732,   752,   754,   763,
     774,   795,   820,   830,   840,   852,   854
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
  "\"end of file\"", "error", "\"invalid token\"", "DEFINE_TOK",
  "PROBLEM_TOK", "SITUATION_TOK", "BSITUATION_TOK", "OBJECTS_TOK",
  "BDOMAIN_TOK", "INIT_TOK", "GOAL_TOK", "METRIC_TOK", "AND_TOK",
  "NOT_TOK", "NAME", "VARIABLE", "NUM", "LE_TOK", "LEQ_TOK", "EQ_TOK",
  "GEQ_TOK", "GE_TOK", "MINUS_TOK", "AD_TOK", "MU_TOK", "DI_TOK",
  "FORALL_TOK", "IMPLY_TOK", "OR_TOK", "EXISTS_TOK", "EITHER_TOK",
  "OPEN_PAREN", "CLOSE_PAREN", "$accept", "file", "problem_definition",
  "$@1", "problem_name", "base_domain_name", "problem_defs", "objects_def",
  "init_def", "$@2", "goal_def", "$@3", "metric_def",
  "adl_goal_description", "adl_goal_description_star", "init_el_plus",
  "init_el", "f_exp", "ground_f_exp", "literal_term",
  "atomic_formula_term", "term_star", "term", "name_plus",
  "typed_list_name", "typed_list_variable", "predicate", "literal_name",
  "atomic_formula_name", "name_star", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287
};
#endif

#define YYPACT_NINF (-104)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACTSTATE-NUM -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -9,    20,    26,    -9,  -104,  -104,  -104,    -4,    45,    19,
      39,   117,    19,    23,    19,    19,    19,    19,    24,    57,
      61,  -104,  -104,    69,  -104,  -104,  -104,  -104,  -104,  -104,
    -104,    40,    25,    52,    54,    62,    42,    74,    80,  -104,
    -104,  -104,    68,    63,    54,  -104,  -104,    84,    67,  -104,
    -104,  -104,    55,    75,    57,    80,    76,    88,  -104,    11,
      86,  -104,  -104,    62,    62,    43,    43,     0,    43,    43,
      98,    62,    62,   100,     4,  -104,    86,    42,    42,    42,
      42,  -104,  -104,  -104,    57,   119,   102,   120,   121,    86,
     105,    62,   107,   108,   109,  -104,    92,    43,    43,  -104,
    -104,    43,   110,     4,    43,    43,   123,    62,   111,   123,
     112,   113,    12,    42,    42,    42,  -104,  -104,   114,    86,
    -104,  -104,  -104,  -104,  -104,  -104,     4,    43,    43,    43,
      43,   115,   116,   118,  -104,  -104,   122,   124,     2,   125,
     126,  -104,   127,  -104,  -104,  -104,   128,   129,   130,   131,
    -104,   132,   133,    36,    43,    43,    43,  -104,  -104,  -104,
    -104,  -104,   135,    80,  -104,    62,  -104,    62,  -104,  -104,
    -104,  -104,   136,  -104,  -104,   134,   137,   138,   139,   123,
     140,   141,   142,   143,  -104,  -104,  -104,  -104,  -104,   123,
    -104,  -104,  -104,  -104
};

  /* YYDEFACTSTATE-NUM -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     2,     4,     1,     3,     0,     0,     8,
       0,     0,     8,     0,     8,     8,     8,     8,     0,    63,
       0,    15,    17,     0,    12,     5,     9,    10,    11,    13,
       6,    63,     0,     0,     0,     0,     0,     0,     0,    66,
      14,     7,     0,     0,    34,    36,    73,     0,     0,    25,
      54,    46,     0,     0,    63,    61,     0,     0,    71,     0,
      75,    16,    35,    32,     0,     0,     0,    57,     0,     0,
       0,     0,    32,     0,    57,    18,    75,     0,     0,     0,
       0,    19,    65,    62,    63,     0,     0,     0,     0,    75,
       0,    32,     0,     0,     0,    39,     0,     0,     0,    59,
      60,     0,     0,    57,     0,     0,    67,     0,     0,    67,
       0,     0,     0,     0,     0,     0,    64,    72,     0,    75,
      76,    74,    33,    26,    28,    53,    57,     0,     0,     0,
       0,     0,     0,     0,    56,    58,     0,     0,    67,     0,
       0,    27,     0,    55,    47,    48,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    20,    21,    22,
      23,    24,     0,     0,    70,     0,    29,     0,    50,    49,
      51,    52,     0,    40,    41,     0,     0,     0,     0,    67,
       0,     0,     0,     0,    43,    42,    44,    45,    69,    67,
      31,    30,    37,    68
};

  /* YYPGOTONTERM-NUM.  */
static const yytype_int16 yypgoto[] =
{
    -104,   148,  -104,  -104,  -104,  -104,   106,  -104,  -104,  -104,
    -104,  -104,  -104,   -35,   -52,   144,  -104,   -64,   -67,  -104,
      89,   -65,  -104,   -54,   -24,  -103,   145,  -104,   146,   -68
};

  /* YYDEFGOTONTERM-NUM.  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     7,     9,    12,    13,    14,    15,    34,
      16,    35,    17,    91,    92,    43,    44,    97,    53,    49,
      50,   102,   103,    56,    32,   139,    60,    45,    46,    90
};

  /* YYTABLEYYPACT[STATE-NUM] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,    83,    98,   101,   104,   105,   142,    39,   111,   110,
     112,   113,   114,   115,    99,   100,    95,   138,    99,   100,
     108,   120,     1,     4,   162,    87,     5,     8,    51,    93,
      82,    96,   163,   131,   132,   164,   107,   133,   135,   122,
     136,   137,    88,    52,   145,   146,   147,   148,   149,    10,
      11,   151,    95,    18,    31,    25,    30,    40,    51,    95,
     116,   152,    37,   153,   154,   155,   156,    96,   174,    76,
      38,    31,   140,    52,    96,    33,   188,    77,    78,    79,
      80,    57,    58,    36,    41,    42,   193,    59,    54,   175,
     176,   177,   178,    47,    55,    61,    63,    64,    58,    75,
      89,    65,    66,    67,    68,    69,   126,    81,    84,   180,
      70,    71,    72,    73,   127,   128,   129,   130,    24,    85,
      26,    27,    28,    29,    19,    20,    21,    22,    23,   106,
     181,   109,   182,    58,   117,   119,   118,   121,   138,   123,
     124,   125,   134,   141,   143,   144,   150,   157,   158,   179,
     159,     6,   183,    94,   160,     0,   161,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   184,     0,     0,   185,
     186,   187,   189,   190,   191,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    62,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86
};

static const yytype_int16 yycheck[] =
{
      35,    55,    66,    67,    68,    69,   109,    31,    76,    74,
      77,    78,    79,    80,    14,    15,    16,    15,    14,    15,
      72,    89,    31,     3,    22,    14,     0,    31,    16,    64,
      54,    31,    30,    97,    98,   138,    71,   101,   103,    91,
     104,   105,    31,    31,    32,   112,   113,   114,   115,     4,
      31,   119,    16,    14,    14,    32,    32,    32,    16,    16,
      84,   126,    22,   127,   128,   129,   130,    31,    32,    14,
      30,    14,   107,    31,    31,    14,   179,    22,    23,    24,
      25,    13,    14,    14,    32,    31,   189,    19,    14,   153,
     154,   155,   156,    31,    14,    32,    12,    13,    14,    32,
      14,    17,    18,    19,    20,    21,    14,    32,    32,   163,
      26,    27,    28,    29,    22,    23,    24,    25,    12,    31,
      14,    15,    16,    17,     7,     8,     9,    10,    11,    31,
     165,    31,   167,    14,    32,    14,    16,    32,    15,    32,
      32,    32,    32,    32,    32,    32,    32,    32,    32,    14,
      32,     3,    16,    64,    32,    -1,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    32,    32,    -1,    -1,    32,
      32,    32,    32,    32,    32,    32,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57
};

  /* YYSTOSSTATE-NUM -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    34,    35,     3,     0,    34,    36,    31,    37,
       4,    31,    38,    39,    40,    41,    43,    45,    14,     7,
       8,     9,    10,    11,    39,    32,    39,    39,    39,    39,
      32,    14,    57,    14,    42,    44,    14,    22,    30,    57,
      32,    32,    31,    48,    49,    60,    61,    31,    46,    52,
      53,    16,    31,    51,    14,    14,    56,    13,    14,    19,
      59,    32,    48,    12,    13,    17,    18,    19,    20,    21,
      26,    27,    28,    29,    59,    32,    14,    22,    23,    24,
      25,    32,    57,    56,    32,    31,    61,    14,    31,    14,
      62,    46,    47,    46,    53,    16,    31,    50,    50,    14,
      15,    50,    54,    55,    50,    50,    31,    46,    47,    31,
      54,    62,    51,    51,    51,    51,    57,    32,    16,    14,
      62,    32,    47,    32,    32,    32,    14,    22,    23,    24,
      25,    50,    50,    50,    32,    54,    50,    50,    15,    58,
      46,    32,    58,    32,    32,    32,    51,    51,    51,    51,
      32,    62,    54,    50,    50,    50,    50,    32,    32,    32,
      32,    32,    22,    30,    58,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    32,    50,    50,    50,    50,    14,
      56,    46,    46,    16,    32,    32,    32,    32,    58,    32,
      32,    32,    32,    58
};

  /* YYR1YYN -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    34,    36,    35,    37,    38,    39,    39,
      39,    39,    39,    39,    40,    42,    41,    44,    43,    45,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    47,    47,    48,    48,    49,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    51,    51,    51,    51,
      51,    51,    51,    52,    52,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    57,    57,    58,    58,    58,
      58,    59,    60,    60,    61,    62,    62
};

  /* YYR2YYN -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     6,     4,     4,     0,     2,
       2,     2,     2,     2,     4,     0,     5,     0,     5,     5,
       5,     5,     5,     5,     5,     1,     4,     4,     4,     5,
       7,     7,     0,     2,     1,     2,     1,     8,     5,     1,
       4,     4,     5,     5,     5,     5,     1,     4,     4,     5,
       5,     5,     5,     4,     1,     4,     4,     0,     2,     1,
       1,     1,     2,     0,     5,     4,     2,     0,     5,     4,
       2,     1,     4,     1,     4,     0,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
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
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;


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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 4:
#line 192 "scan-fct_pddl.y"
{ 
  //fcterr( PROBNAME_EXPECTED, NULL ); 
}
#line 1429 "scan-fct_pddl.tab.c"
    break;

  case 5:
#line 196 "scan-fct_pddl.y"
{  
  gproblem_name = (yyvsp[-2].pstring);
  if ( gcmd_line.display_info >= 1 ) {
    printf("\nproblem '%s' defined\n", gproblem_name);
  }
}
#line 1440 "scan-fct_pddl.tab.c"
    break;

  case 6:
#line 208 "scan-fct_pddl.y"
{ 
  (yyval.pstring) = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy((yyval.pstring), (yyvsp[-1].string));
}
#line 1449 "scan-fct_pddl.tab.c"
    break;

  case 7:
#line 218 "scan-fct_pddl.y"
{ 
  if ( SAME != strcmp((yyvsp[-1].string), gdomain_name) ) {
    //fcterr( BADDOMAIN, NULL );
    yyerror();
  }
}
#line 1460 "scan-fct_pddl.tab.c"
    break;

  case 14:
#line 246 "scan-fct_pddl.y"
{ 
  gparse_objects = (yyvsp[-1].pTypedList);
}
#line 1468 "scan-fct_pddl.tab.c"
    break;

  case 15:
#line 255 "scan-fct_pddl.y"
{
  //fcterr( INIFACTS, NULL ); 
}
#line 1476 "scan-fct_pddl.tab.c"
    break;

  case 16:
#line 259 "scan-fct_pddl.y"
{
  gorig_initial_facts = new_PlNode(AND);
  gorig_initial_facts->sons = (yyvsp[-1].pPlNode);
}
#line 1485 "scan-fct_pddl.tab.c"
    break;

  case 17:
#line 269 "scan-fct_pddl.y"
{ 
  //fcterr( GOALDEF, NULL ); 
}
#line 1493 "scan-fct_pddl.tab.c"
    break;

  case 18:
#line 273 "scan-fct_pddl.y"
{
  (yyvsp[-1].pPlNode)->next = gorig_goal_facts;
  gorig_goal_facts = (yyvsp[-1].pPlNode);
}
#line 1502 "scan-fct_pddl.tab.c"
    break;

  case 19:
#line 283 "scan-fct_pddl.y"
{

  if ( gparse_metric != NULL ) {
    printf("\n\ndouble metric specification!\n\n");
    exit( 1 );
  }

  gparse_optimization = (yyvsp[-2].string);
  gparse_metric = (yyvsp[-1].pParseExpNode);

}
#line 1518 "scan-fct_pddl.tab.c"
    break;

  case 20:
#line 308 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = LE;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1529 "scan-fct_pddl.tab.c"
    break;

  case 21:
#line 316 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = LEQ;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1540 "scan-fct_pddl.tab.c"
    break;

  case 22:
#line 324 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = EQ;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1551 "scan-fct_pddl.tab.c"
    break;

  case 23:
#line 332 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = GEQ;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1562 "scan-fct_pddl.tab.c"
    break;

  case 24:
#line 340 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = new_PlNode(COMP);
  (yyval.pPlNode)->comp = GE;
  (yyval.pPlNode)->lh = (yyvsp[-2].pParseExpNode);
  (yyval.pPlNode)->rh = (yyvsp[-1].pParseExpNode);
}
#line 1573 "scan-fct_pddl.tab.c"
    break;

  case 25:
#line 348 "scan-fct_pddl.y"
{ 
  if ( sis_negated ) {
    (yyval.pPlNode) = new_PlNode(NOT);
    (yyval.pPlNode)->sons = new_PlNode(ATOM);
    (yyval.pPlNode)->sons->atom = (yyvsp[0].pTokenList);
    sis_negated = FALSE;
  } else {
    (yyval.pPlNode) = new_PlNode(ATOM);
    (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
  }
}
#line 1589 "scan-fct_pddl.tab.c"
    break;

  case 26:
#line 361 "scan-fct_pddl.y"
{ 
  (yyval.pPlNode) = new_PlNode(AND);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1598 "scan-fct_pddl.tab.c"
    break;

  case 27:
#line 367 "scan-fct_pddl.y"
{ 
  (yyval.pPlNode) = new_PlNode(OR);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1607 "scan-fct_pddl.tab.c"
    break;

  case 28:
#line 373 "scan-fct_pddl.y"
{ 
  (yyval.pPlNode) = new_PlNode(NOT);
  (yyval.pPlNode)->sons = (yyvsp[-1].pPlNode);
}
#line 1616 "scan-fct_pddl.tab.c"
    break;

  case 29:
#line 379 "scan-fct_pddl.y"
{ 
  PlNode *np = new_PlNode(NOT);
  np->sons = (yyvsp[-2].pPlNode);
  np->next = (yyvsp[-1].pPlNode);

  (yyval.pPlNode) = new_PlNode(OR);
  (yyval.pPlNode)->sons = np;
}
#line 1629 "scan-fct_pddl.tab.c"
    break;

  case 30:
#line 391 "scan-fct_pddl.y"
{ 

  PlNode *pln;

  pln = new_PlNode(EX);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 1645 "scan-fct_pddl.tab.c"
    break;

  case 31:
#line 406 "scan-fct_pddl.y"
{ 

  PlNode *pln;

  pln = new_PlNode(ALL);
  pln->parse_vars = (yyvsp[-3].pTypedList);

  (yyval.pPlNode) = pln;
  pln->sons = (yyvsp[-1].pPlNode);

}
#line 1661 "scan-fct_pddl.tab.c"
    break;

  case 32:
#line 426 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = NULL;
}
#line 1669 "scan-fct_pddl.tab.c"
    break;

  case 33:
#line 431 "scan-fct_pddl.y"
{
  (yyvsp[-1].pPlNode)->next = (yyvsp[0].pPlNode);
  (yyval.pPlNode) = (yyvsp[-1].pPlNode);
}
#line 1678 "scan-fct_pddl.tab.c"
    break;

  case 34:
#line 450 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = (yyvsp[0].pPlNode);
}
#line 1686 "scan-fct_pddl.tab.c"
    break;

  case 35:
#line 455 "scan-fct_pddl.y"
{
   (yyval.pPlNode) = (yyvsp[-1].pPlNode);
   (yyval.pPlNode)->next = (yyvsp[0].pPlNode);
}
#line 1695 "scan-fct_pddl.tab.c"
    break;

  case 36:
#line 465 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = (yyvsp[0].pPlNode);
}
#line 1703 "scan-fct_pddl.tab.c"
    break;

  case 37:
#line 470 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = new_PlNode( COMP );
  (yyval.pPlNode)->comp = EQ;

  (yyval.pPlNode)->lh = new_ParseExpNode( FHEAD );
  (yyval.pPlNode)->lh->atom = new_TokenList();
  (yyval.pPlNode)->lh->atom->item = new_Token( strlen((yyvsp[-4].string))+1 );
  strcpy( (yyval.pPlNode)->lh->atom->item, (yyvsp[-4].string) );
  (yyval.pPlNode)->lh->atom->next = (yyvsp[-3].pTokenList);

  (yyval.pPlNode)->rh = new_ParseExpNode( NUMBER );
  (yyval.pPlNode)->rh->atom = new_TokenList();
  (yyval.pPlNode)->rh->atom->item = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pPlNode)->rh->atom->item, (yyvsp[-1].string) );
}
#line 1723 "scan-fct_pddl.tab.c"
    break;

  case 38:
#line 487 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = new_PlNode( COMP );
  (yyval.pPlNode)->comp = EQ;

  (yyval.pPlNode)->lh = new_ParseExpNode( FHEAD );
  (yyval.pPlNode)->lh->atom = new_TokenList();
  (yyval.pPlNode)->lh->atom->item = new_Token( strlen((yyvsp[-2].string))+1 );
  strcpy( (yyval.pPlNode)->lh->atom->item, (yyvsp[-2].string) );

  (yyval.pPlNode)->rh = new_ParseExpNode( NUMBER );
  (yyval.pPlNode)->rh->atom = new_TokenList();
  (yyval.pPlNode)->rh->atom->item = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pPlNode)->rh->atom->item, (yyvsp[-1].string) );
}
#line 1742 "scan-fct_pddl.tab.c"
    break;

  case 39:
#line 515 "scan-fct_pddl.y"
{ 
  (yyval.pParseExpNode) = new_ParseExpNode( NUMBER );
  (yyval.pParseExpNode)->atom = new_TokenList();
  (yyval.pParseExpNode)->atom->item = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pParseExpNode)->atom->item, (yyvsp[0].string) );
}
#line 1753 "scan-fct_pddl.tab.c"
    break;

  case 40:
#line 523 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( FHEAD );
  (yyval.pParseExpNode)->atom = new_TokenList();
  (yyval.pParseExpNode)->atom->item = new_Token( strlen((yyvsp[-2].string))+1 );
  strcpy( (yyval.pParseExpNode)->atom->item, (yyvsp[-2].string) );
  (yyval.pParseExpNode)->atom->next = (yyvsp[-1].pTokenList);
}
#line 1765 "scan-fct_pddl.tab.c"
    break;

  case 41:
#line 532 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( MINUS );
  (yyval.pParseExpNode)->leftson = (yyvsp[-1].pParseExpNode);
}
#line 1774 "scan-fct_pddl.tab.c"
    break;

  case 42:
#line 538 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( AD );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 1784 "scan-fct_pddl.tab.c"
    break;

  case 43:
#line 545 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( SU );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 1794 "scan-fct_pddl.tab.c"
    break;

  case 44:
#line 552 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( MU );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 1804 "scan-fct_pddl.tab.c"
    break;

  case 45:
#line 559 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( DI );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 1814 "scan-fct_pddl.tab.c"
    break;

  case 46:
#line 570 "scan-fct_pddl.y"
{ 
  (yyval.pParseExpNode) = new_ParseExpNode( NUMBER );
  (yyval.pParseExpNode)->atom = new_TokenList();
  (yyval.pParseExpNode)->atom->item = new_Token( strlen((yyvsp[0].string))+1 );
  strcpy( (yyval.pParseExpNode)->atom->item, (yyvsp[0].string) );
}
#line 1825 "scan-fct_pddl.tab.c"
    break;

  case 47:
#line 578 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( FHEAD );
  (yyval.pParseExpNode)->atom = new_TokenList();
  (yyval.pParseExpNode)->atom->item = new_Token( strlen((yyvsp[-2].string))+1 );
  strcpy( (yyval.pParseExpNode)->atom->item, (yyvsp[-2].string) );
  (yyval.pParseExpNode)->atom->next = (yyvsp[-1].pTokenList);
}
#line 1837 "scan-fct_pddl.tab.c"
    break;

  case 48:
#line 587 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( MINUS );
  (yyval.pParseExpNode)->leftson = (yyvsp[-1].pParseExpNode);
}
#line 1846 "scan-fct_pddl.tab.c"
    break;

  case 49:
#line 593 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( AD );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 1856 "scan-fct_pddl.tab.c"
    break;

  case 50:
#line 600 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( SU );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 1866 "scan-fct_pddl.tab.c"
    break;

  case 51:
#line 607 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( MU );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 1876 "scan-fct_pddl.tab.c"
    break;

  case 52:
#line 614 "scan-fct_pddl.y"
{
  (yyval.pParseExpNode) = new_ParseExpNode( DI );
  (yyval.pParseExpNode)->leftson = (yyvsp[-2].pParseExpNode);
  (yyval.pParseExpNode)->rightson = (yyvsp[-1].pParseExpNode);
}
#line 1886 "scan-fct_pddl.tab.c"
    break;

  case 53:
#line 625 "scan-fct_pddl.y"
{ 
  (yyval.pTokenList) = (yyvsp[-1].pTokenList);
  sis_negated = TRUE;
}
#line 1895 "scan-fct_pddl.tab.c"
    break;

  case 54:
#line 631 "scan-fct_pddl.y"
{
  (yyval.pTokenList) = (yyvsp[0].pTokenList);
}
#line 1903 "scan-fct_pddl.tab.c"
    break;

  case 55:
#line 640 "scan-fct_pddl.y"
{ 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-2].pstring);
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 1913 "scan-fct_pddl.tab.c"
    break;

  case 56:
#line 647 "scan-fct_pddl.y"
{
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token( 5 );
  (yyval.pTokenList)->item = "=";
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 1924 "scan-fct_pddl.tab.c"
    break;

  case 57:
#line 659 "scan-fct_pddl.y"
{
  (yyval.pTokenList) = NULL;
}
#line 1932 "scan-fct_pddl.tab.c"
    break;

  case 58:
#line 664 "scan-fct_pddl.y"
{
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-1].pstring);
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 1942 "scan-fct_pddl.tab.c"
    break;

  case 59:
#line 675 "scan-fct_pddl.y"
{ 
  (yyval.pstring) = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pstring), (yyvsp[0].string));
}
#line 1951 "scan-fct_pddl.tab.c"
    break;

  case 60:
#line 681 "scan-fct_pddl.y"
{ 
  (yyval.pstring) = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pstring), (yyvsp[0].string));
}
#line 1960 "scan-fct_pddl.tab.c"
    break;

  case 61:
#line 691 "scan-fct_pddl.y"
{
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pTokenList)->item, (yyvsp[0].string));
}
#line 1970 "scan-fct_pddl.tab.c"
    break;

  case 62:
#line 698 "scan-fct_pddl.y"
{
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token(strlen((yyvsp[-1].string)) + 1);
  strcpy((yyval.pTokenList)->item, (yyvsp[-1].string));
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 1981 "scan-fct_pddl.tab.c"
    break;

  case 63:
#line 710 "scan-fct_pddl.y"
{ (yyval.pTypedList) = NULL; }
#line 1987 "scan-fct_pddl.tab.c"
    break;

  case 64:
#line 713 "scan-fct_pddl.y"
{ 
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-4].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-4].string) );
  (yyval.pTypedList)->type = (yyvsp[-2].pTokenList);
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 1999 "scan-fct_pddl.tab.c"
    break;

  case 65:
#line 722 "scan-fct_pddl.y"
{
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-3].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-3].string) );
  (yyval.pTypedList)->type = new_TokenList();
  (yyval.pTypedList)->type->item = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->type->item, (yyvsp[-1].string) );
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2013 "scan-fct_pddl.tab.c"
    break;

  case 66:
#line 733 "scan-fct_pddl.y"
{
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-1].string) );
  if ( (yyvsp[0].pTypedList) ) {/* another element (already typed) is following */
    (yyval.pTypedList)->type = copy_TokenList( (yyvsp[0].pTypedList)->type );
  } else {/* no further element - it must be an untyped list */
    (yyval.pTypedList)->type = new_TokenList();
    (yyval.pTypedList)->type->item = new_Token( strlen(STANDARD_TYPE)+1 );
    strcpy( (yyval.pTypedList)->type->item, STANDARD_TYPE );
  }
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2031 "scan-fct_pddl.tab.c"
    break;

  case 67:
#line 752 "scan-fct_pddl.y"
{ (yyval.pTypedList) = NULL; }
#line 2037 "scan-fct_pddl.tab.c"
    break;

  case 68:
#line 755 "scan-fct_pddl.y"
{ 
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-4].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-4].string) );
  (yyval.pTypedList)->type = (yyvsp[-2].pTokenList);
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2049 "scan-fct_pddl.tab.c"
    break;

  case 69:
#line 764 "scan-fct_pddl.y"
{
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-3].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-3].string) );
  (yyval.pTypedList)->type = new_TokenList();
  (yyval.pTypedList)->type->item = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->type->item, (yyvsp[-1].string) );
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2063 "scan-fct_pddl.tab.c"
    break;

  case 70:
#line 775 "scan-fct_pddl.y"
{
  (yyval.pTypedList) = new_TypedList();
  (yyval.pTypedList)->name = new_Token( strlen((yyvsp[-1].string))+1 );
  strcpy( (yyval.pTypedList)->name, (yyvsp[-1].string) );
  if ( (yyvsp[0].pTypedList) ) {/* another element (already typed) is following */
    (yyval.pTypedList)->type = copy_TokenList( (yyvsp[0].pTypedList)->type );
  } else {/* no further element - it must be an untyped list */
    (yyval.pTypedList)->type = new_TokenList();
    (yyval.pTypedList)->type->item = new_Token( strlen(STANDARD_TYPE)+1 );
    strcpy( (yyval.pTypedList)->type->item, STANDARD_TYPE );
  }
  (yyval.pTypedList)->next = (yyvsp[0].pTypedList);
}
#line 2081 "scan-fct_pddl.tab.c"
    break;

  case 71:
#line 796 "scan-fct_pddl.y"
{ 
  (yyval.pstring) = new_Token(strlen((yyvsp[0].string)) + 1);
  strcpy((yyval.pstring), (yyvsp[0].string));
}
#line 2090 "scan-fct_pddl.tab.c"
    break;

  case 72:
#line 821 "scan-fct_pddl.y"
{ 
  PlNode *tmp;

  tmp = new_PlNode(ATOM);
  tmp->atom = (yyvsp[-1].pTokenList);
  (yyval.pPlNode) = new_PlNode(NOT);
  (yyval.pPlNode)->sons = tmp;
}
#line 2103 "scan-fct_pddl.tab.c"
    break;

  case 73:
#line 831 "scan-fct_pddl.y"
{
  (yyval.pPlNode) = new_PlNode(ATOM);
  (yyval.pPlNode)->atom = (yyvsp[0].pTokenList);
}
#line 2112 "scan-fct_pddl.tab.c"
    break;

  case 74:
#line 841 "scan-fct_pddl.y"
{ 
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = (yyvsp[-2].pstring);
  (yyval.pTokenList)->next = (yyvsp[-1].pTokenList);
}
#line 2122 "scan-fct_pddl.tab.c"
    break;

  case 75:
#line 852 "scan-fct_pddl.y"
{ (yyval.pTokenList) = NULL; }
#line 2128 "scan-fct_pddl.tab.c"
    break;

  case 76:
#line 855 "scan-fct_pddl.y"
{
  (yyval.pTokenList) = new_TokenList();
  (yyval.pTokenList)->item = new_Token(strlen((yyvsp[-1].string)) + 1);
  strcpy((yyval.pTokenList)->item, (yyvsp[-1].string));
  (yyval.pTokenList)->next = (yyvsp[0].pTokenList);
}
#line 2139 "scan-fct_pddl.tab.c"
    break;


#line 2143 "scan-fct_pddl.tab.c"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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

#line 864 "scan-fct_pddl.y"



#include "lex.fct_pddl.c"


/**********************************************************************
 * Functions
 **********************************************************************/


/* 
 * call	bison -pfct -bscan-fct scan-fct.y
 */


int yyerror( char *msg )

{
  fflush( stdout );
  fprintf(stderr,"\n%s: syntax error in line %d, '%s':\n", 
	  gact_filename, lineno, yytext );

  if ( sact_err_par ) {
    fprintf(stderr, "%s%s\n", serrmsg[sact_err], sact_err_par );
  } else {
    fprintf(stderr,"%s\n", serrmsg[sact_err] );
  }

  exit( 1 );

}



void load_fct_file( char *filename ) 

{

  FILE *fp;/* pointer to input files */
  char tmp[MAX_LENGTH] = "";

  /* open fact file 
   */
  if( ( fp = fopen( filename, "r" ) ) == NULL ) {
    sprintf(tmp, "\nff: can't find fact file: %s\n\n", filename );
    perror(tmp);
    exit ( 1 );
  }

  gact_filename = filename;
  lineno = 1; 
  yyin = fp;

  yyparse();

  fclose( fp );/* and close file again */

}

