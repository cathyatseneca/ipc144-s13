#include <stdio.h>
#include "myutils.h"
int factorial(int number);
int fact(int number);

int main(void){
  int result;
/*  input=getData(0,50);*/
  result = fact(4);
  printf("%d! = %d\n",4,result);
}

int fact(int number){
   int result;
   if(number <=1){
     result=1;
   }
   else{
     result=number * fact(number-1);
   }
   return result;
}

int factorial(int number){
  int result=1;
  while(number > 0){
    result = result*number;
    number--;
  }
  return result;
}

