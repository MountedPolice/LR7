#include <stdio.h>

void sortHeapArray(int *arr, int n)
{
	readArray(arr, n);
	printf("========== \n", n);
	printf("%d \n", n);
	writeArray(arr, n);
	sort(arr, n);
	writeArray(arr, n);
	free(arr);
}