#include <stdio.h>
/*this program will ask the user to enter a number
  and then it will print that number back to them*/

int main(void){
  int userInput;   /*this is a variable named userInput
                     it is an int (integer)*/
  //ask user to enter a number
  printf("Enter a number: ");
  //read that value in
  scanf("%d",&userInput);   /*scanf is the function for reading
                              %d is a format code
                              userInput is value read in should be stored
                              & in front of userInput is the address of
                              operator.  which gives the location of
                              userInput in memory to the function so that 
                              the value can be put there*/
  //print that value out  
  printf("The value you entered was %d\n",userInput);
}

