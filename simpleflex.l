/*
Flex file for a full calculator
*/

%{
#define YYSTYPE char*
#include "simplebison.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
%}

INTCONST        (0|[1-9][0-9]*|0[0-7]*|0[xX][0-9a-fA-F]+)
FLOAT           -?([0-9])+(\.[0-9]*)?([eE][-+]?([0-9])+)?
COMMENT         \/\/.*|(\/\*[^*]*\*+([^/*][^*]*\*+)*\/)
KEYWORD         (break|case|func|const|continue|do|else|for|if|return|sizeof|struct|switch|void|while)
SCAN            (scan)
COMPARE         (cmp)
DOUBLE          (double)
INT             (int)
LONG            (long)
SHORT           (short)
FLOATI          (float)
LEN             (len)
PRINTI           (print)
STRING          \"[^\"]*\"
IDENTIFIER      [a-zA-Z_][a-zA-Z0-9_]{0,31}
ERROR           ^[\\?\\.\\/\\\\\\$\\%\\`\\~\\:\\>\\<\\@\\,| Α-Ωα-ω]

%%

[ \t]+          {                                       }
{INTCONST}      { yylval=yytext;    return INTCONST;    } /*1.3.4.1 Ακέραιοι*/
{FLOAT}         { yylval=yytext;    return FLOAT;       } /*1.3.4.2 Αριθμοί κινούμενης υποδιαστολής*/
{COMMENT}       { yylval=yytext;    return COMMENT;     } /*1.4 Σχόλια*/
{KEYWORD}       { yylval=yytext;    return KEYWORD;     } /*1.3.2 Λέξεις κλειδιά*/
{SCAN}          { yylval=yytext;    return SCAN;     } /*scan*/
{COMPARE}       { yylval=yytext;    return COMPARE;     }
{DOUBLE}        { yylval=yytext;    return DOUBLE;      }
{INT}           { yylval=yytext;    return INT;         }
{LONG}          { yylval=yytext;    return LONG;         }
{SHORT}         { yylval=yytext;    return SHORT;       }
{FLOATI}        { yylval=yytext;    return FLOATI;        }
{LEN}           { yylval=yytext;    return LEN;         }
{PRINTI}        { yylval=yytext;    return PRINTI;         }
{STRING}        { yylval=(yytext);  return STRING;      } /*1.3.3 Λεκτικά κυριολεκτικά*/

{IDENTIFIER}    { yylval=(yytext);  return IDENTIFIER;  } /*1.3.1 Αναγνωριστικά (ονόματα)*/
{ERROR}         { yylval=(yytext);  return ERROR;       }


"+"     return PLUS;
"-"     return MINUS;
"*"     return MULTIPLY;
"/"     return DIV;
"\n"    return END;
"||"     return OR;
"&&"     return AND;
"!"     return NOT;
"%"     return MOD;
">"     return BIGGER;
"<"     return SMALLER;
"!="    return NOT_EQUAL;
"<="    return SMALL_EQUAL;
">="    return BIG_EQUAL;
";"     return DELIMITER;
"=="    return DOUBLE_EQUAL;
"+="    return PLUS_EQUAL; 
"-="    return MINUS_EQUAL;
"*="    return MULT_EQUAL;
"/="    return DIV_EQUAL;
"++"    return DOUBLE_PLUS;
"--"    return DOUBLE_MINUS;
"&"     return BIT_AND;
","     return SEM;
"("     return LEFT;
")"     return RIGHT;
"["     return LEFTA;
"]"     return RIGHTA;
%%
