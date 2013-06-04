#include <stdio.h>

int getDataInRange(int min, int max){
  int input;
  printf("please enter a number (%d to %d): ",min,max);
  scanf("%d",&input);
  while(input < min || input > max){
     printf("error\n");
     printf("please enter a number (%d to %d): ",min,max);
     scanf("%d",&input);
   }
   return input;
}

