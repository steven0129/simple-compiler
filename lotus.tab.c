/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "lotus.y" /* yacc.c:339  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYDEBUG 1
#ifndef DBG
int debug=0;
#define DBG(...) \
    if(debug) { __VA_ARGS__; }
#endif
#ifndef IDENT
int iCount=0;
#define IDENT(NUM, ...) \
    for(iCount=0; iCount< NUM; iCount++) fprintf(stdout, "\t"); \
    __VA_ARGS__;
#endif
int ifCount=1;
int whileCount=1;
int registerCount=0;

#line 87 "lotus.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "lotus.tab.h".  */
#ifndef YY_YY_LOTUS_TAB_H_INCLUDED
# define YY_YY_LOTUS_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER = 259,
    OPENP = 260,
    CLOSEP = 261,
    BIGOPENP = 262,
    BIGCLOSEP = 263,
    INT = 264,
    SEMICOLON = 265,
    ASSIGN = 266,
    COMMA = 267,
    AND = 268,
    OR = 269,
    NOT = 270,
    EQV = 271,
    NONEQV = 272,
    GREEQV = 273,
    GRE = 274,
    LESSEQV = 275,
    LESS = 276,
    ADD = 277,
    SUB = 278,
    MUL = 279,
    DIV = 280,
    MOD = 281,
    IF = 282,
    IFX = 283,
    ELSE = 284,
    EXIT = 285,
    WHILE = 286,
    WRITE = 287,
    READ = 288,
    RETURN = 289,
    UMINUS = 290,
    UNOT = 291
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "lotus.y" /* yacc.c:355  */

    int integer;
    char* string;

#line 169 "lotus.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_LOTUS_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 200 "lotus.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   104

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  56
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  106

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    53,    56,    59,    65,    73,    74,    77,
      86,    87,    90,    91,    92,    93,    94,    95,    96,    99,
     111,   121,   124,   127,   137,   144,   150,   151,   154,   160,
     170,   177,   178,   181,   182,   185,   186,   189,   190,   191,
     196,   197,   202,   205,   208,   217,   218,   224,   232,   233,
     234,   235,   238,   239,   247,   252,   260
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER", "OPENP",
  "CLOSEP", "BIGOPENP", "BIGCLOSEP", "INT", "SEMICOLON", "ASSIGN", "COMMA",
  "AND", "OR", "NOT", "EQV", "NONEQV", "GREEQV", "GRE", "LESSEQV", "LESS",
  "ADD", "SUB", "MUL", "DIV", "MOD", "IF", "IFX", "ELSE", "EXIT", "WHILE",
  "WRITE", "READ", "RETURN", "UMINUS", "UNOT", "$accept", "program",
  "function_body", "emit_data", "emit_text", "emit_terminate",
  "variable_declarations", "variable_declaration", "statements",
  "statement", "read_statement", "write_statement", "exit_statement",
  "while_statement", "emit_while_branch", "emit_while", "jmp2start",
  "if_statement", "jmp2end", "emit_if_branch", "emit_label",
  "bool_expression", "bool_term", "bool_factor", "bool_primary",
  "compound_statement", "assignment_statement", "arith_expression",
  "arith_term", "arith_factor", "arith_primary", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291
};
# endif

#define YYPACT_NINF -85

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-85)))

