#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
   {
   int val = -100;
   srand(3);
   double rnd = (rand() / (double)RAND_MAX) * 100;
   printf("value is: %lf", rnd);
   return 0;
   }

