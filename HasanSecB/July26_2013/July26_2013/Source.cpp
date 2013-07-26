#include <stdio.h>
#include <string.h>

int main(){
	char a[31] = "abcDEF";
	char b[31] = "abcdef";
	int  c = strcmp(a, b);
	int  d = strncmp(a ,b, 3);

	printf("cmp  = %d\n", c);
	printf("ncmp = %d\n", d);
	strncat(a, b, 4);
	printf("%s\n", a);
	int z;
	scanf("%d", &z);
}
