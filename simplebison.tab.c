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
  YYSYMBOL_COMPARE = 39,                   /* COMPARE  */
  YYSYMBOL_NEG = 40,                       /* NEG  */
  YYSYMBOL_41_ = 41,                       /* '['  */
  YYSYMBOL_42_ = 42,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_Input = 44,                     /* Input  */
  YYSYMBOL_Line = 45,                      /* Line  */
  YYSYMBOL_Comment = 46,                   /* Comment  */
  YYSYMBOL_Compare = 47,                   /* Compare  */
  YYSYMBOL_Key = 48,                       /* Key  */
  YYSYMBOL_str = 49,                       /* str  */
  YYSYMBOL_sca = 50,                       /* sca  */
  YYSYMBOL_var = 51,                       /* var  */
  YYSYMBOL_err = 52,                       /* err  */
  YYSYMBOL_Expression = 53                 /* Expression  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   824

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  11
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   295


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
       2,    41,     2,    42,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    30,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    49,    53,    54,    59,    63,
      64,    68,    72,    73,    74,    75,    79,    80,    81,    82,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147
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
  "SCAN", "LEFT", "RIGHT", "COMPARE", "NEG", "'['", "']'", "$accept",
  "Input", "Line", "Comment", "Compare", "Key", "str", "sca", "var", "err",
  "Expression", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-30)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-26)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -30,    94,   -30,    -8,   -30,   -30,    -8,    28,    -5,   -30,
     -30,   160,   671,    28,    28,   -29,    28,   -28,     8,   -30,
     -10,    -7,    -6,   108,    -4,   138,     0,   409,    -8,   -30,
      28,   149,   -30,   725,   791,   -30,   725,   791,   181,   192,
     199,   -30,   213,   231,   245,   252,   263,   284,   295,    28,
      28,    28,    28,   302,   316,   334,   348,   642,   642,   -13,
     380,   -22,   -23,   -30,   -30,   -30,   -30,   642,   -30,   -30,
     439,   -30,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    28,    28,   -30,    28,    28,    28,
     -30,   -30,    28,    28,    28,   -30,   468,   725,   769,   725,
     769,   725,   747,   725,   696,   725,   696,   725,   747,   725,
     747,   725,   769,   725,   769,   725,   769,   497,   526,   555,
     584,   725,   776,   725,   776,   725,   642,   725,   747,   -15,
     -30,    -9,    -2,   -30,   -30,   769,   769,   747,   696,   696,
     747,   747,   769,   769,   769,   642,   642,   642,   642,   776,
     776,   642,   642,   747,   613,     3,   -30,   -30,   -30,   -30,
      15,     4,     5,   -30,   -30,    -3,    20,    18,    26,   -30,
     -30
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,    30,    31,    15,    18,     0,    26,     4,
      19,     0,    22,     0,     0,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      27,     0,    30,     0,    50,    29,    78,    77,     0,     0,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    90,     0,
       0,     0,     0,     6,     7,     9,    10,    20,     8,    11,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,     0,     0,
      87,    89,     0,     0,    14,    24,     0,    58,    57,    55,
      54,    46,    45,    34,    33,    37,    36,    40,    39,    43,
      42,    70,    69,    67,    66,    64,    63,     0,     0,     0,
       0,    73,    72,    76,    75,    61,    60,    49,    48,     0,
      51,     0,     0,    52,    23,    56,    53,    44,    32,    35,
      38,    41,    68,    65,    62,    79,    81,    83,    85,    71,
      74,    59,    91,    47,     0,    23,    80,    82,    84,    86,
       0,     0,     0,    13,    21,     0,     0,     0,     0,    16,
      17
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     1,   -30,
      -1
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    19,    20,    21,    22,    23,    24,    31,    26,
      70
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      27,    28,    25,   131,    30,    35,    34,   132,    59,    61,
      37,    62,    57,    58,    63,    60,   129,    64,    65,   133,
      68,    29,    67,   160,    71,   164,   161,   -25,   169,   165,
      96,    32,     4,   162,   166,   167,   170,    98,   100,   102,
       7,   104,   106,   108,   110,   112,   114,   116,   117,   118,
     119,   120,   122,   124,   126,   128,    11,    33,   168,    13,
      14,     0,     0,     0,     0,    16,     0,     0,     0,    18,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,   149,   150,   151,     0,
       0,   152,   153,   154,     2,     0,     0,     3,     4,     5,
       0,     0,     0,     6,     0,     0,     7,     0,     0,     0,
       0,    32,     4,     0,     0,     0,     0,     8,     9,    10,
       7,     0,    11,    12,     0,    13,    14,     0,     0,     0,
      15,    16,    66,    17,     0,    18,    11,    33,     0,    13,
      14,    32,     4,     0,     0,    16,     0,     0,     0,    18,
       7,     0,    32,     4,     0,     0,     0,     0,     0,    95,
       0,     7,    69,    32,     4,     0,    11,    33,     0,    13,
      14,     0,     7,     0,     0,    16,     0,    11,    33,    18,
      13,    14,     0,     0,    32,     4,    16,     0,    11,    36,
      18,    13,    14,     7,     0,    32,     4,    16,     0,     0,
       0,    18,    32,     4,     7,     0,     0,     0,     0,    11,
      97,     7,    13,    14,     0,     0,    32,     4,    16,     0,
      11,    99,    18,    13,    14,     7,     0,    11,   101,    16,
      13,    14,     0,    18,    32,     4,    16,     0,     0,     0,
      18,    11,   103,     7,    13,    14,     0,     0,    32,     4,
      16,     0,     0,     0,    18,    32,     4,     7,     0,    11,
     105,     0,    13,    14,     7,     0,    32,     4,    16,     0,
       0,     0,    18,    11,   107,     7,    13,    14,     0,     0,
      11,   109,    16,    13,    14,     0,    18,    32,     4,    16,
       0,    11,   111,    18,    13,    14,     7,     0,    32,     4,
      16,     0,     0,     0,    18,    32,     4,     7,     0,     0,
       0,     0,    11,   113,     7,    13,    14,     0,     0,    32,
       4,    16,     0,    11,   115,    18,    13,    14,     7,     0,
      11,   121,    16,    13,    14,     0,    18,    32,     4,    16,
       0,     0,     0,    18,    11,   123,     7,    13,    14,     0,
       0,    32,     4,    16,     0,     0,     0,    18,     0,     0,
       7,     0,    11,   125,     0,    13,    14,     0,     0,     0,
       0,    16,     0,     0,     0,    18,    11,   127,     0,    13,
      14,     0,     0,     0,     0,    16,    72,    73,    74,    18,
       0,    75,    76,    77,    78,     0,    79,    80,    81,    82,
      83,    84,    85,     0,     0,     0,    87,    88,     0,     0,
      89,    90,    91,    92,    93,    72,    73,    74,   130,     0,
      75,    76,    77,    78,     0,    79,    80,    81,    82,    83,
      84,    85,     0,    86,     0,    87,    88,     0,     0,    89,
      90,    91,    92,    93,    94,    72,    73,    74,     0,   134,
      75,    76,    77,    78,     0,    79,    80,    81,    82,    83,
      84,    85,     0,     0,     0,    87,    88,     0,     0,    89,
      90,    91,    92,    93,    72,    73,    74,     0,   155,    75,
      76,    77,    78,     0,    79,    80,    81,    82,    83,    84,
      85,     0,     0,     0,    87,    88,     0,     0,    89,    90,
      91,    92,    93,    72,    73,    74,     0,   156,    75,    76,
      77,    78,     0,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,    87,    88,     0,     0,    89,    90,    91,
      92,    93,    72,    73,    74,     0,   157,    75,    76,    77,
      78,     0,    79,    80,    81,    82,    83,    84,    85,     0,
       0,     0,    87,    88,     0,     0,    89,    90,    91,    92,
      93,    72,    73,    74,     0,   158,    75,    76,    77,    78,
       0,    79,    80,    81,    82,    83,    84,    85,     0,     0,
       0,    87,    88,     0,     0,    89,    90,    91,    92,    93,
      72,    73,    74,     0,   159,    75,    76,    77,    78,     0,
      79,    80,    81,    82,    83,    84,    85,     0,     0,     0,
      87,    88,     0,     0,    89,    90,    91,    92,    93,    72,
      73,    74,     0,     0,    75,    76,    77,    78,     0,    79,
      80,    81,    82,    83,    84,    85,     0,   163,     0,    87,
      88,     0,     0,    89,    90,    91,    92,    93,    72,    73,
      74,     0,     0,    75,    76,    77,    78,     0,    79,    80,
      81,    82,    83,    84,    85,     0,     0,     0,    87,    88,
       0,     0,    89,    90,    91,    92,    93,    38,    39,    40,
       0,    41,    42,    43,    44,    45,     0,    46,    47,    48,
      49,    50,    51,    52,     0,     0,     0,    53,    54,     0,
       0,    55,    72,    73,    74,    56,     0,     0,     0,    77,
      78,     0,    79,    80,    81,    82,    83,    84,    85,     0,
       0,     0,    87,    88,     0,     0,    89,    90,    91,    92,
      93,    38,    39,    40,     0,     0,    42,    43,    44,    45,
       0,    46,    47,    48,    49,    50,    51,    52,     0,     0,
       0,    53,    54,    72,    73,    55,     0,     0,     0,    56,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,    87,    88,   -26,   -26,    89,    90,    91,
      92,    93,    72,    73,     0,   -26,   -26,   -26,    82,    83,
      84,    85,    79,    80,    81,    82,    83,    84,    85,    89,
      90,    91,    92,     0,     0,     0,    89,    90,    91,    92,
      82,    83,    84,    85,     0,     0,     0,     0,     0,     0,
       0,    89,    90,    91,    92
};

static const yytype_int8 yycheck[] =
{
       1,     9,     1,    25,     3,    10,     7,    29,    37,    37,
      11,     3,    13,    14,    24,    16,    29,    24,    24,    42,
      24,    29,    23,    38,    24,    10,    35,    24,    10,    25,
      31,     3,     4,    35,    29,    38,    10,    38,    39,    40,
      12,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    28,    29,    38,    31,
      32,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    -1,    87,    88,    89,    -1,
      -1,    92,    93,    94,     0,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    23,    24,    25,
      12,    -1,    28,    29,    -1,    31,    32,    -1,    -1,    -1,
      36,    37,    24,    39,    -1,    41,    28,    29,    -1,    31,
      32,     3,     4,    -1,    -1,    37,    -1,    -1,    -1,    41,
      12,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    12,    24,     3,     4,    -1,    28,    29,    -1,    31,
      32,    -1,    12,    -1,    -1,    37,    -1,    28,    29,    41,
      31,    32,    -1,    -1,     3,     4,    37,    -1,    28,    29,
      41,    31,    32,    12,    -1,     3,     4,    37,    -1,    -1,
      -1,    41,     3,     4,    12,    -1,    -1,    -1,    -1,    28,
      29,    12,    31,    32,    -1,    -1,     3,     4,    37,    -1,
      28,    29,    41,    31,    32,    12,    -1,    28,    29,    37,
      31,    32,    -1,    41,     3,     4,    37,    -1,    -1,    -1,
      41,    28,    29,    12,    31,    32,    -1,    -1,     3,     4,
      37,    -1,    -1,    -1,    41,     3,     4,    12,    -1,    28,
      29,    -1,    31,    32,    12,    -1,     3,     4,    37,    -1,
      -1,    -1,    41,    28,    29,    12,    31,    32,    -1,    -1,
      28,    29,    37,    31,    32,    -1,    41,     3,     4,    37,
      -1,    28,    29,    41,    31,    32,    12,    -1,     3,     4,
      37,    -1,    -1,    -1,    41,     3,     4,    12,    -1,    -1,
      -1,    -1,    28,    29,    12,    31,    32,    -1,    -1,     3,
       4,    37,    -1,    28,    29,    41,    31,    32,    12,    -1,
      28,    29,    37,    31,    32,    -1,    41,     3,     4,    37,
      -1,    -1,    -1,    41,    28,    29,    12,    31,    32,    -1,
      -1,     3,     4,    37,    -1,    -1,    -1,    41,    -1,    -1,
      12,    -1,    28,    29,    -1,    31,    32,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    28,    29,    -1,    31,
      32,    -1,    -1,    -1,    -1,    37,     6,     7,     8,    41,
      -1,    11,    12,    13,    14,    -1,    16,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,
      30,    31,    32,    33,    34,     6,     7,     8,    38,    -1,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    24,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    34,    35,     6,     7,     8,    -1,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    -1,    -1,    30,
      31,    32,    33,    34,     6,     7,     8,    -1,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    -1,    -1,    30,    31,
      32,    33,    34,     6,     7,     8,    -1,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,
      33,    34,     6,     7,     8,    -1,    10,    11,    12,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      34,     6,     7,     8,    -1,    10,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,    -1,    -1,    30,    31,    32,    33,    34,
       6,     7,     8,    -1,    10,    11,    12,    13,    14,    -1,
      16,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    -1,    -1,    30,    31,    32,    33,    34,     6,
       7,     8,    -1,    -1,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    20,    21,    22,    -1,    24,    -1,    26,
      27,    -1,    -1,    30,    31,    32,    33,    34,     6,     7,
       8,    -1,    -1,    11,    12,    13,    14,    -1,    16,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      -1,    -1,    30,    31,    32,    33,    34,     6,     7,     8,
      -1,    10,    11,    12,    13,    14,    -1,    16,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    -1,
      -1,    30,     6,     7,     8,    34,    -1,    -1,    -1,    13,
      14,    -1,    16,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    -1,    -1,    30,    31,    32,    33,
      34,     6,     7,     8,    -1,    -1,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    26,    27,     6,     7,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,     6,     7,    30,    31,    32,
      33,    34,     6,     7,    -1,    16,    17,    18,    19,    20,
      21,    22,    16,    17,    18,    19,    20,    21,    22,    30,
      31,    32,    33,    -1,    -1,    -1,    30,    31,    32,    33,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    44,     0,     3,     4,     5,     9,    12,    23,    24,
      25,    28,    29,    31,    32,    36,    37,    39,    41,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     9,    29,
      51,    51,     3,    29,    53,    10,    29,    53,     6,     7,
       8,    10,    11,    12,    13,    14,    16,    17,    18,    19,
      20,    21,    22,    26,    27,    30,    34,    53,    53,    37,
      53,    37,     3,    24,    24,    24,    24,    53,    24,    24,
      53,    24,     6,     7,     8,    11,    12,    13,    14,    16,
      17,    18,    19,    20,    21,    22,    24,    26,    27,    30,
      31,    32,    33,    34,    35,    10,    53,    29,    53,    29,
      53,    29,    53,    29,    53,    29,    53,    29,    53,    29,
      53,    29,    53,    29,    53,    29,    53,    53,    53,    53,
      53,    29,    53,    29,    53,    29,    53,    29,    53,    29,
      38,    25,    29,    42,    10,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    10,    10,    10,    10,    10,
      38,    35,    35,    24,    10,    25,    29,    38,    38,    10,
      10
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    44,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    46,    47,    47,    48,    49,
      49,    50,    51,    51,    51,    51,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     4,     2,     1,     7,     7,     1,     1,
       2,     5,     1,     3,     3,     4,     1,     2,     2,     2,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
       4,     3,     4,     3,     4,     3,     4,     2,     2,     2,
       2,     3
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
#line 35 "simplebison.y"
                         { printf("Result: %s\n", yyvsp[-1]); }
#line 1363 "simplebison.tab.c"
    break;

  case 6: /* Line: Comment END  */
