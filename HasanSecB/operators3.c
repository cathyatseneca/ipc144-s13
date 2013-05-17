#include <stdio.h>

int main(void){
  int x=5;
  int y=5;
  int a;
  int b;

  a=x++;
  b=++y;
  
  printf("x=%d\n",x);
  printf("y=%d\n",y);
  printf("a=%d\n",a);
  printf("b=%d\n",b);
}
