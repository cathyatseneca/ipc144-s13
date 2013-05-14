/*this program will ask for a temperature in farenheit and calculate the 
temperature in degrees celcius*/

#include <stdio.h>
int main(void){
  int tempInF;
  int tempInC;
  /*ask user to enter a temperature in farenheit*/
  printf("Enter a temperature in Farenheit: ");
  /*read it in*/
  scanf("%d",&tempInF);

  /*calculate the temperature in celcius*/
  tempInC=5.0/9*(tempInF-32);

  /* print that out*/
  printf("The temperature of %dF is %dC\n",tempInF,tempInC);
  return 0;
}
