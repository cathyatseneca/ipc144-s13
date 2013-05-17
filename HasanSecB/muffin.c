/*write a program that will calculate and print out how much someone has
  to pay for muffins.  Muffins cost 80 cents each.  if someone buys less
  than 6 muffins, they are charged for the muffins and have to pay 
  13% taxes.  If they buy 6 or more, they are charged only for the muffins
  and no taxes.*/

#include <stdio.h>

int main(void){
   int numMuffins;
   double price;

   /*ask user for how many muffins they want*/
   /*read that number in*/
   printf("How many muffins do you want? ");
   scanf("%d",&numMuffins);
 
   /*calculate total cost of muffins*/
   price =numMuffins * 0.80;

   /*add tax if number of muffins is less than 6*/
   if(numMuffins < 6){
     price=price * 1.13;
   }   

   /*print out the result*/
   printf("The price of %d muffins is %.2lf\n",numMuffins, price);
}

