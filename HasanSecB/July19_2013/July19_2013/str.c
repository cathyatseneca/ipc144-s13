#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print(char arr[]){
	int i = 0;

	while (arr[i]){
		printf("%c", arr[i++]);
	}
	printf("\n");
}

// getline accepts a newline terminated
 // string s of up to max - 1 characters,
 // adds the null terminator and discards
 // the remaining characters in  the input
 // buffer including terminating character
 //
 char *getline(char *s, int n)
 {
	int i, c;
	for (i = 0; i < n - 1 && (c =
	getchar()) != EOF && c != (int)'\n'; 
	i++)
			s[i] = c;
	s[i] = '\0';
	while (n > 1 && c != EOF && c !=
	(int)'\n')
			c = getchar();
	return c != EOF ? s : NULL;
 }

void printingStuff(){
	int i;
	char arr[] = "bonjour";
	const char* sp = "other";

	print(arr);
	printf("%s\n", arr);
	printf("%c\n", arr);

	printf("123456789");
	printf("123456789");
	printf("123456789\n");

	printf("%10s\n", arr);
	printf("%-10s", arr);
	printf("%-10s\n", arr);
	printf("%10.3s\n", arr);
	printf("%-10.3s\n", arr);
	printf("======================================\n");
	printf("%-10s\n", "1\n2\n3\n4\n");
	puts("hi there");

	printf("%10d\n", 672);
	printf("%-10d", 672);
	printf("%-10d\n", 672);
	printf("%10.2d\n", 672);
	printf("%-10.2d\n", 672);

	printf("%10.20llf\n", 13.679341567);
	printf("%-10llf", 13.679341567);
	printf("%-10llf\n", 13.679341567);
	printf("%10.2llf\n", 13.679341567);
	printf("%-10.2llf\n", 13.679341567);
}

void scanningStuff(){
	char dest[20];
	gets_s(dest, 5);
	printf("%s\n", dest);
	getline(dest, 20);
	printf("%s\n", dest);
	scanf("%4s", dest);
	printf("%s\n", dest);
}

int main(void){
	int i;
	//printingStuff();
	scanningStuff();
	scanf("%d", &i);
}
