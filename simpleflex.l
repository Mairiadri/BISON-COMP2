%option noyywrap 
%{
#define YYSTYPE char*
#include "simplebison.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
%}


DELIMITER       [;]
IDENTIFIER      [a-zA-Z_][a-zA-Z0-9_]{0,31}
KEYWORD         (break|case|func|const|continue|do|double|else|float|for|if|int|long|return|short|sizeof|struct|switch|void|while)
STRING          \"[^\"]*\"
INTEGER         -*(0|0[xX][0-9a-fA-F]+|0[0-7]+|[1-9][0-9]*)
FLOAT           -?([0-9])+\.[0-9]*([eE][-+]?([0-9])+)?
COMMENT         \/\/.*|(\/\*[^*]*\*+([^/*][^*]*\*+)*\/)
WHITE_SPACES    [ \t]+
ERROR           [^;=\+\-\*/%\(\)\[\]\{\}\t\n ]+


%%

{DELIMITER}     { yylval=yytext; return DELIMITER; }   /*1.3 Λεκτικές μονάδες (tokens)*/
{KEYWORD}       { yylval=yytext; return KEYWORD;   }   /*1.3.2 Λέξεις κλειδιά         */
{IDENTIFIER}    { yylval=yytext; return IDENTIFIER;}   /*1.3.1 Αναγνωριστικά (ονόματα)*/
{STRING}        { yylval=yytext; return STRING;    }   /*1.3.3 Λεκτικά κυριολεκτικά   */
{INTEGER}       { yylval=yytext; return INTEGER;   }   /*1.3.4.1 Ακέραιοι             */
{FLOAT}         { yylval=yytext; return FLOAT;     }   /*1.3.4.2 Αριθμοί κινούμενης υποδιαστολής*/
{COMMENT}       { yylval=yytext; return COMMENT;   }   /*1.4 Σχολια                   */
{WHITE_SPACES}  { } /*1.5 White_spaces χαρακτήρες  */
{ERROR}         { yylval=yytext; return ERROR;}        /*Κατηγορία λαθών*/

"\n"            return END;
"+"             return PLUS;
"-"             return MINUS;
"*"             return MULTIPLY;
"/"             return DIV;
"%"             return MOD;
"=="            return DOUBLE_EQUAL;
"!="            return NOT_EQUAL;
"<="            return SMALL_EQUAL;
">="            return BIG_EQUAL;
"+="            return PLUS_EQUAL;
"*="            return MULT_EQUAL;
"/="            return DIV_EQUAL;
"++"            return DOUBLE_PLUS;
"--"            return DOUBLE_MINUS;
"="             return EQUAL;
%%