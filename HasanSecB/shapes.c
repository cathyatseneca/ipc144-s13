#include <stdio.h>
#include "myutils.h"

/*Write a function called  drawLineOfStars.  This function accepts a 
positive integer representing the number of stars to draw and returns 
nothing.  This function will draw a line of stars (*) on one line followed 
by the newline character.  The number of stars drawn are passed to the 
function.  If the number passed into the function is not positive, this 
function does nothing.

For example:   drawLineOfStars(5);   would result in the following being 
displayed:
*****

Write a function called drawTriangle.  This function accepts a positive 
integer and returns nothing.  It will draw a right angle triangle using 
*'s with a base equal to the number passed into the function.  If the 
number passed in is not positive, the function does nothing.

For example: drawTriangle(5) would result in the following being 
displayed:

*
**
***
****
***** 
*/ 
void drawLineOfStars(int numStars);
void drawTriangle(int baseSize);
void drawBox(int width,int height);
/*
Write a function called drawBox, that will be passed 2 positive integers 
greater than or equal to 2.  the parameters represent the width and the 
height respectively.  The function will draw a box shape based on the 
width and height values passed in.  Function returns nothing.
example (simple mode) drawBox(4,5);
****
****
****
****
****

example (challenge mode) drawBox(4,5);
****
*  *
*  *
*  *
****

*/




int main(void){
  int v=getData(1,75);
  drawLineOfStars(v);   //calling the function drawLineOfStars
  return 0;
}
void drawBox(int width,int height){
  int i;
  for(i=0;<height;i++){
    drawLineOfStars(width);
  }
}

void drawBoxHollow(int width,int height){
  int i,j;
  drawLineOfStars(width);  //top line
  for(i=0;i<height-2;i++){   //each time through loops draws one of the 
    printf("*");
    for(j=0;j<width-2;j++){
      printf(" ");
    }
    printf("*");
  }
  drawLineOfStars(width);  //bottom line
}

void drawLineOfStars(int numStars){
  int i;
  for(i=0;i<numStars;i++){
    printf("*");
  }
  printf("\n");
}
void drawTriangle2(int baseSize){
  int i;
  int j;
  for(i=0;i<baseSize;i++){
    drawLineOfStars(i+1);
  } 
}

void drawTriangle(int baseSize){
  int i;
  int j;
  for(i=0;i<baseSize;i++){
    for(j=0;j<i+1;j++){
       printf("*");
    }
    printf("\n");
  } 
}

void drawMirrorTriangle(int baseSize){
  int i;
  int j;
  int numSpaces, numStars;
  for(i=0;i<baseSize;i++){
    numSpaces=baseSize-i-1;
    numStars=i+1;
    for(j=0;j<numSpaces;j++){
      printf(" ");
    }
    for(j=0;j<numStars;j++){
      printf("*");
    }
    printf("\n");
  } 
}


