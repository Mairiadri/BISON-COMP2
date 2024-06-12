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

#ifndef YY_YY_SIMPLEBISON_TAB_H_INCLUDED
# define YY_YY_SIMPLEBISON_TAB_H_INCLUDED
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
    INTCONST = 258,                /* INTCONST  */
    FLOAT = 259,                   /* FLOAT  */
    COMMENT = 260,                 /* COMMENT  */
    SMALLER = 261,                 /* SMALLER  */
    BIGGER = 262,                  /* BIGGER  */
    MOD = 263,                     /* MOD  */
    KEYWORD = 264,                 /* KEYWORD  */
    DELIMITER = 265,               /* DELIMITER  */
    PLUS = 266,                    /* PLUS  */
    MINUS = 267,                   /* MINUS  */
    MULTIPLY = 268,                /* MULTIPLY  */
    DIV = 269,                     /* DIV  */
    EQUAL = 270,                   /* EQUAL  */
    BIG_EQUAL = 271,               /* BIG_EQUAL  */
    SMALL_EQUAL = 272,             /* SMALL_EQUAL  */
    NOT_EQUAL = 273,               /* NOT_EQUAL  */
    PLUS_EQUAL = 274,              /* PLUS_EQUAL  */
    MINUS_EQUAL = 275,             /* MINUS_EQUAL  */
    MULT_EQUAL = 276,              /* MULT_EQUAL  */
    DIV_EQUAL = 277,               /* DIV_EQUAL  */
    ERROR = 278,                   /* ERROR  */
    END = 279,                     /* END  */
    STRING = 280,                  /* STRING  */
    OR = 281,                      /* OR  */
    AND = 282,                     /* AND  */
    NOT = 283,                     /* NOT  */
    IDENTIFIER = 284,              /* IDENTIFIER  */
    DOUBLE_EQUAL = 285,            /* DOUBLE_EQUAL  */
    DOUBLE_PLUS = 286,             /* DOUBLE_PLUS  */
    DOUBLE_MINUS = 287,            /* DOUBLE_MINUS  */
    BIT_AND = 288,                 /* BIT_AND  */
    POWER = 289,                   /* POWER  */
    SEM = 290,                     /* SEM  */
    SCAN = 291,                    /* SCAN  */
    LEFT = 292,                    /* LEFT  */
    RIGHT = 293,                   /* RIGHT  */
    NEG = 294                      /* NEG  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_SIMPLEBISON_TAB_H_INCLUDED  */
