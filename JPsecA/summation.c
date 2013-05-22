/*write a program that will ask the user to enter a series of non-negative
  integers.  The user can enter a negative value to stop data entry. 
  program will print out the sum of the numbers entered by the user

*/
#include <stdio.h>
int main(void){
  int input;
  int sum=0;
  printf("enter a number (negative to exit): ");
  scanf("%d",&input);
  while(input >= 0){
    sum+=input; /*sum = sum + input*/
    printf("enter a number: ");
    scanf("%d",&input);
  }
  printf("the sum is %d\n",sum);

  return 0;
}