#line 36 "simplebison.y"
                         { printf("COMMENT: %s\n", yyvsp[-1]); }
#line 1369 "simplebison.tab.c"
    break;

  case 7: /* Line: Compare END  */
#line 37 "simplebison.y"
                         { printf("COMPARE: %s\n", yyvsp[-1]); }
#line 1375 "simplebison.tab.c"
    break;

  case 8: /* Line: sca END  */
#line 38 "simplebison.y"
                         { printf("SCAN: %s\n", yyvsp[-1]); }
#line 1381 "simplebison.tab.c"
    break;

  case 9: /* Line: Key END  */
#line 39 "simplebison.y"
                         { printf("KEYWORD: %s\n", yyvsp[-1]); }
#line 1387 "simplebison.tab.c"
    break;

  case 10: /* Line: str END  */
#line 40 "simplebison.y"
                         { printf("Strings: %s\n", yyvsp[-1]); }
#line 1393 "simplebison.tab.c"
    break;

  case 11: /* Line: var END  */
#line 41 "simplebison.y"
                         { printf("IDENTIFIER: %s\n", yyvsp[-1]); }
#line 1399 "simplebison.tab.c"
    break;

  case 12: /* Line: err END  */
#line 42 "simplebison.y"
                         { yyerror(yyvsp[-1]);                  }
