#include<stdio.h>
#include<ctype.h>

void clear(){
  while(getchar()!='\n');
}
int main(void){

   char input;

   printf("Please a b or c: ");
   scanf("%c",&input);
   while(tolower(input)!='a' && tolower(input)!='b'&&tolower(input)!='c'){
     clear();
     printf("Please a b or c: ");
     scanf("%c",&input);
   }     
   printf("you entered %c\n",input);
}