#define YYTABLE_NINF -29

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       6,    13,    41,    67,   -85,    57,   -85,   -85,   -85,    56,
      82,   -85,   -85,    76,    -2,   -85,    77,   -85,   -85,    84,
      80,    86,    51,    89,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,    51,     5,    -1,   -85,   -85,   -85,   -85,    51,
      58,    11,    43,   -85,   -85,    83,    36,   -85,    51,    73,
      81,   -85,   -85,    59,   -85,    -1,     1,   -85,   -85,    51,
      51,    51,    51,    51,   -85,   -85,   -85,    -1,    90,    -1,
      51,    51,    51,    51,    51,    51,    73,   -85,    43,    43,
     -85,   -85,   -85,    81,   -85,   -85,     4,     4,     4,     4,
       4,     4,    91,    12,   -85,    66,    12,    69,   -85,   -85,
     -85,   -85,    12,   -85,   -85,   -85
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     4,     2,     7,     5,
       0,    10,     8,     0,     0,     9,     0,    10,     3,     0,
       0,     0,     0,     0,    11,    17,    18,    16,    15,    14,
      13,    12,     0,     0,     0,     6,    24,    55,    54,     0,
       0,     0,    45,    48,    52,     0,     0,    43,     0,    29,
      31,    33,    35,     0,    21,     0,     0,    53,    20,     0,
       0,     0,     0,     0,    19,    44,    36,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    56,    46,    47,
      49,    50,    51,    32,    30,    34,    37,    38,    40,    39,
      42,    41,     0,     0,    24,    30,     0,     0,    26,    25,
      30,    24,     0,    22,    30,    27
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    85,   -36,
     -85,   -85,   -85,   -85,   -85,   -54,   -85,   -85,   -85,   -85,
     -84,    44,    33,    32,    55,   -85,   -85,   -22,    24,     9,
      64
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,     8,    11,    54,     9,    12,    14,    24,
      25,    26,    27,    28,    92,    55,   101,    29,    97,    68,
      93,    49,    50,    51,    52,    30,    31,    53,    42,    43,
      44
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      41,    16,    37,    38,    39,    17,    18,    77,    16,     1,
      46,    98,    17,    47,    48,    16,   102,    56,     3,    17,
     105,    58,    40,    59,    60,    19,    59,    60,    20,    21,
      22,    23,    19,    59,    60,    20,    21,    22,    23,    19,
      96,     4,    20,    21,    22,    23,    65,   103,    86,    87,
      88,    89,    90,    91,    37,    38,    39,    95,    59,    60,
      99,    37,    38,    39,     6,    10,   104,    61,    62,    63,
      80,    81,    82,     5,    40,    70,    71,    72,    73,    74,
      75,    59,    60,    78,    79,    13,    15,    67,    32,    34,
      35,    36,    45,    64,    69,   -28,    84,    94,   100,    76,
      83,    85,    33,    66,    57
};

static const yytype_uint8 yycheck[] =
{
      22,     3,     3,     4,     5,     7,     8,     6,     3,     3,
      32,    95,     7,     8,    15,     3,   100,    39,     5,     7,
     104,    10,    23,    22,    23,    27,    22,    23,    30,    31,
      32,    33,    27,    22,    23,    30,    31,    32,    33,    27,
      94,     0,    30,    31,    32,    33,    10,   101,    70,    71,
      72,    73,    74,    75,     3,     4,     5,    93,    22,    23,
      96,     3,     4,     5,     7,     9,   102,    24,    25,    26,
      61,    62,    63,     6,    23,    16,    17,    18,    19,    20,
      21,    22,    23,    59,    60,     3,    10,    14,    11,     5,
      10,     5,     3,    10,    13,    29,     6,     6,    29,    55,
      67,    69,    17,    48,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    38,     5,     0,     6,     7,    39,    40,    43,
       9,    41,    44,     3,    45,    10,     3,     7,     8,    27,
      30,    31,    32,    33,    46,    47,    48,    49,    50,    54,
      62,    63,    11,    45,     5,    10,     5,     3,     4,     5,
      23,    64,    65,    66,    67,     3,    64,     8,    15,    58,
      59,    60,    61,    64,    42,    52,    64,    67,    10,    22,
      23,    24,    25,    26,    10,    10,    61,    14,    56,    13,
      16,    17,    18,    19,    20,    21,    58,     6,    65,    65,
      66,    66,    66,    59,     6,    60,    64,    64,    64,    64,
      64,    64,    51,    57,     6,    46,    52,    55,    57,    46,
      29,    53,    57,    52,    46,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    37,    38,    39,    40,    41,    42,    43,    43,    44,
      45,    45,    46,    46,    46,    46,    46,    46,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    54,    55,    56,
      57,    58,    58,    59,    59,    60,    60,    61,    61,    61,
      61,    61,    61,    62,    63,    64,    64,    64,    65,    65,
      65,    65,    66,    66,    67,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     6,     0,     0,     0,     0,     2,     3,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,    10,     0,     0,     0,     8,    12,     0,     0,
       0,     1,     3,     1,     3,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     4,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 50 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "program -> Identifier ( ) function_body\n"); ) }
