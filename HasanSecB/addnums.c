/*write a program that will ask the user to enter 2 numbers.  The program 
will then add these up and print out the result*/

#include <stdio.h>

int main(void){
  int firstNumber;
  int secondNumber;
  int sum;

  /*ask user to enter a number*/
  printf("Enter a number: ");
  scanf("%d",&firstNumber);
  /*ask user to enter another number*/
  printf("Enter another number: ");
  scanf("%d",&secondNumber);
  /*add the up*/
  sum = firstNumber + secondNumber;
  /*print result*/
  printf("%d + %d = %d\n", firstNumber, secondNumber, sum);
  return 0;
}
