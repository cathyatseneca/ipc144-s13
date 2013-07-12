#include <stdio.h>
#define NUM_OF_KEYS 100

int linearSearch(int key, int* keyList);

int main()
{
	int keys[NUM_OF_KEYS] = {0};
	float weight[NUM_OF_KEYS] = {0};
	float height[NUM_OF_KEYS] = {0};

	int availKeys = 1;

	keys[0] = availKeys++;
	weight[0] = 210;
	height[0] = 6.2;

	
	keys[1] = availKeys++;
	weight[1] = 200;
	height[1] = 6.0;

	keys[2] = availKeys++;
	weight[2] = 120;
	height[2] = 5.3;

	keys[3] = availKeys++;
	weight[4] = 300;
	height[4] = 4.0;

	printf("Weight of %d is %f", 3, weight[linearSearch(3, keys)]);



}

int linearSearch(int key, int* keyList)
{
	int i;
	for(i = 0; i < NUM_OF_KEYS; i++)
		if(keyList[i] == key)
			return i;
	return -1;
}

void bubbleSort(int* keys)
{
	int i = NUM_OF_KEYS;
	int j, temp;
	while(i--)
	{
		for(j = 0; j < i; j++)
		{
			if(keys[j] > keys[j+1])
			{
				temp = keys[j];
				keys[j] = keys[j+1];
				keys[j+1] = temp;
			}
		}
	}

}

void selectionSort(int* keys)
{
	int i, j, jmax;
	int max;
	int n = NUM_OF_KEYS;

	for (i = 0; i < n - 1; i++) {
		max = keys[0];
		jmax = 0;
		for (j = 1; j < n - i; j++)
			if (keys[j] > max) {
				max = keys[j];
				jmax = j;
			}
		if (jmax != n - i - 1) {
			max =keys[n - i - 1];
			keys[n - i - 1] = keys[jmax];
			keys[jmax] = max;
		}
	}
}

int binarySearch(int key, int* keyList)
{
   int left = 0, right = NUM_OF_KEYS;
	int i = right/2;
	int ret = -1;
	while(ret == -1 && left < right)
	{
		if(key > keyList[i])
         left = i + 1;
		else if(key < keyList[i])
		   right = i;
      else
			ret = i;
      i = left + (right - left) / 2;
	}
   return ret;
}