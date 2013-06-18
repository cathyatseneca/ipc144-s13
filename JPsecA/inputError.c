#include <stdio.h>

int main(void){
  int input;
  int rcFromScanf;
  printf("enter a number: ");
  rcFromScanf=scanf("%d",&input);
  if(rcFromScanf == 1){
    printf("the number was: %d\n",input);
  }
  else{
    printf("not a number\n");
    printf("return value form scanf is: %d\n",rcFromScanf);
  }
}