#line 1405 "simplebison.tab.c"
    break;

  case 13: /* Line: Expression SEM Expression END  */
#line 43 "simplebison.y"
                                     { yyerror("Unexpected comma in expression."); }
#line 1411 "simplebison.tab.c"
    break;

  case 14: /* Line: Expression SEM  */
#line 44 "simplebison.y"
                      { yyerror("Unexpected comma in expression."); }
#line 1417 "simplebison.tab.c"
    break;

  case 15: /* Comment: COMMENT  */
#line 49 "simplebison.y"
             { yyval=yyvsp[0]; }
#line 1423 "simplebison.tab.c"
    break;

  case 18: /* Key: KEYWORD  */
#line 59 "simplebison.y"
             { yyval=yyvsp[0]; }
#line 1429 "simplebison.tab.c"
    break;

  case 19: /* str: STRING  */
#line 63 "simplebison.y"
            { yyval=yyvsp[0]; }
#line 1435 "simplebison.tab.c"
    break;

  case 21: /* sca: SCAN LEFT IDENTIFIER RIGHT DELIMITER  */
#line 68 "simplebison.y"
                                            { printf("Enter value for %s: ", yyvsp[-2]); scanf("%s", yyvsp[-2]); }
#line 1441 "simplebison.tab.c"
    break;

  case 22: /* var: IDENTIFIER  */
