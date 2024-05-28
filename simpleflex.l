/* Onoma arxeiou:       simple-flex-code.l
   Perigrafh:           Ypodeigma gia anaptyksh lektikou analyth me xrhsh tou ergaleiou Flex
   Syggrafeas:          Ergasthrio Metaglwttistwn, Tmhma Mhxanikwn Plhroforikhs kai Ypologistwn,
                        Panepisthmio Dytikhs Attikhs
   Sxolia:              To paron programma ylopoiei (me th xrhsh flex) enan aplo lektiko analyth
			pou anagnwrizei kena (space kai tab) kai akeraious (dekadikou systhmatos
			mono!) gia th glwssa Uni-C enw diaxeirizetai tous eidikous xarakthres
			neas grammhs '\n' (new line) kai 'EOF' (end of file). Yparxoun anafores
			gia thn anagnwrish metablhtwn, me ton pragmatiko kwdika na exei antikatastathei
			apo to lektiko FILL ME wste na symplhrwthei apo esas. Proairetika o lektikos
			analyths dexetai orismata arxeiwn gia eisodo kai eksodo.
   Odhgies ekteleshs:   Dinete "make" xwris ta eisagwgika ston trexonta katalogo. Enallaktika:
			flex -o simple-flex-code.c simple-flex-code.l
                        gcc -o simple-flex-code simple-flex-code.c
                        ./simple-flex-code
*/

/* H anagnwsh periorizetai se ena mono arxeio kai termatizei sto prwto EOF */
%option noyywrap 

/* Kwdikas C gia orismo twn apaitoumenwn header files kai twn metablhtwn.
   Otidhpote anamesa sta %{ kai %} metaferetai autousio sto arxeio C pou
   tha dhmiourghsei to Flex. */

%{
#define YYSTYPE char*
#include "simplebison.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
%}


/* Onomata kai antistoixoi orismoi (ypo morfh kanonikhs ekfrashs).
   Meta apo auto, mporei na ginei xrhsh twn onomatwn (aristera) anti twn,
   synhthws idiaiterws makroskelwn kai dysnohtwn, kanonikwn ekfrasewn */

DELIMITER       [;]
IDENTIFIER      [a-zA-Z_][a-zA-Z0-9_]{0,31}
KEYWORD         (break|case|func|const|continue|do|double|else|float|for|if|int|long|return|short|sizeof|struct|switch|void|while)
STRING          \"[^\"]*\"
INTEGER         -*(0|0[xX][0-9a-fA-F]+|0[0-7]+|[1-9][0-9]*)
FLOAT           -?([0-9])+\.[0-9]*([eE][-+]?([0-9])+)?
COMMENT         \/\/.*|(\/\*[^*]*\*+([^/*][^*]*\*+)*\/)
WHITE_SPACES    [ \t]+
ERROR           [^;=\+\-\*/%\(\)\[\]\{\}\t\n ]+

/* Gia kathe pattern (aristera) pou tairiazei ekteleitai o antistoixos
   kwdikas mesa sta agkistra. H entolh return epitrepei thn epistrofh
   mias arithmhtikhs timhs mesw ths synarthshs yylex() */

%%

{DELIMITER}     { yylval=yytext; return DELIMITER; }   /*1.3 Λεκτικές μονάδες (tokens)*/
{KEYWORD}       { yylval=yytext; return KEYWORD;   }   /*1.3.2 Λέξεις κλειδιά         */
{IDENTIFIER}    { yylval=yytext; return IDENTIFIER;}   /*1.3.1 Αναγνωριστικά (ονόματα)*/
{STRING}        { yylval=yytext; return STRING;    }   /*1.3.3 Λεκτικά κυριολεκτικά   */
{INTEGER}       { yylval=yytext; return INTEGER;   }   /*1.3.4.1 Ακέραιοι             */
{FLOAT}         { yylval=yytext; return FLOAT;     }   /*1.3.4.2 Αριθμοί κινούμενης υποδιαστολής*/
{OPERATOR}      { yylval=yytext; return OPERATOR;  }   /*1.3.5 Τελεστές               */
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
"<="            return SMALL_EQUAL
">="            return BIG_EQUAL;
"<"             return SMALL;
">"             return BIG;
"&&"            return AND;
"|"             return BIT_OR;
"||"            return OR;
"+="            return PLUS_EQUAL
"*="            return MULT_EQUAL
"/="            return DIV_EQUAL
"!"             return NOT;
"++"            return DOUBLE_PLUS;
"--"            return DOUBLE_MINUS;
"&"             return BIT_AND;
"="             return EQUAL;
%%