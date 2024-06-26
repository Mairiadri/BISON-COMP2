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
#line 1 "simplebison.y"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYSTYPE char*
void truncatehash(char* str);
extern int yylex(void);
int yyerror(char *);

#line 82 "simplebison.tab.c"

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

#include "simplebison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTCONST = 3,                   /* INTCONST  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_COMMENT = 5,                    /* COMMENT  */
  YYSYMBOL_SMALLER = 6,                    /* SMALLER  */
  YYSYMBOL_BIGGER = 7,                     /* BIGGER  */
  YYSYMBOL_MOD = 8,                        /* MOD  */
  YYSYMBOL_KEYWORD = 9,                    /* KEYWORD  */
  YYSYMBOL_DELIMITER = 10,                 /* DELIMITER  */
  YYSYMBOL_PLUS = 11,                      /* PLUS  */
  YYSYMBOL_MINUS = 12,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 13,                  /* MULTIPLY  */
  YYSYMBOL_DIV = 14,                       /* DIV  */
  YYSYMBOL_EQUAL = 15,                     /* EQUAL  */
  YYSYMBOL_BIG_EQUAL = 16,                 /* BIG_EQUAL  */
  YYSYMBOL_SMALL_EQUAL = 17,               /* SMALL_EQUAL  */
  YYSYMBOL_NOT_EQUAL = 18,                 /* NOT_EQUAL  */
  YYSYMBOL_PLUS_EQUAL = 19,                /* PLUS_EQUAL  */
  YYSYMBOL_MINUS_EQUAL = 20,               /* MINUS_EQUAL  */
  YYSYMBOL_MULT_EQUAL = 21,                /* MULT_EQUAL  */
  YYSYMBOL_DIV_EQUAL = 22,                 /* DIV_EQUAL  */
  YYSYMBOL_ERROR = 23,                     /* ERROR  */
  YYSYMBOL_END = 24,                       /* END  */
  YYSYMBOL_STRING = 25,                    /* STRING  */
  YYSYMBOL_OR = 26,                        /* OR  */
  YYSYMBOL_AND = 27,                       /* AND  */
  YYSYMBOL_NOT = 28,                       /* NOT  */
  YYSYMBOL_IDENTIFIER = 29,                /* IDENTIFIER  */
  YYSYMBOL_DOUBLE_EQUAL = 30,              /* DOUBLE_EQUAL  */
  YYSYMBOL_DOUBLE_PLUS = 31,               /* DOUBLE_PLUS  */
  YYSYMBOL_DOUBLE_MINUS = 32,              /* DOUBLE_MINUS  */
  YYSYMBOL_BIT_AND = 33,                   /* BIT_AND  */
  YYSYMBOL_POWER = 34,                     /* POWER  */
  YYSYMBOL_SEM = 35,                       /* SEM  */
  YYSYMBOL_SCAN = 36,                      /* SCAN  */
  YYSYMBOL_LEFT = 37,                      /* LEFT  */
  YYSYMBOL_RIGHT = 38,                     /* RIGHT  */
  YYSYMBOL_LEFTA = 39,                     /* LEFTA  */
  YYSYMBOL_RIGHTA = 40,                    /* RIGHTA  */
  YYSYMBOL_COMPARE = 41,                   /* COMPARE  */
  YYSYMBOL_DOUBLE = 42,                    /* DOUBLE  */
  YYSYMBOL_INT = 43,                       /* INT  */
  YYSYMBOL_LONG = 44,                      /* LONG  */
  YYSYMBOL_SHORT = 45,                     /* SHORT  */
  YYSYMBOL_FLOATI = 46,                    /* FLOATI  */
  YYSYMBOL_LEN = 47,                       /* LEN  */
  YYSYMBOL_PRINTI = 48,                    /* PRINTI  */
  YYSYMBOL_NEG = 49,                       /* NEG  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_Input = 51,                     /* Input  */
  YYSYMBOL_Line = 52,                      /* Line  */
  YYSYMBOL_Comment = 53,                   /* Comment  */
  YYSYMBOL_Compare = 54,                   /* Compare  */
  YYSYMBOL_Length = 55,                    /* Length  */
  YYSYMBOL_Array = 56,                     /* Array  */
  YYSYMBOL_prnt = 57,                      /* prnt  */
  YYSYMBOL_merge = 58,                     /* merge  */
  YYSYMBOL_Key = 59,                       /* Key  */
  YYSYMBOL_str = 60,                       /* str  */
  YYSYMBOL_sca = 61,                       /* sca  */
  YYSYMBOL_var = 62,                       /* var  */
  YYSYMBOL_err = 63,                       /* err  */
  YYSYMBOL_Expression = 64                 /* Expression  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1047

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  119
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  260

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    28,    28,    29,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    52,
      56,    57,    58,    62,    63,    64,    65,    69,    70,    71,
      72,    73,    74,    78,    79,    80,    81,    82,    86,    90,
      94,    95,    99,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   115,   116,   117,   118,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185
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
  "\"end of file\"", "error", "\"invalid token\"", "INTCONST", "FLOAT",
  "COMMENT", "SMALLER", "BIGGER", "MOD", "KEYWORD", "DELIMITER", "PLUS",
  "MINUS", "MULTIPLY", "DIV", "EQUAL", "BIG_EQUAL", "SMALL_EQUAL",
  "NOT_EQUAL", "PLUS_EQUAL", "MINUS_EQUAL", "MULT_EQUAL", "DIV_EQUAL",
  "ERROR", "END", "STRING", "OR", "AND", "NOT", "IDENTIFIER",
  "DOUBLE_EQUAL", "DOUBLE_PLUS", "DOUBLE_MINUS", "BIT_AND", "POWER", "SEM",
  "SCAN", "LEFT", "RIGHT", "LEFTA", "RIGHTA", "COMPARE", "DOUBLE", "INT",
  "LONG", "SHORT", "FLOATI", "LEN", "PRINTI", "NEG", "$accept", "Input",
  "Line", "Comment", "Compare", "Length", "Array", "prnt", "merge", "Key",
  "str", "sca", "var", "err", "Expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-26)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-51)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -26,   122,   -26,    -3,   -26,   -26,   -26,   313,     2,   -26,
     -26,   343,   909,   313,   313,   -19,   313,   168,     8,    49,
      49,    94,    49,    49,     9,    11,   -26,    13,    50,    51,
      14,    56,    58,    61,   180,    63,   198,    64,   676,     7,
     -26,   355,    78,   963,   373,   156,   -26,   963,   156,   385,
     403,   415,   -26,   433,   445,   463,   475,   493,   505,   523,
     313,   313,   313,   313,   535,   553,   565,   583,   880,   880,
      67,   647,    -8,    62,   617,     4,   211,   241,    49,   253,
     283,   295,   -20,    43,   -26,   -26,   -26,    74,   -26,   -26,
     -26,   -26,   -26,   880,   -26,   -26,    88,   706,   -26,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   -26,   313,   313,   313,   -26,   -26,   313,
     313,   313,   105,    -9,   963,  1007,   963,  1007,   963,   985,
     963,   934,   963,   934,   963,   985,   963,   985,   963,  1007,
     963,  1007,   963,  1007,   735,   764,   793,   822,   963,  1014,
     963,  1014,   963,   880,   963,   985,    80,   -26,   121,    59,
     103,   -26,    95,    97,   -26,   -26,   325,   -26,   -26,   -26,
      91,   104,     3,   106,   110,    38,   111,   114,   -26,   -26,
     -26,  1007,  1007,   985,   934,   934,   985,   985,  1007,  1007,
    1007,   880,   880,   880,   880,  1014,  1014,   880,   880,   985,
     851,   130,   -26,   -26,   -26,   -26,   -26,   125,   -25,   108,
     116,   126,   132,   147,   150,    -5,   152,   163,   154,   143,
     172,   175,   -26,   -26,   -26,   187,   -26,   166,   157,   160,
     -26,   -26,   -26,   -26,   -26,   159,   193,   -26,   -26,    12,
     171,   203,   206,   215,   -26,   217,   -26,   199,   -26,   -26,
     190,    36,   185,   221,   229,   -26,   -26,   -26,   194,   -26
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    56,    57,    19,    39,     0,    52,     4,
      40,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    53,    56,     0,     0,    77,    55,   106,   105,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   116,   118,
       0,     0,    56,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     0,     9,    11,
      12,    13,    14,    41,    10,    15,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,   115,   117,     0,
       0,    18,     0,    56,    86,    85,    83,    82,    73,    72,
      60,    59,    64,    63,    67,    66,    70,    69,    98,    97,
      95,    94,    92,    91,     0,     0,     0,     0,   101,   100,
     104,   103,    89,    88,    76,    75,     0,    78,     0,    79,
       0,    80,     0,     0,    45,    46,     0,    47,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    51,
      44,    84,    81,    71,    58,    62,    65,    68,    96,    93,
      90,   107,   109,   111,   113,    99,   102,    87,   119,    74,
       0,     0,    79,   108,   110,   112,   114,     0,     0,     0,
       0,     0,    46,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    17,    61,    42,     0,    31,     0,     0,     0,
      24,    25,    29,    23,    33,     0,     0,    35,    36,     0,
       0,     0,    22,     0,    37,     0,    30,     0,    20,    21,
       0,     0,     0,     0,     0,    32,    28,    34,     0,    27
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -26,   -26,   -26,   -26,   153,   155,    -1,   -26,   -26,   -26,
     -26,   -26,     1,   -26,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    26,    27,    28,    29,    96,    31,    32,    33,
      34,    35,    36,    37,    97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,    38,    39,    39,    41,   170,   215,    45,    39,   171,
     225,    48,    46,    68,    69,   226,    71,    74,    70,   172,
      76,    77,    79,    80,    81,    87,    40,   158,    73,   162,
     158,   202,   159,   163,    93,   232,   122,    84,    88,    19,
      20,    21,    22,    23,    74,    75,    82,   245,    83,   125,
     127,   129,   246,   131,   133,   135,   137,   139,   141,   143,
     144,   145,   146,   147,   149,   151,   153,   155,   174,   -29,
     -29,   254,   175,   218,    85,    86,   255,   172,    40,   166,
      89,   173,    90,   -29,    18,    91,   178,    94,    98,    39,
      24,    19,    20,    21,    22,    23,   156,   160,   179,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   172,   195,   196,   197,   201,   207,   198,
     199,   200,     2,    40,   208,     3,     4,     5,   209,   213,
     210,     6,   211,   223,     7,   224,    19,    78,    21,    22,
      23,   228,   214,   227,   216,     8,     9,    10,   217,   220,
      11,    12,   221,    13,    14,   229,   -50,   230,    15,    16,
     231,    17,   233,    18,    19,    20,    21,    22,    23,    24,
      25,    72,     4,   234,   219,   109,   110,   111,   112,   235,
       7,   236,   237,    42,     4,   238,   116,   117,   118,   119,
     239,   240,     7,    73,   243,   241,    11,    43,   242,    13,
      14,    42,     4,   244,    92,    16,   247,    44,    11,    43,
       7,    13,    14,   248,    42,     4,   249,    16,   250,    44,
     251,   164,    95,     7,   252,   256,    11,    43,   253,    13,
      14,   257,   258,     0,   259,    16,   176,    17,   177,    11,
      43,     0,    13,    14,    42,     4,     0,     0,    16,     0,
      17,   165,     0,     7,     0,     0,    42,     4,     0,     0,
       0,     0,     0,   167,     0,     7,     0,     0,     0,    11,
      43,     0,    13,    14,     0,     0,     0,     0,    16,     0,
      17,    11,    43,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    17,   168,     0,     7,     0,     0,    42,     4,
       0,     0,     0,     0,     0,   169,     0,     7,     0,     0,
       0,    11,    43,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    17,    11,    43,     7,    13,    14,    42,     4,
       0,     0,    16,     0,    17,   212,     0,     7,     0,     0,
       0,    11,    43,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    44,    11,    43,     7,    13,    14,    42,     4,
       0,     0,    16,     0,    17,     0,     0,     7,     0,     0,
       0,    11,    47,     0,    13,    14,   123,     4,     0,     0,
      16,     0,    44,    11,    43,     7,    13,    14,    42,     4,
       0,     0,    16,     0,    17,     0,     0,     7,     0,     0,
       0,    11,    43,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    44,    11,   124,     7,    13,    14,    42,     4,
       0,     0,    16,     0,    44,     0,     0,     7,     0,     0,
       0,    11,   126,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    44,    11,   128,     7,    13,    14,    42,     4,
       0,     0,    16,     0,    44,     0,     0,     7,     0,     0,
       0,    11,   130,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    44,    11,   132,     7,    13,    14,    42,     4,
       0,     0,    16,     0,    44,     0,     0,     7,     0,     0,
       0,    11,   134,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    44,    11,   136,     7,    13,    14,    42,     4,
       0,     0,    16,     0,    44,     0,     0,     7,     0,     0,
       0,    11,   138,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    44,    11,   140,     7,    13,    14,    42,     4,
       0,     0,    16,     0,    44,     0,     0,     7,     0,     0,
       0,    11,   142,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    44,    11,   148,     7,    13,    14,    42,     4,
       0,     0,    16,     0,    44,     0,     0,     7,     0,     0,
       0,    11,   150,     0,    13,    14,    42,     4,     0,     0,
      16,     0,    44,    11,   152,     7,    13,    14,     0,     0,
       0,     0,    16,     0,    44,     0,     0,     0,     0,     0,
       0,    11,   154,     0,    13,    14,     0,     0,     0,     0,
      16,     0,    44,    99,   100,   101,     0,     0,   102,   103,
     104,   105,     0,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,   114,   115,     0,     0,   116,   117,   118,
     119,   120,     0,    99,   100,   101,     0,   161,   102,   103,
     104,   105,     0,   106,   107,   108,   109,   110,   111,   112,
       0,     0,     0,   114,   115,     0,     0,   116,   117,   118,
     119,   120,    99,   100,   101,   157,     0,   102,   103,   104,
     105,     0,   106,   107,   108,   109,   110,   111,   112,     0,
     113,     0,   114,   115,     0,     0,   116,   117,   118,   119,
     120,   121,    99,   100,   101,     0,   180,   102,   103,   104,
     105,     0,   106,   107,   108,   109,   110,   111,   112,     0,
       0,     0,   114,   115,     0,     0,   116,   117,   118,   119,
     120,    99,   100,   101,     0,   203,   102,   103,   104,   105,
       0,   106,   107,   108,   109,   110,   111,   112,     0,     0,
       0,   114,   115,     0,     0,   116,   117,   118,   119,   120,
      99,   100,   101,     0,   204,   102,   103,   104,   105,     0,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     114,   115,     0,     0,   116,   117,   118,   119,   120,    99,
     100,   101,     0,   205,   102,   103,   104,   105,     0,   106,
     107,   108,   109,   110,   111,   112,     0,     0,     0,   114,
     115,     0,     0,   116,   117,   118,   119,   120,    99,   100,
     101,     0,   206,   102,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,     0,     0,     0,   114,   115,
       0,     0,   116,   117,   118,   119,   120,    99,   100,   101,
       0,     0,   102,   103,   104,   105,     0,   106,   107,   108,
     109,   110,   111,   112,     0,   222,     0,   114,   115,     0,
       0,   116,   117,   118,   119,   120,    99,   100,   101,     0,
       0,   102,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,     0,     0,     0,   114,   115,     0,     0,
     116,   117,   118,   119,   120,    49,    50,    51,     0,    52,
      53,    54,    55,    56,     0,    57,    58,    59,    60,    61,
      62,    63,     0,     0,     0,    64,    65,     0,     0,    66,
      99,   100,   101,    67,     0,     0,     0,   104,   105,     0,
     106,   107,   108,   109,   110,   111,   112,     0,     0,     0,
     114,   115,     0,     0,   116,   117,   118,   119,   120,    49,
      50,    51,     0,     0,    53,    54,    55,    56,     0,    57,
      58,    59,    60,    61,    62,    63,     0,     0,     0,    64,
      65,    99,   100,    66,     0,     0,     0,    67,     0,     0,
       0,   106,   107,   108,   109,   110,   111,   112,     0,     0,
       0,   114,   115,   -51,   -51,   116,   117,   118,   119,   120,
      99,   100,     0,   -51,   -51,   -51,   109,   110,   111,   112,
     106,   107,   108,   109,   110,   111,   112,   116,   117,   118,
     119,     0,     0,     0,   116,   117,   118,   119
};

static const yytype_int16 yycheck[] =
{
       1,     1,    11,    11,     3,    25,     3,     7,    11,    29,
      35,    11,    10,    13,    14,    40,    16,    17,    37,    39,
      19,    20,    21,    22,    23,    11,    29,    35,    25,    25,
      35,    40,    40,    29,    34,    40,    29,    24,    24,    42,
      43,    44,    45,    46,    44,    37,    37,    35,    37,    49,
      50,    51,    40,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    25,    10,
      11,    35,    29,    35,    24,    24,    40,    39,    29,    78,
      24,    82,    24,    24,    41,    24,    87,    24,    24,    11,
      47,    42,    43,    44,    45,    46,    29,    35,    10,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    39,   114,   115,   116,    12,    38,   119,
     120,   121,     0,    29,     3,     3,     4,     5,    25,    38,
      35,     9,    35,     3,    12,    10,    42,    43,    44,    45,
      46,    25,    38,    35,    38,    23,    24,    25,    38,    38,
      28,    29,    38,    31,    32,    29,    24,    10,    36,    37,
      10,    39,    10,    41,    42,    43,    44,    45,    46,    47,
      48,     3,     4,    10,   175,    19,    20,    21,    22,    25,
      12,    38,    10,     3,     4,    10,    30,    31,    32,    33,
       3,    25,    12,    25,    35,    38,    28,    29,    38,    31,
      32,     3,     4,    10,    24,    37,    35,    39,    28,    29,
      12,    31,    32,    10,     3,     4,    10,    37,     3,    39,
       3,    10,    24,    12,    25,    40,    28,    29,    38,    31,
      32,    10,     3,    -1,    40,    37,    83,    39,    83,    28,
      29,    -1,    31,    32,     3,     4,    -1,    -1,    37,    -1,
      39,    10,    -1,    12,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    12,    -1,    -1,    -1,    28,
      29,    -1,    31,    32,    -1,    -1,    -1,    -1,    37,    -1,
      39,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    10,    -1,    12,    -1,    -1,     3,     4,
      -1,    -1,    -1,    -1,    -1,    10,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,     3,     4,
      -1,    -1,    37,    -1,    39,    10,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,     3,     4,
      -1,    -1,    37,    -1,    39,    -1,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,     3,     4,
      -1,    -1,    37,    -1,    39,    -1,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,     3,     4,
      -1,    -1,    37,    -1,    39,    -1,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,     3,     4,
      -1,    -1,    37,    -1,    39,    -1,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,     3,     4,
      -1,    -1,    37,    -1,    39,    -1,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,     3,     4,
      -1,    -1,    37,    -1,    39,    -1,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,     3,     4,
      -1,    -1,    37,    -1,    39,    -1,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,     3,     4,
      -1,    -1,    37,    -1,    39,    -1,    -1,    12,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,     3,     4,    -1,    -1,
      37,    -1,    39,    28,    29,    12,    31,    32,    -1,    -1,
      -1,    -1,    37,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,
      37,    -1,    39,     6,     7,     8,    -1,    -1,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    34,    -1,     6,     7,     8,    -1,    40,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    34,     6,     7,     8,    38,    -1,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      24,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      34,    35,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      34,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    34,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    34,     6,
       7,     8,    -1,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,     6,     7,
       8,    -1,    10,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    34,     6,     7,     8,
      -1,    -1,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    24,    -1,    26,    27,    -1,
      -1,    30,    31,    32,    33,    34,     6,     7,     8,    -1,
      -1,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    34,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,    30,
       6,     7,     8,    34,    -1,    -1,    -1,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    34,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      27,     6,     7,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,     6,     7,    30,    31,    32,    33,    34,
       6,     7,    -1,    16,    17,    18,    19,    20,    21,    22,
      16,    17,    18,    19,    20,    21,    22,    30,    31,    32,
      33,    -1,    -1,    -1,    30,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    51,     0,     3,     4,     5,     9,    12,    23,    24,
      25,    28,    29,    31,    32,    36,    37,    39,    41,    42,
      43,    44,    45,    46,    47,    48,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    11,
      29,    62,     3,    29,    39,    64,    10,    29,    64,     6,
       7,     8,    10,    11,    12,    13,    14,    16,    17,    18,
      19,    20,    21,    22,    26,    27,    30,    34,    64,    64,
      37,    64,     3,    25,    64,    37,    62,    62,    43,    62,
      62,    62,    37,    37,    24,    24,    24,    11,    24,    24,
      24,    24,    24,    64,    24,    24,    56,    64,    24,     6,
       7,     8,    11,    12,    13,    14,    16,    17,    18,    19,
      20,    21,    22,    24,    26,    27,    30,    31,    32,    33,
      34,    35,    29,     3,    29,    64,    29,    64,    29,    64,
      29,    64,    29,    64,    29,    64,    29,    64,    29,    64,
      29,    64,    29,    64,    64,    64,    64,    64,    29,    64,
      29,    64,    29,    64,    29,    64,    29,    38,    35,    40,
      35,    40,    25,    29,    10,    10,    62,    10,    10,    10,
      25,    29,    39,    56,    25,    29,    54,    55,    56,    10,
      10,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    12,    40,    10,    10,    10,    10,    38,     3,    25,
      35,    35,    10,    38,    38,     3,    38,    38,    35,    56,
      38,    38,    24,     3,    10,    35,    40,    35,    25,    29,
      10,    10,    40,    10,    10,    25,    38,    10,    10,     3,
      25,    38,    38,    35,    10,    35,    40,    35,    10,    10,
       3,     3,    25,    38,    35,    40,    40,    10,     3,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      54,    54,    54,    55,    55,    55,    55,    56,    56,    56,
      56,    56,    56,    57,    57,    57,    57,    57,    58,    59,
      60,    60,    61,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     2,     1,
       7,     7,     6,     5,     5,     5,     4,    11,     9,     3,
       7,     5,     9,     5,     9,     5,     5,     6,     3,     1,
       1,     2,     5,     1,     3,     3,     3,     3,     3,     3,
       4,     3,     1,     2,     2,     2,     1,     1,     3,     3,
       3,     5,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     3,     4,     3,
       4,     3,     4,     3,     4,     2,     2,     2,     2,     3
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
  case 5: /* Line: Expression END  */
