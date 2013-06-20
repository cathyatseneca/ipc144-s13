#include<stdio.h>
#include<ctype.h>

void clear(){
  while(getchar()!='\n');
}
int main(void){

   char input;

   printf("Please enter an alphabetic character");
   scanf("%c",&input);
//   while(!(input >= 'a' && input <='z' || input >='A' && input <='Z')){
   while(!isalpha(input)){
     clear();
     printf("Please enter an alphabetic character");
     scanf("%c",&input);
   }     
   printf("you entered %c\n",input);
}
