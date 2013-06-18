#include<stdio.h>
#include<ctype.h>

int main(void){
  char input;  /*variable to store input*/
  char input2;
 
  printf("enter a character: ");
  scanf(" %c",&input);
  
  printf("character is: %c\n",input);
/*
  if((input >= 'a' && input <='z') || (input >='A' && input <='Z')){
*/
  if(isalpha(input)){
    printf("%c is alphabetic\n",input);
  }
  else{
    printf("%c is not alphabetic\n",input);
  }

}
