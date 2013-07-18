#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 10

int linearSearch(int arr[], int size, int key){
	int result = -1;
	int i;
	for (i = 0; i < size; i++) {
		if (arr[i] == key) {
			result = i;
			i = size;
		}
	}
	return result;
}

int binarySearch(int arr[], int size, int key){
	int result = -1;
	int low = 0;
	int end = size;	// 1 element past last
	int midIdx, midValue;

	while (result == -1 && low < end) {
		midIdx = low + ((end - low) / 2);
		midValue = arr[midIdx];

		if (key < midValue) {
			end = midIdx;
		}
		else if (key > midValue) {
			low = midIdx + 1;
		}
		else {
			result = midIdx;
		}
	}

	return result;
}

void selectionSort(int arr[], int size){
	int i, j;
	int minIdx, minValue;
	for (i = 1; i < size; i++) {
		minIdx = i - 1;
		minValue = arr[minIdx];

		for (j = i; j < size; j++) {
			if (arr[j] < minValue) {
				minValue = arr[j];
				minIdx = j;
			}
		}

		arr[minIdx] = arr[i - 1];
		arr[i - 1] = minValue;
	}
}

int main(){
	int arr[SIZE] = { 1, 5, -3, 6, 9, 8, 22, 8, -9, 10 };
	int sortedArr[SIZE] = { 0, 6, 7, 9, 9, 11, 15, 17, 19, 20 };
	int key = 22;
	int result = linearSearch(arr, SIZE, key);
	int s;
	printf("linear search result is %d\n", result);

	key = 9;
	result = binarySearch(sortedArr, SIZE, key);
	printf("binary search result is %d\n", result);

	result = binarySearch(arr, SIZE, key);
	printf("result of binary search over unsorted array %d\n", result);
	selectionSort(arr, SIZE);
	result = binarySearch(arr, SIZE, key);
	for (s = 0; s < SIZE; s++) {
		printf("%d, ", arr[s]);
	}
	printf("\nresult of binary search over now sorted array %d\n", result);

	printf("type an integer to continue...");
	scanf("%d", &s);
	return 0;
}