#line 72 "simplebison.y"
                { yyval=yyvsp[0]; }
#line 1447 "simplebison.tab.c"
    break;

  case 26: /* err: ERROR  */
#line 79 "simplebison.y"
           { yyval=yyvsp[0]; }
#line 1453 "simplebison.tab.c"
    break;

  case 27: /* err: INTCONST var  */
#line 80 "simplebison.y"
                    { yyerror("Variable start with a number"); }
#line 1459 "simplebison.tab.c"
    break;

  case 28: /* err: IDENTIFIER DELIMITER  */
#line 81 "simplebison.y"
                            { yyerror("Variable with ;"); }
#line 1465 "simplebison.tab.c"
    break;

  case 29: /* err: ERROR DELIMITER  */
#line 82 "simplebison.y"
                       { yyerror("error!!!"); }
#line 1471 "simplebison.tab.c"
    break;

  case 30: /* Expression: INTCONST  */
#line 86 "simplebison.y"
                    { yyval = yyvsp[0]; }
#line 1477 "simplebison.tab.c"
    break;

  case 31: /* Expression: FLOAT  */
#line 87 "simplebison.y"
                    { yyval = yyvsp[0]; }
#line 1483 "simplebison.tab.c"
    break;

  case 32: /* Expression: Expression PLUS Expression  */
