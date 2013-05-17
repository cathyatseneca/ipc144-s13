/*Write a program that will ask the user to enter a temperature in 
farenheit and print out the temperature in Celcius

C = (5/9)*(F-32)

*/

#include <stdio.h>

int main(void){
   int tempInF;
   int tempInC;
   /*ask user to enter a temp in f*/
   /*read the temp in*/
   printf("Please enter a temperature in Farenheit: ");
   scanf("%d", &tempInF);

   /*calculate the temperature in C*/
   tempInC = (5.0/9)*(tempInF-32);
      

  /*print it out*/
  printf("The temperature of %dF is %dC\n",tempInF, tempInC);
}
