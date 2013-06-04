/*write a program that will ask the user for a positive whole number
  between 1 and 70 inclusive.

  This program will print out a line of stars equal to the number
  entered.
  
  If the user entered an invalid value, your program should ask them
  to reenter the value
*/
#include <stdio.h>
#include "myutils.h"

int main(void){
  int input;
  int numPrinted;  //number of stars printed so far
  input = getDataInRange(5,380);
   for(numPrinted=0;numPrinted < input;numPrinted++){
     /*print 1 star*/
     printf("*");
   }   
   printf("\n");
   return 0;
}
