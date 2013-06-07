#include <stdio.h>
#include "myutils.h"

void drawLineOfStars(int numStars);
void drawTriangle(int baseSize);
void drawUpsideDownTriangle(int baseSize);

int main(void){
  int v;
  int keepGoing;
  do{
    v=getDataInRange(1,60);
    drawLineOfStars(v);
    printf("-------------------------\n\n");
    drawTriangle(v);
    printf("keep going? (0 to stop, any other value to continue): ");
    scanf("%d",&keepGoing);
  }while(keepGoing!=0);
}


/*
Write a function called  drawLineOfStars.  This function accepts a 
positive integer representing the number of stars to draw and returns 
nothing.  This function will draw a line of stars (*) on one line followed 
by the newline character.  The number of stars drawn are passed to the 
function.  If the number passed into the function is not positive, this 
function does nothing.

For example:   drawLineOfStars(5);   would result in the following being 
displayed:
*****

*/
//step 1: figure out proto type
//<return type> <function name>(<parameter list>){

void drawLineOfStars(int numStars){
  int i;
  for(i=0;i<numStars;i++){
    printf("*");
  }
  printf("\n");
}


void drawSpaces(int numSpace){
  int i;
  for(i=0;i<numSpace;i++){
    printf(" ");
  }
}
/*
Write a function called drawTriangle.  This function accepts a positive 
integer and returns nothing.  It will draw a right angle triangle using 
*'s with a base equal to the number passed into the function.  If the 
number passed in is not positive, the function does nothing.
*/


void drawTriangle(int baseSize){
  int i,j;
  int numOnRow;
  for(i=0;i<baseSize;i++){
    numOnRow=i+1;
    for(j=0;j<numOnRow;j++){
      printf("*");
    }
    printf("\n");
  }
}
void drawTriangle(int baseSize){
  int i,j,k;
  for(i=0,k=baseSize-1;i<baseSize;i++,k--){
    for(j=0;j<k;j++){
      printf(" ");
    }
    drawLineOfStars(i+1);
  }
}


void drawUpsideDownTriangle(int baseSize){
  int i;
  for(i=baseSize;i>0;i--){
    drawLineOfStars(i);
  }
}

