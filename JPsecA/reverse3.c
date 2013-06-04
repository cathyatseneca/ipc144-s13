/*write a program that will ask the user for a positive whole number
  between 1 and 999999999

  This program will reverse the digits of the number entered
  
  If the user entered an invalid value, your program should ask them
  to reenter the value
*/

#include <stdio.h>
#include "myutils.h"

int main(void){
  int input;
  int result=0;
  int lastDigit;
   /*enter a number*/
   printf("To quit anytime, use 0\n");
   input=getDataInRange(0,999999999);
   while(input !=0){  
     printf("The number %d",input);
     /*I am showing this to show that you can... its not a great 
       idea for this example to do it this way as it is less clear
     */
     result=0;
     for(;input > 0;input = input /10){
       result = result *10;
       lastDigit=input % 10;
       result = result+lastDigit;
     }
     printf(" in reverse is %d\n",result );
     input=getDataInRange(0,999999999);
   }
   return 0;
}
