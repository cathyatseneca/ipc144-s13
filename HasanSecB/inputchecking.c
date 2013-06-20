#include <stdio.h>
void clear(){
  while(getchar()!='\n');
}
int main(void){
  int input;
  int returnFromScanf;
  printf("enter a number: ");
  returnFromScanf=scanf("%d",&input);
  while(returnFromScanf!=1){
    clear();
    printf("enter a number: ");
    returnFromScanf=scanf("%d",&input);
  }
  printf("you entered: %d\n",input);
}
