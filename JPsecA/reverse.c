/*write a program that will ask the user for a positive whole number
  between 1 and 999999999

  This program will reverse the digits of the number entered
  
  If the user entered an invalid value, your program should ask them
  to reenter the value
*/

#include <stdio.h>

int main(void){
  int input;
  int result=0;
  int lastDigit;
   /*enter a number*/
   printf("please enter a number (1 to 999999999): ");
   scanf("%d",&input);

   while(input < 1 || input > 999999999){
     printf("invalid, please enter value between 1 and 999999999\n"); 
     printf("please enter a number (1 to 999999999): ");
     scanf("%d",&input);
   }
   printf("The number %d",input);
   while(input > 0){
     result = result *10;
     lastDigit=input % 10;
     result = result+lastDigit;
     input = input /10;
   }

   printf(" in reverse is %d\n",result );
   return 0;
}
