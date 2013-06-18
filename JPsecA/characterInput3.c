#include<stdio.h>
#include<ctype.h>

int main(void){
  char input;  /*variable to store input*/
  char input2;
 
  printf("enter a numeric character: ");
  scanf(" %c",&input);
  printf("enter another numeric character: ");
  scanf(" %c",&input2);
  
  printf("%c + %c = %d\n",input,input2,(input-'0')+(input2-'0'));
}