#line 34 "simplebison.y"
                         { printf("Result: %s\n", yyvsp[-1]); }
#line 1450 "simplebison.tab.c"
    break;

  case 6: /* Line: Comment END  */
#line 35 "simplebison.y"
                         { printf("COMMENT: %s\n", yyvsp[-1]); }
#line 1456 "simplebison.tab.c"
    break;

  case 7: /* Line: Compare END  */
#line 36 "simplebison.y"
                         { printf("COMPARE: %s\n", yyvsp[-1]); }
#line 1462 "simplebison.tab.c"
    break;

  case 8: /* Line: Length END  */
#line 37 "simplebison.y"
                            { printf("LENGTH: %s\n", yyvsp[-1]); }
#line 1468 "simplebison.tab.c"
    break;

  case 9: /* Line: Array END  */
#line 38 "simplebison.y"
                           { printf("ARRAY: %s\n", yyvsp[-1]); }
#line 1474 "simplebison.tab.c"
    break;

  case 10: /* Line: sca END  */
#line 39 "simplebison.y"
                         { printf("SCAN: %s\n", yyvsp[-1]); }
#line 1480 "simplebison.tab.c"
    break;

  case 11: /* Line: prnt END  */
#line 40 "simplebison.y"
                         {printf("PRINT: %s\n", yyvsp[-1]);}
