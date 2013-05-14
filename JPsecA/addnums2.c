/*this program will ask the user to enter 2 numbers.
  It will then print out the sum of those numbers*/

#include <stdio.h>

int main(void){

    int number;
    int secondNumber;

    /*ask user to enter a number*/
    printf("Please enter a number: ");
    /*read the number*/
    scanf("%d",&number);

    /*ask user to enter another number*/
    printf("Please enter another number: ");
    /*read the other number*/
    scanf("%d",&secondNumber);

   /*print out the sum*/
   printf("The sum of %d and %d is %d\n",number,secondNumber,number+secondNumber);
   return 0;
}
