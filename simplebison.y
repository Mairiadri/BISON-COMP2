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


%left PLUS MINUS
%left TIMES DIVIDE
%left NEG
%right POWER

%start Input
%%

Input:
    
     | Input Line
;

Line:
     END
     | Expression END { printf("Result: %s\n", $1); }
     | Comments   END { printf("Comment: %s\n", $1);} 
;

Comments:
     COMMENT { (void)truncatehash($1); $$=$1; }


Expression:
| Expression PLUS Expression { $$=$1+$3; }
| Expression MINUS Expression { $$=$1-$3; }
| Expression TIMES Expression { $$=$1*$3; }
| Expression DIVIDE Expression { $$=$1/$3; }
| MINUS Expression %prec NEG { $$=-$2; }
| Expression POWER Expression { $$=pow($1,$3); }
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