#line 1486 "simplebison.tab.c"
    break;

  case 12: /* Line: merge END  */
#line 41 "simplebison.y"
                         {printf("Merge Array: %s\n", yyvsp[-1]);}
#line 1492 "simplebison.tab.c"
    break;

  case 13: /* Line: Key END  */
#line 42 "simplebison.y"
                         { printf("KEYWORD: %s\n", yyvsp[-1]); }
#line 1498 "simplebison.tab.c"
    break;

  case 14: /* Line: str END  */
#line 43 "simplebison.y"
                         { printf("Strings: %s\n", yyvsp[-1]); }
#line 1504 "simplebison.tab.c"
    break;

  case 15: /* Line: var END  */
#line 44 "simplebison.y"
                         { printf("IDENTIFIER: %s\n", yyvsp[-1]); }
#line 1510 "simplebison.tab.c"
    break;

  case 16: /* Line: err END  */
#line 45 "simplebison.y"
                         { yyerror(yyvsp[-1]);                  }
#line 1516 "simplebison.tab.c"
    break;

  case 17: /* Line: Expression SEM Expression END  */
#line 46 "simplebison.y"
                                     { yyerror("Unexpected comma in expression."); }
#line 1522 "simplebison.tab.c"
    break;

  case 18: /* Line: Expression SEM  */
