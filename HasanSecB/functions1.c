/*write a program that will ask the user for a positive whole number
  between 1 and 999999999 inclusive.
  If the user entered an invalid value, your program should ask them
  to reenter the value

  this program will reverse the digits of the number entered
*/

#include <stdio.h>

/*program structure
int main(void){
   do{
      while(){
      }
      while(){
      }
   }while(keepgoing is true);
}
*/ 
int getData(int min, int max);
int main(void){
   int input;
   int result;  //holds the reverse of number entered
   int keepGoing;

   do{
     input=getData(1,999999999);
     result = 0;
     while(input > 0){
       result = result * 10 + input%10;
       input = input /10;
     }
     printf("the reverse of the number is: %d\n",result);
     printf("Do you want to keep going?\n");
     printf("0 to stop, any other value to keep going: ");
     scanf("%d",&keepGoing);
  }while(keepGoing != 0);
  return 0;
}

int getData(int min, int max){
     int input;
     printf("please enter a value (%d to %d): ",min,max);
     scanf("%d",&input);
     while(input < min || input > max){
       printf("error, value not in range %d to %d\n",min, max);
       printf("please enter a value (%d to %d): ",min,max);
       scanf("%d",&input);
     }
     return input;   
}

