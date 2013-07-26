#include <stdio.h>
#define SIZE 7
int main(void){
	int keys[SIZE] = {6, 2, 15, 11, 9, 14, 3};
	char data[SIZE] = { 'n', 'b', 'r', 'o', 'j', 'u', 'o' };

	int i, j, itemp;
	char ctemp;

	for (i = 0; i < SIZE - 1; i++) {
		for(j = 0; j < SIZE -1; j++) {
			if (keys[j + 1] < keys[j]) {
				itemp = keys[j];
				keys[j] = keys[j + 1];
				keys[j + 1] = itemp; 

				ctemp = data[j];
				data[j] = data[j+1];
				data[j + 1] = ctemp;
			}///end if
		}//end for
	}//end for
	for (i = 0; i < SIZE; i++){
		printf("%c", data[i]);
	}
	printf("\n");
	return 0;
}


