/*this program will ask the user to enter a number and it
  will print out whether the number is odd or even*/
#include <stdio.h>

int main(void){
  int number;
  printf("please enter a number: ");
  scanf("%d",&number);
  if(number % 2){
    printf("The number %d is odd\n",number);
  }
  else{
    printf("The number %d is even\n",number);
  }
}