#line 47 "simplebison.y"
                      { yyerror("Unexpected comma in expression."); }
#line 1528 "simplebison.tab.c"
    break;

  case 19: /* Comment: COMMENT  */
#line 52 "simplebison.y"
             { yyval=yyvsp[0]; }
#line 1534 "simplebison.tab.c"
    break;

  case 39: /* Key: KEYWORD  */
#line 90 "simplebison.y"
             { yyval=yyvsp[0]; }
#line 1540 "simplebison.tab.c"
    break;

  case 40: /* str: STRING  */
#line 94 "simplebison.y"
            { yyval=yyvsp[0]; }
#line 1546 "simplebison.tab.c"
    break;

  case 42: /* sca: SCAN LEFT IDENTIFIER RIGHT DELIMITER  */
#line 99 "simplebison.y"
                                            { printf("Enter value for %s: ", yyvsp[-2]); scanf("%s", yyvsp[-2]); }
#line 1552 "simplebison.tab.c"
    break;

  case 43: /* var: IDENTIFIER  */
#line 103 "simplebison.y"
                { yyval=yyvsp[0]; }
#line 1558 "simplebison.tab.c"
    break;

  case 52: /* err: ERROR  */
#line 115 "simplebison.y"
           { yyval=yyvsp[0]; }
