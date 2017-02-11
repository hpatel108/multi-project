#include <stdio.h>
#include "myscanner.h"

extern int yylex();
extern int yylineno;
extern char* yytext;
extern int number_lines;


int main(){
  int ntoken;

  ntoken = yylex();
  while (ntoken){

      printf("%s\t",yytext);
      if (ntoken==1){
          printf("int -Keyword\n");
      }
      else if (ntoken==2){
          printf("float -Keyword\n");
      }

      else if (ntoken==3){
          printf("Constant\n");
      }

      else if (ntoken==4){
          printf("if -Keyword\n");
      }

      else if (ntoken==5){
          printf("else -Keyword\n");
      }

      else if (ntoken==6){
          printf("Identifier\n");
      }

      else if (ntoken==7){
          printf("Unrecognized character: \n");
      }
      else if (ntoken==8){
          printf("Operator \n");
      }

      else if (ntoken==9){
          printf("comma \n");
      }
      else if(ntoken==10)
      {
        
      }
      ntoken = yylex();
  }

    return 0;

}
