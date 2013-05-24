/*A theater sells tickets according to the following prices:

   child (age 3 to 13 inclusive) is 9.50
   adult (14 to 59 inclusive ) is 14.50
   seniors (60 or older) is 10.00

  Write a program that will ask the user for their age and print out the 
  cost of a sigle ticket.  Entries that are clearly invalid (age that is 
  negative) should give proper error message
*/
#include <stdio.h>
int main(void){
  int age;
  double price;
  /*ask user to enter an age*/
  printf("Please enter your age: ");
  /*read age in*/
  scanf("%d",&age);
  while(age < 0){
    printf("age cannot be negative.\n");
    printf("Please enter your age: ");
    scanf("%d",&age);
  }

    /*if it is not print price of tickets based on age*/
    if(age >=3 && age <=13){
      price = 9.50;
    }
    else if(age >=14 && age <=59){
      price = 14.50;
    }
    else if (age >= 60){
      price = 10.00;
    }
    else{
      price = 0;
    }
    printf("Ticket is $ %.2lf\n",price);

  return 0;
}
