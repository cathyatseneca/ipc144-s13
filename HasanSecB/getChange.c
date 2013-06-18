/*
given an amount of money (a floating value) write a 
function named getChange() that will calculate how many of 
each type of currency to give as change to equal that amount 
of money
*/
void getChange(double amt,int* pToonies, int* pLoonies,
                    int* pQuarters,int* pDimes,int* pNickels){

  int amtInCents=amt*100;
  int lastDigit = amtInCents%10;
  if(lastDigit == 1 || lastDigit == 2){
  }
   
/*  if(last digit is 1 or 2) then last digit is 0
  else if (last digit is 3 or 4) last digit is 5
  else if (last digit is 6 or 7) last digit is 5
  else if (last digit is 8 or 9) go up to next 1 cents*/

  *pToonies = amtInCents/200;
  amtInCents=amtInCents%200;
  *pLoonies=amtInCents/100;
  amtInCents=amtInCents%100;
  *pQuarters=amtInCents/25;
  amtInCents=amtInCents%25;
  *pDimes=amtInCents/10;
  amtInCents=amtInCents%10;
  *pNickels=amtInCents/5;
  amtInCents=amtInCents%5;
}
int main(void){
  int numLoonies;
  int numToonies;
  int numQuarters;
  int numDimes;
  int numNickles;
  getChange(2.56,&numToonies,&numLoonies,&numQuarters,
                      &numDimes,&numNickles);

  int a = 5;
  int b = 10;
  printf("a=%d, b=%d\n",a,b);  //print 5 and 10
  swap(&a,&b);
  printf("a=%d, b=%d\n",a,b);  //print 10 and 5


}
/*write a function called swap.
  This function is passed the address of 2 integers.  It will 
  swap the values in those 2 integers.
*/
//pointers hold addresss so we need 2 pointers
void swap(int* p1,int* p2){
  int tmp;
  tmp=*p1;
  *p1=*p2;
  *p2=tmp;
}

