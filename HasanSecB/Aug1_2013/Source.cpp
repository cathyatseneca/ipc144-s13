#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define ROWS 5
#define COLS 3
#define STR 20

int idx(int r, int c){
	return r * COLS + c;
}

void func1(){
	int data[ROWS][COLS] = {};
	int i, j;

	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLS; ++j) {
			printf("Enter integer [%d][%d]: ", i, j);
			scanf("%d", &data[i][j]);
		}
	}

	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLS; ++j) {
			printf("%5d", data[i][j]);
		}
		printf("\n");
	}
}

void func2(){
	char data[ROWS][STR] = {};
	char temp[STR];
	int i, j, cmp;

	for (i = 0; i < ROWS; i++) {
		printf("Enter a string (<20 characters):");
		gets_s(data[i]);
	}

	for (i = 0; i < ROWS - 1; ++i) {
		for (j = 0; j < ROWS - 1 - i; ++j) {
			cmp = strcmp(data[j], data[j + 1]);
			if (cmp > 0) {
				strcpy(temp, data[j]);
				strcpy(data[j], data[j + 1]);
				strcpy(data[j + 1], temp);
			}
		}
	}

	for (i = 0; i < ROWS; i++) {
		printf("%s\n", data[i]);
	}
}

void func3(){
	FILE* fp = fopen("temp.txt", "w");
	char data[10][20] = {};
	int i;

	fprintf(fp, "sup son\n");
	fprintf(fp, "sup son2\n");
	fprintf(fp, "sup son3\n");
	for (i = 0; i < 5; ++i) {
		fprintf(fp, "sup son_%d\n", i);
	}
	fclose(fp);

	fp = NULL;
	fp = fopen("temp.txt", "r");
	if (fp) {
		for (i = 0; fgets(data[i], 20, fp); i++);
		for (i = 0; i < 10; ++i) {
			printf("%s", data[i]);
		}
	}
	else {
		fprintf(stdout, "failed to open temp.txt\n");
	}
}

int main(){
	int i;
	func3();

	scanf("%d", &i);
}