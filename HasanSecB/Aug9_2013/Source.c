#define MAX_RECORDS 1000
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// Name|Age|Height

int search(char* query, char names[][100], int numRecords){
	int i, foundIdx;
	for (i = 0, foundIdx = -1; i < numRecords && foundIdx == -1; ++i) {
		if (strcmp(names[i], query) == 0) {
			foundIdx = i;
		}
	}

	return foundIdx;
}

void displayRecord(int idx, char names[][100], int ages[], double heights[]){
	if (idx == -1) {
		printf("Record not found...\n");
	}
	else {
		printf("[%-15s %-6d %0.2lf]\n", names[idx], ages[idx], heights[idx]);
	}
}

int main(){
	int i, result, numRecords = 0;
	FILE* fp = fopen("file.txt", "r");
	char names[MAX_RECORDS][100];
	int ages[MAX_RECORDS];
	double heights[MAX_RECORDS];

	if (fp) {
		// Ignoring second field with *
		while (fscanf(fp, " %[^|]|%*d|%d|%lf",
			names[numRecords], &ages[numRecords], &heights[numRecords]) == 3) {
				numRecords++;
		}
		
		for (i = 0; i < numRecords; i++) {
			printf("%s %d %lf\n", names[i], ages[i], heights[i]);
		}
		printf("%d\n", numRecords);

		displayRecord(search("ZZZ W", names, numRecords),
			names, ages, heights);
		displayRecord(search("John Capola", names, numRecords),
			names, ages, heights);
		displayRecord(search("sup", names, numRecords),
			names, ages, heights);
		displayRecord(search("XXX YY", names, numRecords),
			names, ages, heights);
	}

	scanf("%d", &i);
}
