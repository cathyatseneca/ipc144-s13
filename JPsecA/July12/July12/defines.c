#include <stdio.h>
#define ARRAY_SIZE 10

int main()
{
	int ar[ARRAY_SIZE] = {0};
	int i;
	for(i = 0; i<ARRAY_SIZE; i++)
		printf("%d", ar[i]);
	for(i = 0; i<ARRAY_SIZE; i++)
		ar[i]++;
}