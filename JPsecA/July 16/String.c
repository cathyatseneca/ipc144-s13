#include <stdio.h>

//simple print string function
void printString(char a[])
{
	int i;
	for(i = 0; a[i] != 0; i++)
		printf("%c", a[i]);
	printf("%c", '\n');
}

//garbage collecting function
void getGarbage()
{
	char g;
	do
	{
		scanf("%c", &g);

	}while(g != '\n');

}

int main()
{
   //a set of ways to init strings
	char s1[] = "This is string literal\n";
	char s2[] = {'t', 'h', 'i', 's', '\0'};
	char s3[] = "This is more testing";
	char s4[100];
	char s5[100];

   //add a null at the 9th element
	s1[8] = 0;

   //call custom made functions
	printString(s1);
	printString(s2);

   //printf version of our print string
	printf("%s", &s1[9]);

   /*A [Left Justified] [30] character field which truncates after the [10]th item*/
	printf("%-30.10s", s3);
	printf("%d\n", 25);

   //prints a string and a new line after
	puts(s3);
	puts(s2);
	/* reads in until first whitespace
	scanf("%s",s4);
	printf("%s", s4);
	*/

   //reads until new line is found
	scanf("%[^\n]",s4);
	printf("%s\n", s4);

   //have to remove the new line that was left in the buffer
	getGarbage();

   //scan until the newline or 99 characters
	gets_s(s5, 99);
	puts(s5);

	return 0;
	/*
	this is one     13
	this is two     15
	this is three  142
	this is two hundred and five  12

	this is one     13
	this is two     15
	this is three  142
	this is two hu  12
	*/
}