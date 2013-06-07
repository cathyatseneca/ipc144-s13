/*Write a function named factorial.  This function will accept a 
non-negative integer as it's only parameter (you can assume that the 
number you get is a non-negative integer).  Function returns an int that 
is the factorial of that value
By definitely zero factorial (the exclamation mark is the mathematical 
factorial symbol)
      0! == 1
      1! == 1
      2! == 2*1 == 2
      3! == 3*2*1  == 6
      4! == 4*3*2*1 == 24
      5! == 5*4*3*2*1 == 120

*/
#include <stdio.h>
#include "myutils.h"

int factorial(int number);

int main(void){
   int v=getDataInRange(0,16);
   printf("%d! == %d\n",v,factorial(v));
}

int factorial(int number){
  int result = 1;
  
  while(number >=1){
    result=result*number;
    number--;
  }

  return result;
}

int factorial(int number){
  int result = 1;
  int i;
  for(i = 1;i<=number;i++);
    result=result*i;
  }

  return result;
}

int factorial(int number){
   int result = 1;
   if(number > 0){
     result = number * factorial (number -1);
   }
   return result;
}

