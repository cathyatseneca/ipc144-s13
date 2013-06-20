#include<stdio.h>

void clear(){
  while(getchar()!='\n');
}
int main(void){

   char input;

   printf("Please a b or c: ");
   scanf(" %c",&input);
   while(input!='a' && input!='b'&&input!='c'){
     clear();
     printf("Please a b or c: ");
     scanf(" %c",&input);
   }
   printf("you entered: %c\n",input);
}