#line 1449 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 53 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "function_body -> { variable_declarations statements }\n"); ) }
#line 1455 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 56 "lotus.y" /* yacc.c:1646  */
    { IDENT(1, fprintf(stdout, ".data\n"); ) }
#line 1461 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 59 "lotus.y" /* yacc.c:1646  */
    { 
        IDENT(1, fprintf(stdout, ".text\n"); )
        IDENT(0, fprintf(stdout, "main:\n"); )
    }
#line 1470 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 65 "lotus.y" /* yacc.c:1646  */
    {
        IDENT(1, fprintf(stdout, "li"); )
        IDENT(1, fprintf(stdout, "$v0, 10"); )
        IDENT(1, fprintf(stdout, "# terminate program\n"); )
        IDENT(1, fprintf(stdout, "syscall\n"); )
    }
#line 1481 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 73 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "variable_declarations -> empty\n"); ) }
#line 1487 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 74 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "variable_declarations -> variable_declarations variable_declaration\n"); ) }
#line 1493 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 77 "lotus.y" /* yacc.c:1646  */
    { 
        DBG( fprintf(stdout, "variable_declaration -> int Identifier ;\n"); )
        IDENT( 0, fprintf(stdout, "%s:", (yyvsp[-1].string)); )
        IDENT( 1, fprintf(stdout, ".word"); )
        IDENT( 1, fprintf(stdout, "0 # int %s", (yyvsp[-1].string)); )  // int IDENTIFIER
        IDENT( 0, fprintf(stdout, "\n"); )
    }
#line 1505 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 86 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "statements -> empty\n"); ) }
#line 1511 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 87 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "statements -> statements statement\n"); ) }
#line 1517 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 90 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "statement -> assignment_statement\n"); ) }
#line 1523 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 91 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "statement -> compound_statement\n"); ) }
#line 1529 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 92 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "statement -> if_statement\n"); ) }
#line 1535 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 93 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "statement -> while_statement\n"); ) }
#line 1541 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 94 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "statement -> exit_statement\n") ) }
#line 1547 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 95 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "statement -> read_statement\n"); ) }
#line 1553 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 96 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "statement -> write_statement\n"); ) }
#line 1559 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "lotus.y" /* yacc.c:1646  */
    { 
        DBG( fprintf(stdout, "read_statement -> read Identifier ;\n"); )
        IDENT( 1, fprintf(stdout, "li"); )
        IDENT( 1, fprintf(stdout, "$v0, 5\n"); ) // read
        IDENT( 1, fprintf(stdout, "syscall\n"); )
        IDENT( 1, fprintf(stdout, "la"); )
        IDENT( 1, fprintf(stdout, "$t0, %s\n", (yyvsp[-1].string)); )
        IDENT( 1, fprintf(stdout, "sw"); )
        IDENT( 1, fprintf(stdout, "$v0, 0($t0)\n"); ) // read variable
    }
#line 1574 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 111 "lotus.y" /* yacc.c:1646  */
    { 
        DBG( fprintf(stdout, "write_statement -> write arith_expression ;\n"); )
        IDENT(1, fprintf(stdout, "move"); )
        IDENT(1, fprintf(stdout, "$a0, $t0\n"); )
        IDENT(1, fprintf(stdout, "li"); )
        IDENT(1, fprintf(stdout, "$v0, 1\n"); )
        IDENT(1, fprintf(stdout, "syscall\n"))
    }
