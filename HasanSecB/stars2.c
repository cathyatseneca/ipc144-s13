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
   int numPrinted;  //counter for how many have been printed so far
   /*enter a value*/
   printf("please enter a value (1 to 70): ");
   scanf("%d",&input);
   /*alternative 
     while(!(input >= 1 && input <=70)){
   */
   while(input < 1 || input > 70){
      /*enter a value*/
     printf("error, value not in range (1 to 70)\n");
     printf("please enter a value (1 to 70): ");
     scanf("%d",&input);
   }   
   for(numPrinted=0;numPrinted < input;numPrinted++){
     printf("*");
   }
   printf("\n");
  return 0;
}