#line 1564 "simplebison.tab.c"
    break;

  case 53: /* err: INTCONST var  */
#line 116 "simplebison.y"
                    { yyerror("Variable start with a number"); }
#line 1570 "simplebison.tab.c"
    break;

  case 54: /* err: IDENTIFIER DELIMITER  */
#line 117 "simplebison.y"
                            { yyerror("Variable with ;"); }
#line 1576 "simplebison.tab.c"
    break;

  case 55: /* err: ERROR DELIMITER  */
#line 118 "simplebison.y"
                       { yyerror("error!!!"); }
#line 1582 "simplebison.tab.c"
    break;

  case 56: /* Expression: INTCONST  */
#line 122 "simplebison.y"
                    { yyval = yyvsp[0]; }
#line 1588 "simplebison.tab.c"
    break;

  case 57: /* Expression: FLOAT  */
#line 123 "simplebison.y"
                    { yyval = yyvsp[0]; }
#line 1594 "simplebison.tab.c"
    break;

  case 58: /* Expression: Expression PLUS Expression  */
#line 124 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) + atof(yyvsp[0]), 10, yyval); }
#line 1600 "simplebison.tab.c"
    break;

  case 59: /* Expression: IDENTIFIER PLUS Expression  */
#line 125 "simplebison.y"
                                      {  gcvt(atof(yyvsp[-2]) + atof(yyvsp[0]), 10, yyval); }
