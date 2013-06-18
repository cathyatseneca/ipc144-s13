#include <stdio.h>

void clear(){
  while(getchar()!='\n');
  //same as:
  //while(getchar()!='\n'){}
}
int main(void){
  int input;
  int rcFromScanf;
  printf("enter a number: ");
  rcFromScanf=scanf("%d",&input);
  while(rcFromScanf!=1){
    clear();
    printf("that wasn't a number\n");
    printf("enter a number: ");
    rcFromScanf=scanf("%d",&input);
  }
  printf("the number was: %d\n",input);
}
