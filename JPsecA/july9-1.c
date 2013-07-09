#include <stdio.h>

void decrement(int* a, int size)
{
	int i;
	for(i=0;i<size;i++)
		a[i] = a[i] - 1;
}

void printArray(int a[], int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d\n", a[i]);
}


int main()
{
	int i[10];
	int a[] = {11,13,3,6,4,2};
	int b[20] = {6,6,7,8};
	int c;

	char name[] = "Joseph Hughes";
    char letter = 'J';
	/*
	i[0] = 10;
	i[1] = 11;
	*/

	for(c=0;c<10;c++)
	{
		i[c] = c;
	}

	decrement(i,10);
	printArray(i,10);
	return 0;
}
