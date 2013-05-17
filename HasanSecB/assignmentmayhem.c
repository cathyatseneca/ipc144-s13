#include <stdio.h>

int main(void){
  int number;
  printf("enter a number: ");
  scanf("%d",&number);

  if(number=0){
    printf("in the if\n");
  }
  printf("done, number is %d\n",number);
}
