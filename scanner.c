#include <stdio.h>
#include "scanner.h"

extern int yylex();
extern int yylineno;
extern char* yytext;
extern int number_lines;


int main(){
  int tokenn;

  tokenn = yylex();
  while (tokenn){

      printf("%s\t",yytext);
      if (tokenn==1){
          printf("Keyword\n");
      }
      else if (tokenn==2){
          printf("Keyword\n");
      }

      else if (tokenn==3){
          printf("Constant\n");
      }

      else if (tokenn==4){
          printf("Keyword\n");
      }

      else if (tokenn==5){
          printf("Keyword\n");
      }

      else if (tokenn==6){
          printf("Identifier\n");
      }

      else if (tokenn==7){
          printf("Unrecognized character: \n");
      }
      else if (tokenn==8){
          printf("Operator \n");
      }

      else if (tokenn==9){
          printf("comma \n");
      }
      else if(tokenn==10)
      {
        printf("Separators  \n");
      }
      tokenn = yylex();
  }

    return 0;

}
