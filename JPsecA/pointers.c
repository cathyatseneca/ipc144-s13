/*this function is passed the address of 2 variables.  It will swap their 
values*/
void swap(int* a,int* b);

int main(void){
   int x = 5;
   int y = 10;
   printf("before: x = %d, y = %d\n",x,y);
   swap(&x,&y);
   printf("after: x = %d, y = %d\n",x,y);
}
void swap(int* a,int* b){
  int tmp=*a;
  *a=*b;
  *b=tmp;
}

/*given an amount of money, this function passes back
  the appropriate number of each type of coin to give for that amount.
  Note that there should be as few coins given as possible (ie giving out 
  the whole thing in nickels is not correct.  remember the new
  rounding rules for pennies...1,2,6,7 round down, 3,4 8,9 round up*/
void getCoins(double amt,int* numToonies, int* numLoonies,
                  int* numQuarters,int* numDimes,int* numNickels){
  int amtInCents=amt*100;   //amt stored as number of cents
  

}
