/*this program will ask the user to enter a number
  and it will print the last digit of that number*/
#include <stdio.h>

int main(void){
  long long number;
  int lastDigit;
  printf("enter a number: ");
  scanf("%lld",&number);
  lastDigit=number%10;
  printf("the last digit of %lld is %d\n",number,lastDigit);
}
