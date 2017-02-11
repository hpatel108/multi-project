%option noyywrap

%{
   #include "scanner.h"

   int number_lines = 0;
%}

%%



"+"|"-"|"*"|"/"|"="|">"|">="     return OPER;

,                                 return COMA;

Number                            return KEY;

Matrix                            return MAT;

begin                              return KEY;

end								return KEY;
zerox                           return KEY;

else                             return ELSE;

if                               return IF;

[a-zA-Z][a-zA-Z0-9]*             return IDENTI;

[0-9]+                           return CONST;

\n                               ;

[ \t]+                             ;

"{"[^}\n]*"}" 		            	    ;

"("|")"|";"|","|"["|"]"          return SEP;

.                                 return ERROR;

%%
