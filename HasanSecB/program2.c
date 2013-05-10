/*This program will print:
   Hello World!
   This is Cathy.
  to the screen  */
/*this is a comment - something the computer ignores*/
//this is also a commment but it ends at the end of line
//another line that is a comment also

#include <stdio.h>  
/*includes the stdio.h library header
  all statements that start with # are pre-processor statements */

/*C programs are made up of a number of functions.  Every function 
  takes data in via the parameter list and returns some return value
  The one function that all C programs have is called main.  It is
  where the program starts*/
int main(void){
  printf("Hello World!\n");
  printf("This is Cathy.\n");
  return 0;
}

