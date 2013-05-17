/*write a program that will ask the user to enter 2 numbers.  The program 
will then add these up and print out the result*/

#include <stdio.h>

int main(void){
  int firstNumber;
  int secondNumber;

  /*ask user to enter a number*/
  printf("Enter a number: ");
  scanf("%d",&firstNumber);
  /*ask user to enter another number*/
  printf("Enter another number: ");
  scanf("%d",&secondNumber);
  /*print result*/
  printf("%d + %d = %d\n", firstNumber, secondNumber, firstNumber+secondNumber);
  return 0;
}