#line 1606 "simplebison.tab.c"
    break;

  case 60: /* Expression: IDENTIFIER PLUS IDENTIFIER  */
#line 126 "simplebison.y"
                                      {  gcvt(atof(yyvsp[-2]) + atof(yyvsp[0]), 10, yyval); }
#line 1612 "simplebison.tab.c"
    break;

  case 61: /* Expression: INTCONST PLUS IDENTIFIER MINUS INTCONST  */
#line 127 "simplebison.y"
                                                  {  gcvt(atof(yyvsp[-4]) + atof(yyvsp[-2]) - atof(yyvsp[0]), 10, yyval); }
#line 1618 "simplebison.tab.c"
    break;

  case 62: /* Expression: Expression MINUS Expression  */
#line 128 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) - atof(yyvsp[0]), 10, yyval); }
#line 1624 "simplebison.tab.c"
    break;

  case 63: /* Expression: IDENTIFIER MINUS Expression  */
#line 129 "simplebison.y"
                                       {  gcvt(atof(yyvsp[-2]) - atof(yyvsp[0]), 10, yyval); }
#line 1630 "simplebison.tab.c"
    break;

  case 64: /* Expression: IDENTIFIER MINUS IDENTIFIER  */
#line 130 "simplebison.y"
                                       {  gcvt(atof(yyvsp[-2]) - atof(yyvsp[0]), 10, yyval); }
#line 1636 "simplebison.tab.c"
    break;

  case 65: /* Expression: Expression MULTIPLY Expression  */
#line 131 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) * atof(yyvsp[0]), 10, yyval); }
#line 1642 "simplebison.tab.c"
    break;

  case 66: /* Expression: IDENTIFIER MULTIPLY Expression  */
#line 132 "simplebison.y"
                                          {  gcvt(atof(yyvsp[-2]) * atof(yyvsp[0]), 10, yyval); }
#line 1648 "simplebison.tab.c"
    break;

  case 67: /* Expression: IDENTIFIER MULTIPLY IDENTIFIER  */
#line 133 "simplebison.y"
                                          {  gcvt(atof(yyvsp[-2]) * atof(yyvsp[0]), 10, yyval); }
#line 1654 "simplebison.tab.c"
    break;

  case 68: /* Expression: Expression DIV Expression  */
#line 134 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) / atof(yyvsp[0]), 10, yyval); }
#line 1660 "simplebison.tab.c"
    break;

  case 69: /* Expression: IDENTIFIER DIV Expression  */
#line 135 "simplebison.y"
                                     {  gcvt(atof(yyvsp[-2]) / atof(yyvsp[0]), 10, yyval); }
#line 1666 "simplebison.tab.c"
    break;

  case 70: /* Expression: IDENTIFIER DIV IDENTIFIER  */
#line 136 "simplebison.y"
                                     {  gcvt(atof(yyvsp[-2]) / atof(yyvsp[0]), 10, yyval); }
#line 1672 "simplebison.tab.c"
    break;

  case 71: /* Expression: Expression MOD Expression  */
