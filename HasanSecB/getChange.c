/*
given an amount of money (a floating value) write a 
function named getChange() that will calculate how many of 
each type of currency to give as change to equal that amount 
of money
*/

void getChange(double amt,.........){
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

void swap(int* p1,int* p2){
  int* tmp;
  tmp=p1;
  p1=p2;
  p2=tmp;
}

int main(void){
  int a = 5;
  int b = 10;
  printf("a=%d, b=%d\n",a,b);  //print 5 and 10
  swap(&a,&b);
  printf("a=%d, b=%d\n",a,b);  //print 10 and 5


  int numLoonies;
  int numToonies;
  int numQuarters;
  int numDimes;
  int numNickles;




  getChange(2.56,&numToonies,&numLoonies,&numQuarters,
                      &numDimes,&numNickles);
}