#line 88 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) + atof(yyvsp[0]), 10, yyval); }
#line 1489 "simplebison.tab.c"
    break;

  case 33: /* Expression: IDENTIFIER PLUS Expression  */
#line 89 "simplebison.y"
                                      {  gcvt(atof(yyvsp[-2]) + atof(yyvsp[0]), 10, yyval); }
#line 1495 "simplebison.tab.c"
    break;

  case 34: /* Expression: IDENTIFIER PLUS IDENTIFIER  */
#line 90 "simplebison.y"
                                      {  gcvt(atof(yyvsp[-2]) + atof(yyvsp[0]), 10, yyval); }
#line 1501 "simplebison.tab.c"
    break;

  case 35: /* Expression: Expression MINUS Expression  */
#line 91 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) - atof(yyvsp[0]), 10, yyval); }
#line 1507 "simplebison.tab.c"
    break;

  case 36: /* Expression: IDENTIFIER MINUS Expression  */
#line 92 "simplebison.y"
                                       {  gcvt(atof(yyvsp[-2]) - atof(yyvsp[0]), 10, yyval); }
#line 1513 "simplebison.tab.c"
    break;

  case 37: /* Expression: IDENTIFIER MINUS IDENTIFIER  */
#line 93 "simplebison.y"
                                       {  gcvt(atof(yyvsp[-2]) - atof(yyvsp[0]), 10, yyval); }
#line 1519 "simplebison.tab.c"
    break;

  case 38: /* Expression: Expression MULTIPLY Expression  */
#line 94 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) * atof(yyvsp[0]), 10, yyval); }
#line 1525 "simplebison.tab.c"
    break;

  case 39: /* Expression: IDENTIFIER MULTIPLY Expression  */
#line 95 "simplebison.y"
                                          {  gcvt(atof(yyvsp[-2]) * atof(yyvsp[0]), 10, yyval); }
#line 1531 "simplebison.tab.c"
    break;

  case 40: /* Expression: IDENTIFIER MULTIPLY IDENTIFIER  */
#line 96 "simplebison.y"
                                          {  gcvt(atof(yyvsp[-2]) * atof(yyvsp[0]), 10, yyval); }
