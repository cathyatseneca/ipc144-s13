/*write a program that will ask the user for a positive whole number
  between 1 and 70 inclusive.

  This program will print out a line of stars equal to the number
  entered.
  
  If the user entered an invalid value, your program should ask them
  to reenter the value
*/

#include <stdio.h>

int main(void){
  int input;
  int numPrinted;  //number of stars printed so far
  int keepGoing;

   do{
     /*enter a number*/
     printf("please enter a number (1 to 70): ");
     scanf("%d",&input);

    /*recall test for range of x to y is done as (var >= x && var <=y)
    /*  while(!(input >= 1 && input <= 70)){*/
     while(input < 1 || input > 70){
       /*give error message*/
       printf("invalid, please enter value between 1 and 70\n"); 
       /*enter a number*/
       printf("please enter a number (1 to 70): ");
       scanf("%d",&input);
     }
     for(numPrinted=0;numPrinted < input;numPrinted++){
       /*print 1 star*/
        printf("*");
     }   
     printf("\n");
     printf("Want to do it again? (hit 0 to end, any other value to continue): ");
     scanf("%d",&keepGoing);
   }while(keepGoing);
   return 0;
}
