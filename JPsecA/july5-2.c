#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
   {
   int val = -100;
   time_t aa = time(NULL);
   
   clock_t bb = clock();

   srand((int)(aa * 1000));
   double rnd = 50 + (rand() / (double)RAND_MAX) * 50;
   rnd = -rnd;
   printf("fabs is: %lf\n", fabs(rnd));
   printf("floor is: %lf\n", floor(rnd));
   printf("ceil is: %lf\n", ceil(rnd));
   printf("round is: %lf\n", round(rnd));
   printf("trunc is: %lf\n", trunc(rnd));
   printf("sqrt is: %lf\n", sqrt(-rnd));
   printf("pow is: %lf\n", pow(rnd, 5));
   return 0;
   }