#line 1537 "simplebison.tab.c"
    break;

  case 41: /* Expression: Expression DIV Expression  */
#line 97 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) / atof(yyvsp[0]), 10, yyval); }
#line 1543 "simplebison.tab.c"
    break;

  case 42: /* Expression: IDENTIFIER DIV Expression  */
#line 98 "simplebison.y"
                                     {  gcvt(atof(yyvsp[-2]) / atof(yyvsp[0]), 10, yyval); }
#line 1549 "simplebison.tab.c"
    break;

  case 43: /* Expression: IDENTIFIER DIV IDENTIFIER  */
#line 99 "simplebison.y"
                                     {  gcvt(atof(yyvsp[-2]) / atof(yyvsp[0]), 10, yyval); }
#line 1555 "simplebison.tab.c"
    break;

  case 44: /* Expression: Expression MOD Expression  */
#line 100 "simplebison.y"
                                        {  gcvt(fmod(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1561 "simplebison.tab.c"
    break;

  case 45: /* Expression: IDENTIFIER MOD Expression  */
#line 101 "simplebison.y"
                                     {  gcvt(fmod(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1567 "simplebison.tab.c"
    break;

  case 46: /* Expression: IDENTIFIER MOD IDENTIFIER  */
#line 102 "simplebison.y"
                                    {  gcvt(fmod(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1573 "simplebison.tab.c"
    break;

  case 47: /* Expression: Expression POWER Expression  */
#line 103 "simplebison.y"
                                        {  gcvt(pow(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1579 "simplebison.tab.c"
    break;

  case 48: /* Expression: IDENTIFIER POWER Expression  */
#line 104 "simplebison.y"
                                       {  gcvt(pow(atof(yyvsp[-2]), atof(yyvsp[0])), 10, yyval); }
#line 1585 "simplebison.tab.c"
    break;

  case 49: /* Expression: IDENTIFIER POWER IDENTIFIER  */
#line 105 "simplebison.y"
                                       {  gcvt(pow(atof(yyvsp[-2]) , atof(yyvsp[0])), 10, yyval); }
#line 1591 "simplebison.tab.c"
    break;

  case 50: /* Expression: MINUS Expression  */
#line 106 "simplebison.y"
                                        {  gcvt(-atof(yyvsp[0]), 10, yyval); }
#line 1597 "simplebison.tab.c"
    break;

  case 51: /* Expression: LEFT Expression RIGHT  */
#line 107 "simplebison.y"
                                           { yyval = yyvsp[-1]; }
#line 1603 "simplebison.tab.c"
    break;

  case 52: /* Expression: '[' INTCONST ']'  */
#line 108 "simplebison.y"
                                      { yyval = yyvsp[-1]; }
#line 1609 "simplebison.tab.c"
    break;

  case 53: /* Expression: Expression BIGGER Expression  */
#line 109 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) > atof(yyvsp[0]), 10, yyval); }
#line 1615 "simplebison.tab.c"
    break;

  case 54: /* Expression: IDENTIFIER BIGGER Expression  */
#line 110 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) > atof(yyvsp[0]), 10, yyval); }
#line 1621 "simplebison.tab.c"
    break;

  case 55: /* Expression: IDENTIFIER BIGGER IDENTIFIER  */
#line 111 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) > atof(yyvsp[0]), 10, yyval); }
#line 1627 "simplebison.tab.c"
    break;

  case 56: /* Expression: Expression SMALLER Expression  */
#line 112 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) < atof(yyvsp[0]), 10, yyval); }
#line 1633 "simplebison.tab.c"
    break;

  case 57: /* Expression: IDENTIFIER SMALLER Expression  */
#line 113 "simplebison.y"
                                         {  gcvt(atof(yyvsp[-2]) < atof(yyvsp[0]), 10, yyval); }
#line 1639 "simplebison.tab.c"
    break;

  case 58: /* Expression: IDENTIFIER SMALLER IDENTIFIER  */
#line 114 "simplebison.y"
                                         {  gcvt(atof(yyvsp[-2]) < atof(yyvsp[0]), 10, yyval); }
#line 1645 "simplebison.tab.c"
    break;

  case 59: /* Expression: Expression DOUBLE_EQUAL Expression  */
#line 115 "simplebison.y"
                                          {  gcvt(atof(yyvsp[-2]) == atof(yyvsp[0]), 10, yyval); }
#line 1651 "simplebison.tab.c"
    break;

  case 60: /* Expression: IDENTIFIER DOUBLE_EQUAL Expression  */
#line 116 "simplebison.y"
                                              {  gcvt(atof(yyvsp[-2]) == atof(yyvsp[0]), 10, yyval); }
#line 1657 "simplebison.tab.c"
    break;

  case 61: /* Expression: IDENTIFIER DOUBLE_EQUAL IDENTIFIER  */
#line 117 "simplebison.y"
                                              {  gcvt(atof(yyvsp[-2]) ==  atof(yyvsp[0]), 10, yyval); }
#line 1663 "simplebison.tab.c"
    break;

  case 62: /* Expression: Expression NOT_EQUAL Expression  */
#line 118 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) != atof(yyvsp[0]), 10, yyval); }
#line 1669 "simplebison.tab.c"
    break;

  case 63: /* Expression: IDENTIFIER NOT_EQUAL Expression  */
#line 119 "simplebison.y"
                                           {  gcvt(atof(yyvsp[-2]) != atof(yyvsp[0]), 10, yyval); }
#line 1675 "simplebison.tab.c"
    break;

  case 64: /* Expression: IDENTIFIER NOT_EQUAL IDENTIFIER  */
#line 120 "simplebison.y"
                                           {  gcvt(atof(yyvsp[-2]) != atof(yyvsp[0]), 10, yyval); }
#line 1681 "simplebison.tab.c"
    break;

  case 65: /* Expression: Expression SMALL_EQUAL Expression  */
#line 121 "simplebison.y"
                                         {  gcvt(atof(yyvsp[-2]) <= atof(yyvsp[0]), 10, yyval); }
#line 1687 "simplebison.tab.c"
    break;

  case 66: /* Expression: IDENTIFIER SMALL_EQUAL Expression  */
#line 122 "simplebison.y"
                                             {  gcvt(atof(yyvsp[-2]) <= atof(yyvsp[0]), 10, yyval); }
#line 1693 "simplebison.tab.c"
    break;

  case 67: /* Expression: IDENTIFIER SMALL_EQUAL IDENTIFIER  */
#line 123 "simplebison.y"
                                             {  gcvt(atof(yyvsp[-2]) <= atof(yyvsp[0]), 10, yyval); }
#line 1699 "simplebison.tab.c"
    break;

  case 68: /* Expression: Expression BIG_EQUAL Expression  */
#line 124 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) >= atof(yyvsp[0]), 10, yyval); }
#line 1705 "simplebison.tab.c"
    break;

  case 69: /* Expression: IDENTIFIER BIG_EQUAL Expression  */
#line 125 "simplebison.y"
                                           {  gcvt(atof(yyvsp[-2]) >= atof(yyvsp[0]), 10, yyval); }
#line 1711 "simplebison.tab.c"
    break;

  case 70: /* Expression: IDENTIFIER BIG_EQUAL IDENTIFIER  */
#line 126 "simplebison.y"
                                           {  gcvt(atof(yyvsp[-2]) >= atof(yyvsp[0]), 10, yyval); }
#line 1717 "simplebison.tab.c"
    break;

  case 71: /* Expression: Expression OR Expression  */
#line 127 "simplebison.y"
                                 {  gcvt(atof(yyvsp[-2]) || atof(yyvsp[0]), 10, yyval); }
#line 1723 "simplebison.tab.c"
    break;

  case 72: /* Expression: IDENTIFIER OR Expression  */
#line 128 "simplebison.y"
                                    {  gcvt(atof(yyvsp[-2]) || atof(yyvsp[0]), 10, yyval); }
#line 1729 "simplebison.tab.c"
    break;

  case 73: /* Expression: IDENTIFIER OR IDENTIFIER  */
#line 129 "simplebison.y"
                                    {  gcvt(atof(yyvsp[-2]) || atof(yyvsp[0]), 10, yyval); }
#line 1735 "simplebison.tab.c"
    break;

  case 74: /* Expression: Expression AND Expression  */
#line 130 "simplebison.y"
                                  {  gcvt(atof(yyvsp[-2]) && atof(yyvsp[0]), 10, yyval); }
#line 1741 "simplebison.tab.c"
    break;

  case 75: /* Expression: IDENTIFIER AND Expression  */
#line 131 "simplebison.y"
                                     {  gcvt(atof(yyvsp[-2]) && atof(yyvsp[0]), 10, yyval); }
#line 1747 "simplebison.tab.c"
    break;

  case 76: /* Expression: IDENTIFIER AND IDENTIFIER  */
#line 132 "simplebison.y"
                                     {  gcvt(atof(yyvsp[-2]) && atof(yyvsp[0]), 10, yyval); }
#line 1753 "simplebison.tab.c"
    break;

  case 77: /* Expression: NOT Expression  */
#line 133 "simplebison.y"
                       {  gcvt(!atof(yyvsp[-1]), 10, yyval); }
#line 1759 "simplebison.tab.c"
    break;

  case 78: /* Expression: NOT IDENTIFIER  */
#line 134 "simplebison.y"
                       {  gcvt(!atof(yyvsp[-1]), 10, yyval); }
#line 1765 "simplebison.tab.c"
    break;

  case 79: /* Expression: Expression PLUS_EQUAL Expression  */
#line 135 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) + atof(yyvsp[0]), 10, yyval); }
#line 1771 "simplebison.tab.c"
    break;

  case 80: /* Expression: IDENTIFIER PLUS_EQUAL Expression DELIMITER  */
#line 136 "simplebison.y"
                                                 {  gcvt(atof(yyvsp[-3]) + atof(yyvsp[-1]), 10, yyval); }
#line 1777 "simplebison.tab.c"
    break;

  case 81: /* Expression: Expression MINUS_EQUAL Expression  */
#line 137 "simplebison.y"
                                         {  gcvt(atof(yyvsp[-2]) - atof(yyvsp[0]), 10, yyval); }
#line 1783 "simplebison.tab.c"
    break;

  case 82: /* Expression: IDENTIFIER MINUS_EQUAL Expression DELIMITER  */
#line 138 "simplebison.y"
                                                  {  gcvt(atof(yyvsp[-3]) - atof(yyvsp[-1]), 10, yyval); }
#line 1789 "simplebison.tab.c"
    break;

  case 83: /* Expression: Expression MULT_EQUAL Expression  */
#line 139 "simplebison.y"
                                        {  gcvt(atof(yyvsp[-2]) * atof(yyvsp[0]), 10, yyval); }
#line 1795 "simplebison.tab.c"
    break;

  case 84: /* Expression: IDENTIFIER MULT_EQUAL Expression DELIMITER  */
#line 140 "simplebison.y"
                                                 {  gcvt(atof(yyvsp[-3]) * atof(yyvsp[-1]), 10, yyval); }
#line 1801 "simplebison.tab.c"
    break;

  case 85: /* Expression: Expression DIV_EQUAL Expression  */
#line 141 "simplebison.y"
                                       {  gcvt(atof(yyvsp[-2]) / atof(yyvsp[0]), 10, yyval); }
#line 1807 "simplebison.tab.c"
    break;

  case 86: /* Expression: IDENTIFIER DIV_EQUAL Expression DELIMITER  */
#line 142 "simplebison.y"
                                                {  gcvt(atof(yyvsp[-3]) / atof(yyvsp[-1]), 10, yyval); }
#line 1813 "simplebison.tab.c"
    break;

  case 87: /* Expression: Expression DOUBLE_PLUS  */
#line 143 "simplebison.y"
                              {  gcvt(atof(yyvsp[-1]) + 1, 10, yyval); }
#line 1819 "simplebison.tab.c"
    break;

  case 88: /* Expression: DOUBLE_PLUS Expression  */
#line 144 "simplebison.y"
                              {  gcvt(atof(yyvsp[0]) + 1, 10, yyval); }
#line 1825 "simplebison.tab.c"
    break;

  case 89: /* Expression: Expression DOUBLE_MINUS  */
#line 145 "simplebison.y"
                               {  gcvt(atof(yyvsp[-1]) - 1, 10, yyval); }
#line 1831 "simplebison.tab.c"
    break;

  case 90: /* Expression: DOUBLE_MINUS Expression  */
#line 146 "simplebison.y"
                               {  gcvt(atof(yyvsp[0]) - 1, 10, yyval); }
#line 1837 "simplebison.tab.c"
    break;

  case 91: /* Expression: Expression BIT_AND Expression  */
#line 147 "simplebison.y"
                                     {  gcvt((int)atof(yyvsp[-2]) & (int)atof(yyvsp[0]), 10, yyval); }
#line 1843 "simplebison.tab.c"
    break;


#line 1847 "simplebison.tab.c"

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

#line 150 "simplebison.y"


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
