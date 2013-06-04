/*write a program that will ask the user for a positive whole number
  between 1 and 999999999 inclusive.
  If the user entered an invalid value, your program should ask them
  to reenter the value

  this program will reverse the digits of the number entered
*/

#include <stdio.h>

int main(void){
   int input;
   int result;  //holds the reverse of number entered

   /*enter a value*/
   printf("please enter a value (1 to 999999999): ");
   scanf("%d",&input);
   /*alternative 
     while(!(input >= 1 && input <= 999999999)){
   */
   while(input < 1 || input > 999999999){
      /*enter a value*/
     printf("error, value not in range (1 to 999999999)\n");
     printf("please enter a value (1 to 999999999): ");
     scanf("%d",&input);
   }   
   result = 0;
   while(input > 0){
     result = result * 10 + input%10;
     input = input /10;
   }
   printf("the reverse of the number is: %d\n",result);
  return 0;
}
