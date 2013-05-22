/*write a program that will ask someone for their age and then print out
  the price of the movie ticket they need.
  pricing as follows:
      children (age 3 to 13 inclusive) 10.00
      adults   (age 14 to 60 inclusive) 14.50
      seniors  (age 61 or older) 10.00
      (under 3 is free)
*/

#include <stdio.h>

int main(void){
  int age;
  double price;
  /*get user to enter an age*/
  printf("Please enter your age: ");
  /*read that age in*/
  scanf("%d",&age);
  if(age < 0){
    printf("Invalid entry.");
  }
  else{
    if(age >= 3 && age <=13){
      price=10;
    }
    else if(age >=14 && age <=60){
      price=14.50;
    }
    else{
      price=10;
    }
    printf("the price of the ticket is %.2lf\n",price);
  }
  /*determine the ticket price*/
  /*print the price out*/

  return 0;
}
