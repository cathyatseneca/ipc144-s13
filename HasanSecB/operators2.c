#include <stdio.h>

int main(void){
  int x=5;
  int y=10;
  int z=10;
  x+=4;
  printf("%d\n",x);
  //be very careful about doing this sort of thing
  //below.  It is bad style.  Generally should not
  //ever put in a variable assignment type operator (or 
  //anything that modifies a variable, in a function call
  printf("%d\n",y*=3);
  printf("%d\n",y);
  printf("%d\n",z*3);
  printf("%d\n",z);
}
