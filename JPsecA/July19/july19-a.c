#include <string.h>
#include <stdio.h>

int main()
{
   char a[100] = "this is test";
   char n1[100] = "David";
   char n2[100] = "Alex";
   char n3[100] = "Jarred";
   int res;

   int length = strlen(a);
   int i;
   for(i = 0; a[i] != '\0'; i++);
   printf("number of chars is: %d\n", i);

   printf("number of chars is: %d\n", length);

   char b[100];

   for(i = 0; a[i] != '\0'; i++)
     b[i] = a[i];
   b[i] = '\0';

   strcpy(b, a);


   strcat(a, " and this is added on after\n");

   printf("%s", a);

   res = strcmp(n1, n2);//compare the two strings to see which is first

   if(res == 0)
      printf("%s is the same as %s\n", n1, n2);
   else if(res > 0)
      printf("%s is after %s\n", n1, n2);
   else
      printf("%s is before %s\n", n1, n2);


}
