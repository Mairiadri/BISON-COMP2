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
int yyparse();
int yyerror(char *);
%}

%token WHITE_SPACES INTEGER KEYWORD IDENTIFIER FLOAT COMMENT STRING OPERATOR DELIMITER ERROR
%token END PLUS MINUS MULTIPLY DIV MOD DOUBLE_EQUAL NOT_EQUAL SMALL_EQUAL BIG_EQUAL 
%token PLUS_EQUAL MULT_EQUAL DIV_EQUAL
%token DOUBLE_PLUS DOUBLE_MINUS EQUAL 

%left PLUS MINUS
%left MULTIPLY DIVIDE
%left NEG

%start Input
%%

Input:
    
     | Input Line
;

Line:
     END
     | Expression END { printf("Result: %s\n", $1); }
     | Comments   END { printf("Comment: %s\n",$1); } 
     | Keywords   END { printf("Keyword: %s\n",$1); }
     | Strings    END { printf("Strings: %s\n",$1); }
     | Error      END { yyerror($1);                }
     | Variable   END { printf("Variable: %s\n", $1);}
;

Comments:
     COMMENT {  $$=$1; }
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
| Expression PLUS Expression { gcvt(atof($1)+atof($3), 10, $$); }
| Expression MINUS Expression{ gcvt(atof($1)-atof($3), 10, $$); }
| Expression MULTIPLY Expression { gcvt(atof($1)*atof($3), 10, $$); }
| Expression DIV Expression { gcvt(atof($1)/atof($3), 10, $$); }
| MINUS Expression %prec NEG { gcvt(-atof($2), 10, $$); }
| Expression MOD Expression {gcvt(fmod(atof($1), atof($3)), 10, $$);}
| Expression DOUBLE_EQUAL Expression {gcvt(atof($1) == atof($3), 10, $$);}
| Expression NOT_EQUAL Expression {gcvt(atof($1) != atof($3), 10, $$);}
| Expression SMALL_EQUAL Expression {gcvt(atof($1)<=atof($3), 10, $$);}
| Expression BIG_EQUAL Expression {gcvt(atof($1)>=atof($3), 10, $$);}
| Expression "<" Expression {gcvt(atof($1)<atof($3), 10, $$);}
| Expression ">" Expression {gcvt(atof($1)>atof($3), 10, $$);}
| Expression "&&" Expression {gcvt(atof($1)&&atof($3), 10, $$);}
| Expression "|" Expression {gcvt((int)atof($1) | (int)atof($3), 10, $$);}
| Expression "||" Expression {gcvt(atof($1)||atof($3), 10, $$);}
| Expression PLUS_EQUAL Expression {gcvt(atof($1) + atof($3), 10, $$);}
| Expression MULT_EQUAL Expression {gcvt(atof($1) * atof($3), 10, $$);}
| Expression DIV_EQUAL Expression {gcvt(atof($1) / atof($3), 10, $$);}
| Expression "!" Expression {gcvt(!atof($1), 10, $$);}
| DOUBLE_PLUS Expression {gcvt(atof(++$1), 10, $$);}
| Expression DOUBLE_PLUS{gcvt(atof($1++), 10, $$);}
| Expression DOUBLE_MINUS{ gcvt(atof($1--), 10, $$);}
| DOUBLE_MINUS Expression  {gcvt(atof(--$1), 10, $$);}
| Expression "&" Expression {gcvt((int)atof($1) & (int)atof($3), 10, $$);}
| Expression EQUAL Expression {
    double result = atof($3);
    gcvt(result, 10, $$);
}
| "!" Expression{ gcvt(!atof($2), 10, $$);}
| INTEGER { gcvt(atoi($1), 10, $$); }
| FLOAT   { gcvt(atof($1), 10, $$); }
; 

%%

int yyerror(char *s) {
  printf("%s\n", s);
}

int main() {
  if (yyparse()==0)
     fprintf(stderr, "Successful parsing.\n");
  else
     fprintf(stderr, "error found.\n");
}
