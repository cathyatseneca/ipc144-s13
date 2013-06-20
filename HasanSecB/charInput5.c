#include<stdio.h>
#include<ctype.h>

void clear(){
  while(getchar()!='\n');
}
int main(void){

   char input,input2;

   printf("Please enter a digit:");
   scanf(" %c",&input);
   while(!isdigit(input)){
     clear();
     printf("Please enter a digit:");
     scanf(" %c",&input);
   }     

   printf("Please enter another digit");
   scanf(" %c",&input2);
   while(!isdigit(input2)){
     clear();
     printf("Please enter another digit");
     scanf(" %c",&input2);
   }     
  
   printf("%c + %c = %d\n",input,input2,(input-'0')+(input2-'0'));
}
