/*write a program that will ask the user for a positive whole number
  between 1 and 70 inclusive.

  This program will print out a line of stars equal to the number
  entered.
  
  If the user entered an invalid value, your program should ask them
  to reenter the value
*/
#include <stdio.h>

/*this function is given 2 values representing the minimum and maximum of 
a range of values allowed.  It will read a number from the user and ensure
that it is in range.  It will return that number*/

int getDataInRange(int min, int max){
  int input;
  printf("please enter a number (%d to %d): ",min,max);
  scanf("%d",&input);
  while(input < min || input > max){
     printf("error\n");
     printf("please enter a number (%d to %d): ",min,max);
     scanf("%d",&input);
   }
   return input;
}

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
