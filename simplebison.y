%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYSTYPE char*
void truncatehash(char* str);
extern int yylex(void);
int yyerror(char *);
%}

%token INTCONST FLOAT COMMENT SMALLER BIGGER MOD KEYWORD DELIMITER
%token PLUS MINUS MULTIPLY DIV EQUAL BIG_EQUAL SMALL_EQUAL NOT_EQUAL
%token PLUS_EQUAL MINUS_EQUAL MULT_EQUAL DIV_EQUAL ERROR END STRING OR AND NOT IDENTIFIER DOUBLE_EQUAL DOUBLE_PLUS DOUBLE_MINUS BIT_AND POWER SEM

%left PLUS MINUS
%left MULTIPLY DIV MOD
%right POWER
%left OR AND
%nonassoc EQUAL BIG_EQUAL SMALL_EQUAL NOT_EQUAL BIGGER SMALLER
%right NOT
%right NEG
%left '(' ')'

%start Input
%%

Input:
     | Input Line
;

Line:
     END
     | Expression END    { printf("Result: %s\n", $1); }
     | Comment END       { printf("COMMENT: %s\n", $1); }
     | Key END           { printf("KEYWORD: %s\n", $1); }
     | str END           { printf("Strings: %s\n", $1); }
     | var END           { printf("IDENTIFIER: %s\n", $1); }
     | err END           { yyerror($1);                  }
     | Expression SEM Expression END { yyerror("Unexpected comma in expression."); }
     | Expression SEM { yyerror("Unexpected comma in expression."); }
;

Comment:
     COMMENT { /*truncatehash($1);*/ $$=$1; }
;

Key:
     KEYWORD { $$=$1; }
;

str:
     STRING { $$=$1; }
     | str Expression
;

var:
     IDENTIFIER { $$=$1; }
     | var Expression DELIMITER
     | KEYWORD var DELIMITER
     | KEYWORD var Expression DELIMITER
;

err:
     ERROR { $$=$1; }
     | INTCONST var
     | IDENTIFIER DELIMITER
;

Expression:
     INTCONST       { $$ = $1; }
     | FLOAT        { $$ = $1; }
     | Expression PLUS Expression       {  gcvt(atof($1) + atof($3), 10, $$); }
     | Expression MINUS Expression      {  gcvt(atof($1) - atof($3), 10, $$); }
     | Expression MULTIPLY Expression   {  gcvt(atof($1) * atof($3), 10, $$); }
     | Expression DIV Expression        {  gcvt(atof($1) / atof($3), 10, $$); }
     | Expression MOD Expression        {  gcvt(fmod(atof($1), atof($3)), 10, $$); }
     | Expression POWER Expression      {  gcvt(pow(atof($1), atof($3)), 10, $$); }
     | MINUS Expression %prec NEG       {  gcvt(-atof($2), 10, $$); }
     | '(' Expression ')'               { $$ = $2; }
     | Expression BIGGER Expression     {  gcvt(atof($1) > atof($3), 10, $$); }
     | Expression SMALLER Expression    {  gcvt(atof($1) < atof($3), 10, $$); }
     | Expression DOUBLE_EQUAL Expression {  gcvt(atof($1) == atof($3), 10, $$); }
     | Expression NOT_EQUAL Expression  {  gcvt(atof($1) != atof($3), 10, $$); }
     | Expression SMALL_EQUAL Expression {  gcvt(atof($1) <= atof($3), 10, $$); }
     | Expression BIG_EQUAL Expression  {  gcvt(atof($1) >= atof($3), 10, $$); }
     | Expression OR Expression  {  gcvt(atof($1) || atof($3), 10, $$); }
     | Expression AND Expression  {  gcvt(atof($1) && atof($3), 10, $$); }
     | NOT Expression  {  gcvt(!atof($1), 10, $$); }
     | Expression PLUS_EQUAL Expression {  gcvt(atof($1) + atof($3), 10, $$); }
     | IDENTIFIER PLUS_EQUAL Expression DELIMITER{  gcvt(atof($1) + atof($3), 10, $$); }
     | Expression MINUS_EQUAL Expression {  gcvt(atof($1) - atof($3), 10, $$); }
     | IDENTIFIER MINUS_EQUAL Expression DELIMITER{  gcvt(atof($1) - atof($3), 10, $$); }
     | Expression MULT_EQUAL Expression {  gcvt(atof($1) * atof($3), 10, $$); }
     | IDENTIFIER MULT_EQUAL Expression DELIMITER{  gcvt(atof($1) * atof($3), 10, $$); }
     | Expression DIV_EQUAL Expression {  gcvt(atof($1) / atof($3), 10, $$); }
     | IDENTIFIER DIV_EQUAL Expression DELIMITER{  gcvt(atof($1) / atof($3), 10, $$); }
     | Expression DOUBLE_PLUS {  gcvt(atof($1) + 1, 10, $$); }
     | DOUBLE_PLUS Expression {  gcvt(atof($2) + 1, 10, $$); }
     | Expression DOUBLE_MINUS {  gcvt(atof($1) - 1, 10, $$); }
     | DOUBLE_MINUS Expression {  gcvt(atof($2) - 1, 10, $$); }
     | Expression BIT_AND Expression {  gcvt((int)atof($1) & (int)atof($3), 10, $$); }
;

%%

/*void truncatehash(char* str) {
     size_t len = strlen(str);
     memmove(str, str + 1, len - 1);
     memset(str+len-1, 0, 1);
}*/

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