#line 1587 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 121 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "exit_statement -> exit ;\n"); ) }
#line 1593 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 124 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "while_statement -> while ( bool_expression ) statement\n"); ) }
#line 1599 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 127 "lotus.y" /* yacc.c:1646  */
    {
        if(strcmp((yyvsp[0].string), "<") == 0) { IDENT( 1, fprintf(stdout, "blt"); ) }
        else if(strcmp((yyvsp[0].string), ">") == 0) { IDENT( 1, fprintf(stdout, "bgt"); ) }
        
        IDENT( 1, fprintf(stdout, "$t0, $t1, W%d\n", whileCount); )
        IDENT( 1, fprintf(stdout, "b"); )
        IDENT( 1, fprintf(stdout, "W%d\n", whileCount+1); )
    }
#line 1612 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 137 "lotus.y" /* yacc.c:1646  */
    {
        IDENT( 0, fprintf(stdout, "W%d:\n", whileCount); )
        whileCount++;
        registerCount=0;
    }
#line 1622 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 144 "lotus.y" /* yacc.c:1646  */
    {
        IDENT( 1, fprintf(stdout, "b"); )
        IDENT( 1, fprintf(stdout, "W%d\n", whileCount - 2); )
    }
#line 1631 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 150 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "if_statement -> if ( bool_expression ) statement\n"); ) }
#line 1637 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 151 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "if_statement -> if ( bool_expression ) statement else statement\n"); ) }
#line 1643 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 154 "lotus.y" /* yacc.c:1646  */
    {
        IDENT( 1, fprintf(stdout, "b"); )
        IDENT( 1, fprintf(stdout, "L%d\n", ifCount+1); )
    }
#line 1652 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 160 "lotus.y" /* yacc.c:1646  */
    {
        if(strcmp((yyvsp[0].string), "<") == 0) { IDENT( 1, fprintf(stdout, "blt"); ) }
        else if(strcmp((yyvsp[0].string), ">") == 0) { IDENT( 1, fprintf(stdout, "bgt"); ) }
        
        IDENT( 1, fprintf(stdout, "$t0, $t1, L%d\n", ifCount); )
        IDENT( 1, fprintf(stdout, "b"); )
        IDENT( 1, fprintf(stdout, "L%d\n", ifCount+1); )
    }
#line 1665 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 170 "lotus.y" /* yacc.c:1646  */
    {
        IDENT( 0, fprintf(stdout, "L%d:\n", ifCount); ) // new label
        ifCount++;
        registerCount=0;
    }
#line 1675 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 177 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_expression -> bool_term\n"); ) }
#line 1681 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 178 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_expression -> bool_expression or bool_term\n"); ) }
#line 1687 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 181 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_term -> bool_factor\n"); ) }
#line 1693 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 182 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_term -> bool_term && bool_factor\n"); ) }
#line 1699 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 185 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_factor -> bool_primary\n"); ) }
#line 1705 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 186 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_factor -> ! bool_primary\n"); ) }
#line 1711 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 189 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_primary -> arith_expression == arith_expression\n"); ) }
#line 1717 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 190 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_primary -> arith_expression != arith_expression\n"); ) }
#line 1723 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 191 "lotus.y" /* yacc.c:1646  */
    { 
            DBG( fprintf(stdout, "bool_primary -> arith_expression > arith_expression\n"); )
            int absVal=abs( (yyvsp[0].integer) );
            (yyval.string) = (yyvsp[-1].string);
        }
#line 1733 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 196 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_primary -> arith_expression >= arith_expression\n"); ) }
#line 1739 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 197 "lotus.y" /* yacc.c:1646  */
    { 
            DBG( fprintf(stdout, "bool_primary -> arith_expression < arith_expression\n"); )
            int absVal=abs( (yyvsp[0].integer) );
            (yyval.string) = (yyvsp[-1].string);
        }