#line 137 "simplebison.y"
                                        {  gcvt(fmod(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1678 "simplebison.tab.c"
    break;

  case 72: /* Expression: IDENTIFIER MOD Expression  */
#line 138 "simplebison.y"
                                     {  gcvt(fmod(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1684 "simplebison.tab.c"
    break;

  case 73: /* Expression: IDENTIFIER MOD IDENTIFIER  */
#line 139 "simplebison.y"
                                    {  gcvt(fmod(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1690 "simplebison.tab.c"
    break;

  case 74: /* Expression: Expression POWER Expression  */
#line 140 "simplebison.y"
                                        {  gcvt(pow(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1696 "simplebison.tab.c"
    break;

  case 75: /* Expression: IDENTIFIER POWER Expression  */
#line 141 "simplebison.y"
                                       {  gcvt(pow(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1702 "simplebison.tab.c"
    break;

  case 76: /* Expression: IDENTIFIER POWER IDENTIFIER  */
#line 142 "simplebison.y"
                                       {  gcvt(pow(atof(yyvsp[-2]) , atof(yyvsp[0])), 10, yyval); }
#line 1708 "simplebison.tab.c"
    break;

  case 77: /* Expression: MINUS Expression  */
#line 143 "simplebison.y"
                                        {  gcvt(-atof(yyvsp[0]), 10, yyval); }
#line 1714 "simplebison.tab.c"
    break;

  case 78: /* Expression: LEFT Expression RIGHT  */
#line 144 "simplebison.y"
                                           { yyval = yyvsp[-1]; }
#line 1720 "simplebison.tab.c"
    break;

  case 79: /* Expression: LEFTA INTCONST RIGHTA  */
#line 145 "simplebison.y"
                                           { yyval = yyvsp[-1]; }
#line 1726 "simplebison.tab.c"
    break;

  case 80: /* Expression: LEFTA Expression RIGHTA  */
#line 146 "simplebison.y"
                                             { yyval = yyvsp[-1]; }
#line 1732 "simplebison.tab.c"
    break;

  case 81: /* Expression: Expression BIGGER Expression  */
#line 147 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) > atof(yyvsp[0]), 10, yyval); }
#line 1738 "simplebison.tab.c"
    break;

  case 82: /* Expression: IDENTIFIER BIGGER Expression  */
#line 148 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) > atof(yyvsp[0]), 10, yyval); }
#line 1744 "simplebison.tab.c"
    break;

  case 83: /* Expression: IDENTIFIER BIGGER IDENTIFIER  */
#line 149 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) > atof(yyvsp[0]), 10, yyval); }
#line 1750 "simplebison.tab.c"
    break;

  case 84: /* Expression: Expression SMALLER Expression  */
#line 150 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) < atof(yyvsp[0]), 10, yyval); }
#line 1756 "simplebison.tab.c"
    break;

  case 85: /* Expression: IDENTIFIER SMALLER Expression  */
#line 151 "simplebison.y"
                                         {  gcvt(atof(yyvsp[-2]) < atof(yyvsp[0]), 10, yyval); }
#line 1762 "simplebison.tab.c"
    break;

  case 86: /* Expression: IDENTIFIER SMALLER IDENTIFIER  */
#line 152 "simplebison.y"
                                         {  gcvt(atof(yyvsp[-2]) < atof(yyvsp[0]), 10, yyval); }
#line 1768 "simplebison.tab.c"
    break;

  case 87: /* Expression: Expression DOUBLE_EQUAL Expression  */
#line 153 "simplebison.y"
                                          {  gcvt(atof(yyvsp[-2]) == atof(yyvsp[0]), 10, yyval); }
#line 1774 "simplebison.tab.c"
    break;

  case 88: /* Expression: IDENTIFIER DOUBLE_EQUAL Expression  */
#line 154 "simplebison.y"
                                              {  gcvt(atof(yyvsp[-2]) == atof(yyvsp[0]), 10, yyval); }
#line 1780 "simplebison.tab.c"
    break;

  case 89: /* Expression: IDENTIFIER DOUBLE_EQUAL IDENTIFIER  */
#line 155 "simplebison.y"
                                              {  gcvt(atof(yyvsp[-2]) ==  atof(yyvsp[0]), 10, yyval); }
#line 1786 "simplebison.tab.c"
    break;

  case 90: /* Expression: Expression NOT_EQUAL Expression  */
#line 156 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) != atof(yyvsp[0]), 10, yyval); }
#line 1792 "simplebison.tab.c"
    break;

  case 91: /* Expression: IDENTIFIER NOT_EQUAL Expression  */
#line 157 "simplebison.y"
                                           {  gcvt(atof(yyvsp[-2]) != atof(yyvsp[0]), 10, yyval); }
#line 1798 "simplebison.tab.c"
    break;

  case 92: /* Expression: IDENTIFIER NOT_EQUAL IDENTIFIER  */
#line 158 "simplebison.y"
                                           {  gcvt(atof(yyvsp[-2]) != atof(yyvsp[0]), 10, yyval); }
#line 1804 "simplebison.tab.c"
    break;

  case 93: /* Expression: Expression SMALL_EQUAL Expression  */
#line 159 "simplebison.y"
                                         {  gcvt(atof(yyvsp[-2]) <= atof(yyvsp[0]), 10, yyval); }
#line 1810 "simplebison.tab.c"
    break;

  case 94: /* Expression: IDENTIFIER SMALL_EQUAL Expression  */
#line 160 "simplebison.y"
                                             {  gcvt(atof(yyvsp[-2]) <= atof(yyvsp[0]), 10, yyval); }
#line 1816 "simplebison.tab.c"
    break;

  case 95: /* Expression: IDENTIFIER SMALL_EQUAL IDENTIFIER  */
#line 161 "simplebison.y"
                                             {  gcvt(atof(yyvsp[-2]) <= atof(yyvsp[0]), 10, yyval); }
#line 1822 "simplebison.tab.c"
    break;

  case 96: /* Expression: Expression BIG_EQUAL Expression  */
#line 162 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) >= atof(yyvsp[0]), 10, yyval); }
#line 1828 "simplebison.tab.c"
    break;

  case 97: /* Expression: IDENTIFIER BIG_EQUAL Expression  */
#line 163 "simplebison.y"
                                           {  gcvt(atof(yyvsp[-2]) >= atof(yyvsp[0]), 10, yyval); }
#line 1834 "simplebison.tab.c"
    break;

  case 98: /* Expression: IDENTIFIER BIG_EQUAL IDENTIFIER  */
#line 164 "simplebison.y"
                                           {  gcvt(atof(yyvsp[-2]) >= atof(yyvsp[0]), 10, yyval); }
#line 1840 "simplebison.tab.c"
    break;

  case 99: /* Expression: Expression OR Expression  */
#line 165 "simplebison.y"
                                 {  gcvt(atof(yyvsp[-2]) || atof(yyvsp[0]), 10, yyval); }
#line 1846 "simplebison.tab.c"
    break;

  case 100: /* Expression: IDENTIFIER OR Expression  */
#line 166 "simplebison.y"
                                    {  gcvt(atof(yyvsp[-2]) || atof(yyvsp[0]), 10, yyval); }
#line 1852 "simplebison.tab.c"
    break;

  case 101: /* Expression: IDENTIFIER OR IDENTIFIER  */
#line 167 "simplebison.y"
                                    {  gcvt(atof(yyvsp[-2]) || atof(yyvsp[0]), 10, yyval); }
#line 1858 "simplebison.tab.c"
    break;

  case 102: /* Expression: Expression AND Expression  */
#line 168 "simplebison.y"
                                  {  gcvt(atof(yyvsp[-2]) && atof(yyvsp[0]), 10, yyval); }
#line 1864 "simplebison.tab.c"
    break;

  case 103: /* Expression: IDENTIFIER AND Expression  */
#line 169 "simplebison.y"
                                     {  gcvt(atof(yyvsp[-2]) && atof(yyvsp[0]), 10, yyval); }
#line 1870 "simplebison.tab.c"
    break;

  case 104: /* Expression: IDENTIFIER AND IDENTIFIER  */
#line 170 "simplebison.y"
                                     {  gcvt(atof(yyvsp[-2]) && atof(yyvsp[0]), 10, yyval); }
#line 1876 "simplebison.tab.c"
    break;

  case 105: /* Expression: NOT Expression  */
#line 171 "simplebison.y"
                       {  gcvt(!atof(yyvsp[-1]), 10, yyval); }
#line 1882 "simplebison.tab.c"
    break;

  case 106: /* Expression: NOT IDENTIFIER  */
#line 172 "simplebison.y"
                       {  gcvt(!atof(yyvsp[-1]), 10, yyval); }
#line 1888 "simplebison.tab.c"
    break;

  case 107: /* Expression: Expression PLUS_EQUAL Expression  */
#line 173 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) + atof(yyvsp[0]), 10, yyval); }
#line 1894 "simplebison.tab.c"
    break;

  case 108: /* Expression: IDENTIFIER PLUS_EQUAL Expression DELIMITER  */
#line 174 "simplebison.y"
                                                 {  gcvt(atof(yyvsp[-3]) + atof(yyvsp[-1]), 10, yyval); }
#line 1900 "simplebison.tab.c"
    break;

  case 109: /* Expression: Expression MINUS_EQUAL Expression  */
#line 175 "simplebison.y"
                                         {  gcvt(atof(yyvsp[-2]) - atof(yyvsp[0]), 10, yyval); }
#line 1906 "simplebison.tab.c"
    break;

  case 110: /* Expression: IDENTIFIER MINUS_EQUAL Expression DELIMITER  */
#line 176 "simplebison.y"
                                                  {  gcvt(atof(yyvsp[-3]) - atof(yyvsp[-1]), 10, yyval); }
#line 1912 "simplebison.tab.c"
    break;

  case 111: /* Expression: Expression MULT_EQUAL Expression  */
#line 177 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) * atof(yyvsp[0]), 10, yyval); }
#line 1918 "simplebison.tab.c"
    break;

  case 112: /* Expression: IDENTIFIER MULT_EQUAL Expression DELIMITER  */
#line 178 "simplebison.y"
                                                 {  gcvt(atof(yyvsp[-3]) * atof(yyvsp[-1]), 10, yyval); }
#line 1924 "simplebison.tab.c"
    break;

  case 113: /* Expression: Expression DIV_EQUAL Expression  */
#line 179 "simplebison.y"
                                       {  gcvt(atof(yyvsp[-2]) / atof(yyvsp[0]), 10, yyval); }
#line 1930 "simplebison.tab.c"
    break;

  case 114: /* Expression: IDENTIFIER DIV_EQUAL Expression DELIMITER  */
#line 180 "simplebison.y"
                                                {  gcvt(atof(yyvsp[-3]) / atof(yyvsp[-1]), 10, yyval); }
#line 1936 "simplebison.tab.c"
    break;

  case 115: /* Expression: Expression DOUBLE_PLUS  */
#line 181 "simplebison.y"
                              {  gcvt(atof(yyvsp[-1]) + 1, 10, yyval); }
#line 1942 "simplebison.tab.c"
    break;

  case 116: /* Expression: DOUBLE_PLUS Expression  */
#line 182 "simplebison.y"
                              {  gcvt(atof(yyvsp[0]) + 1, 10, yyval); }
#line 1948 "simplebison.tab.c"
    break;

  case 117: /* Expression: Expression DOUBLE_MINUS  */
#line 183 "simplebison.y"
                               {  gcvt(atof(yyvsp[-1]) - 1, 10, yyval); }
#line 1954 "simplebison.tab.c"
    break;

  case 118: /* Expression: DOUBLE_MINUS Expression  */
#line 184 "simplebison.y"
                               {  gcvt(atof(yyvsp[0]) - 1, 10, yyval); }
#line 1960 "simplebison.tab.c"
    break;

  case 119: /* Expression: Expression BIT_AND Expression  */
#line 185 "simplebison.y"
                                     {  gcvt((int)atof(yyvsp[-2]) & (int)atof(yyvsp[0]), 10, yyval); }
#line 1966 "simplebison.tab.c"
    break;


#line 1970 "simplebison.tab.c"

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

#line 188 "simplebison.y"


int yyerror(char *s) {
  printf("Error: %s\n", s);
  return 0;
}

int main() {
  if (yyparse() == 0)
     fprintf(stderr, "Successful parsing.\n");
  else
     fprintf(stderr, "Error found.\n");
  return 0;
}
