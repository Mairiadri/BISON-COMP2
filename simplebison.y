/* 
a calculator that understands +, -, *, /, and ^ (power) and gives them the correct precedence, understanding brackets. 
*/

%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYSTYPE char*
void truncatehash(char* str);
extern int yylex (void);
int yyerror(char *);
%}

%token WHITE_SPACES INTEGER KEYWORD IDENTIFIER FLOAT COMMENT STRING OPERATOR DELIMITER ERROR END
%token END PLUS MINUS MULTIPLY DIV MOD DOUBLE_EQUAL NOT_EQUAL SMALL_EQUAL BIG_EQUAL SMALL
%token BIG AND BIT_OR OR PLUS_EQUAL MULT_EQUAL DIV_EQUAL NOT
%token DOUBLE_PLUS DOUBLE_MINUS BIT_AND EQUAL 

%left PLUS MINUS
%left TIMES DIVIDE
%left NEG

%start Input
%%

Input:
    
     | Input Line
;

Line:
     END
     | Expression END { printf("Result: %s\n", $1); }
     | Comments   END { printf("Comment: %s\n", $1);} 
     | Keywords   END { printf("Keyword: %s\n", $1);}
     | Strings    END { printf("Strings: %s\n", $1);}
     | Error      END { yyerror($1);                }
     | Variable   END { printf("Variable: %s\n", $1);}
;

Comments:
     COMMENT { (void)truncatehash($1); $$=$1; }
;

Keywords:
     KEYWORD {$$=$1;}
;

Strings:
     STRING {$$=$1;}
     | Strings Expression 
;

Error:
     ERROR  { $$=$1; }  
;

Variable:
     IDENTIFIER {$$=$1;}
     | Variable Expression 
     | Variable Expression DELIMITER
     
;

Expression:
| Expression PLUS Expression { $$=$1+$3; }
| Expression MINUS Expression { $$=$1-$3; }
| Expression MULTIPLY Expression { $$=$1*$3; }
| Expression DIV Expression { $$=$1/$3; }
| MINUS Expression %prec NEG { $$=-$2; }
| Expression MOD Expression {$$=$1%$3;}
| Expression DOUBLE_EQUAL Expression {$$=$1==$3;}
| Expression NOT_EQUAL Expression {$$=$1!=$3;}
| Expression SMALL_EQUAL Expression {$$=$1<=$3;}
| Expression BIG_EQUAL Expression {$$=$1>=$3;}
| Expression SMALL Expression {$$=$1<$3;}
| Expression BIG Expression {$$=$1>$3;}
| Expression AND Expression {$$=$1&&$3;}
| Expression BIT_OR Expression {$$=$1|$3;}
| Expression OR Expression {$$=$1||$3;}
| Expression PLUS_EQUAL Expression {$$=$1+=$3;}
| Expression MULT_EQUAL Expression {$$=$1*=$3;}
| Expression DIV_EQUAL Expression {$$=$1/=$3;}
| Expression NOT Expression {$$=$1!$3;}
| DOUBLE_PLUS Expression {$$=++$1;}
| Expression DOUBLE_PLUS{$$=$1++;}
| Expression DOUBLE_MINUS{$$=$1--;}
| DOUBLE_MINUS Expression  {$$=--$1;}
| Expression BIT_AND Expression {$$=$1&$3;}
| Expression EQUAL Expression {$$=$1=$3;}
| NOT Expression{$$=!$2}
; 

%%

void truncatehash(char* str) {
     size_t len = strlen(str);
     memmove(str, str + 1, len - 1);
     memset(str+len-1, 0, 1);
}

int yyerror(char *s) {
  printf("%s\n", s);
}

int main() {
  if (yyparse()==0)
     fprintf(stderr, "Successful parsing.\n");
  else
     fprintf(stderr, "error found.\n");
}
