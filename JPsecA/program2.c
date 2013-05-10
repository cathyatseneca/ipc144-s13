/* This program will print to the screen:
Hello World!
This is Cathy.
*/
/*this is a comment.  The compiler completely ignores this.
  it is for you to use to explain your program*/
//this is also a comment
/*this is also a comment too*/

/*#include is a preprocessor directive.  It will be used
  to include the contents of the file stdio.h in this program
*/
#include <stdio.h>
/*All C programs have 1 or more functions.  Functions are bits of a 
program that take some data through parameters, processes that data
and returns a value.
All C programs must have a function named main().  processing always 
starts in main.  */

int main(void){
  /*printf is a function that accepts a string  (defined by the 
    "'s).  the \n's are newlines */
  printf("Hello World!\n");
  printf("This is Cathy\n");
  return 0;
}
