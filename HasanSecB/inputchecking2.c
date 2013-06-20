#include <stdio.h>
void clear(){
  while(getchar()!='\n');
}
int main(void){
  char first,third;
  int second,fourth;
  int returnFromScanf;
  printf("enter a robot name: ");
  returnFromScanf=scanf("%c%d%c%d",&first,&second,&third,&fourth);
  printf("scanf returned : %d\n",returnFromScanf);
  printf("characters are: %c%d%c%d",first,second,third,fourth);
  return 0;
}