#line 1749 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 202 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "bool_primary -> arith_expression <= arith_expression\n"); ) }
#line 1755 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 205 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "compound_statement -> { statements }\n"); ) }
#line 1761 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 208 "lotus.y" /* yacc.c:1646  */
    { 
        DBG( fprintf(stdout, "assignment_statement -> Identifier = arith_expression ;\n") )
        IDENT( 1, fprintf(stdout, "la"); )
        IDENT( 1, fprintf(stdout, "$t1, %s\n", (yyvsp[-3].string)); )
        IDENT( 1, fprintf(stdout, "sw"); )
        IDENT( 1, fprintf(stdout, "$t0, 0($t1)\n"); )
    }
#line 1773 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 217 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "arith_expression -> arith_term\n"); ) }
#line 1779 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 218 "lotus.y" /* yacc.c:1646  */
    { 
            DBG( fprintf(stdout, "arith_expression -> arith_expression + arith_term\n"); )
            IDENT( 1, fprintf(stdout, "add"); )
            IDENT( 1, fprintf(stdout, "$t0, $t0, $t1\n"); )
            registerCount=0;
        }
#line 1790 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 224 "lotus.y" /* yacc.c:1646  */
    { 
            DBG( fprintf(stdout, "arith_expression -> arith_expression - arith_term\n"); )
            IDENT( 1, fprintf(stdout, "sub"); )
            IDENT( 1, fprintf(stdout, "$t0, $t0, $t1\n"); )
            registerCount=0;
        }
#line 1801 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 232 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "arith_term -> arith_factor\n"); ) }
#line 1807 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 233 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "arith_term -> arith_term * arith_factor\n"); ) }
#line 1813 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 234 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "arith_term -> arith_term / arith_factor\n"); ) }
#line 1819 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 235 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "arith_term -> arith_term % arith_factor\n"); ) }
#line 1825 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 238 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "arith_factor -> arith_primary\n"); ) }
#line 1831 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 239 "lotus.y" /* yacc.c:1646  */
    { 
        DBG( fprintf(stdout, "arith_factor -> - arith_primary\n"); )
        IDENT( 1, fprintf(stdout, "neg");)
        IDENT( 1, fprintf(stdout, "$t%d, $t%d\n", registerCount-1, registerCount-1); )
        (yyval.integer) = - (yyvsp[0].integer);
    }
#line 1842 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 247 "lotus.y" /* yacc.c:1646  */
    { 
        DBG( fprintf(stdout, "arith_primary -> Integer\n"); )
        IDENT( 1, fprintf(stdout, "li"); )
        IDENT( 1, fprintf(stdout, "$t%d, %d\n", registerCount++, (yyvsp[0].integer)); )
    }
#line 1852 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 252 "lotus.y" /* yacc.c:1646  */
    { 
        DBG( fprintf(stdout, "arith_primary -> Identifier\n"); )
        IDENT( 1, fprintf(stdout, "la"); )
        IDENT( 1, fprintf(stdout, "$t%d, %s\n", registerCount, (yyvsp[0].string)); )
        IDENT( 1, fprintf(stdout, "lw"); )
        IDENT( 1, fprintf(stdout, "$t%d, 0($t%d)\n", registerCount, registerCount); )
        registerCount++;
    }
#line 1865 "lotus.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 260 "lotus.y" /* yacc.c:1646  */
    { DBG( fprintf(stdout, "arith_primary -> ( arith_expression )\n"); ) }
#line 1871 "lotus.tab.c" /* yacc.c:1646  */
    break;


#line 1875 "lotus.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 262 "lotus.y" /* yacc.c:1906  */

extern FILE *yyin;
main(int argc, char **argv) {
    if(argc==2 && strcmp(argv[1], "-p")==0)
        debug=1;
    do {
        yyparse();
    } while(!feof(yyin));
}
