#include <stdio.h>
int getData(int min, int max){
     int input;
     printf("please enter a value (%d to %d): ",min,max);
     scanf("%d",&input);
     while(input < min || input > max){
       printf("error, value not in range %d to %d\n",min, max);
       printf("please enter a value (%d to %d): ",min,max);
       scanf("%d",&input);
     }
     return input;
}    

