#include<stdio.h>

void clear(){
  while(getchar()!='\n');
}
/*this function accepts a character and if it is upper case alphabetic, it
  will return the lowercase version. Otherwise it will return the original
  character*/
char mytolower(char ch){
  char rc=ch;

  if(rc>='A' && rc<='Z'){
    rc='a'+(ch-'A');
  }

  return rc;
}
int main(void){

   char input;

   printf("Please a b or c: ");
   scanf("%c",&input);
   while(mytolower(input)!='a' && mytolower(input)!='b'&&mytolower(input)!='c'){
     clear();
     printf("Please a b or c: ");
     scanf("%c",&input);
   }     
   printf("you entered %c\n",mytolower(input));
}
