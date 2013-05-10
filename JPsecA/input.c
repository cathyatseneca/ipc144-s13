/*this program will ask the user to enter a number
  and then print that number back out*/
#include <stdio.h>
int main(void){
  int inputValue;  //this variable is an integer and it will be used
                   //to hold the number that the user enters

  printf("Enter a number: ");
 
/* -scanf is a function of the stdio library.  It reads data from
    user.  
   -%d is for base 10 whole number.  All format codes begin with %
   -& is the address of operator.  What we are giving scanf is not the
    value stored in the variable inputValue but rather where in memory
    the variable is located (the address of inputValue)*/
  scanf("%d",&inputValue);
 
  printf("The value that you entered was %d\n",inputValue);
  return 0;
}
