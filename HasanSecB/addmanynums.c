/*
this program will sum a series of positive integers entered by the user.  
When the user enters a negative number, the processing will stop and the 
final sum will be printed.

Sample run:

Enter a number (non-positive to stop): 5
Enter a number (non-positive to stop): 15
Enter a number (non-positive to stop): 3
Enter a number (non-positive to stop): -1
Total was: 23
*/


#include <stdio.h>
int main(void){
  int inputValue;
  int sum=0;

  /*enter a number*/
  printf("enter a number: ");
  scanf("%d",&inputValue);
  while(inputValue > 0){
    /*add the number*/
    sum=sum+inputValue;
    /*enter a number*/
    printf("enter a number: ");
    scanf("%d",&inputValue); 
  }
  /*print the total*/
  printf("Total is %d\n",sum);
  return 0;
}
