/*write a function called areaOfTriangle.  This function is passed a floating 
point value representing the height of a triangle and a floating point value 
representing the base of a triangle.  The function calculates and returns the 
area of a triangle (a floating point value).  
area of triangle = 1/2 * base* height
*/
/*Write a function called smallest.  This function is passed 3 integers and 
returns the smallest of the three values passed in
*/
/*write a function that calculates the nth fibonacci number.  This function 
  accepts an integer and returns an integer.  The number accepted is the the 
  n, and you need to calculate the nth number in the fibonacci sequence.
  F0 is 0
  F1 is 1
  F2 is F1 + F0 = 1
  F3 is F2 + F1 = 2
  F4 is F3 + F2 = 3
  Fn is Fn-1 + Fn-2
*/
/*<return type> <function name> (<parameter list>); */

double areaOfTriangle(double height, double base);
int smallest(int a,int b,int c);
int fibonacci(int n);

double areaOfTriangle(double height, double base){
  return 0.5*height*base;
}
int smallest(int a,int b,int c){
  int small;  //stores smallest between a, b and c
  if(a < b  && a < c){
     small=a;
  }
  else{
    if(b < c)
       small=b;
    else
      small=c;
  }
  return small;
}



