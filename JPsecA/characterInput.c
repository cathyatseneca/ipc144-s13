#include<stdio.h>


int main(void){
  char input;  /*variable to store input*/
  char input2;
 
  printf("enter a character: ");
  scanf(" %c",&input);
  printf("enter another character: ");
  scanf(" %c",&input2);
  
  printf("character 1 is: %c\n",input);
  printf("character 2 is: %c\n",input2);

  if(input > 'a' && input <'z'){
    printf("%c is alphabetic\n");
  }

}
