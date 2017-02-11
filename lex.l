%option noyywrap

%{
  // This is first stage
   #include "myscanner.h"

   int number_lines = 0;
%}

%%

[a-zA-Z][a-zA-Z0-9]*             return IDENTIFIER;

"+"|"-"|"*"|"/"|"="|">"|">="     return OPERATOR;

,                                 return COMMA;

int                              return INTERGER;

float                            return FLOAT;

else                             return ELSE;

if                               return IF;

[0-9]+                           return CONSTANTS;

\n                               return END;

[ \t]+                             ;

"{"[^}\n]*"}" 		            	    ;

.                                 return ERROR;

%%
