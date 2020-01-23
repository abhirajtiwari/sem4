#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int bubbleSort (int a[], int size) {
	int count = 0;
	for (int i = 0; i < size-1; ++i)
	{
		for (int j = 0; j < size-i-1; ++j)
		{
			count++;
			if (a[j+1] < a[j]) {
				int temp = a[j+1];
				a[j+1] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("%d\n", count); // print count
}

int main() {
	srand(time(0));
	int size = rand()%1000;
	int a[size];
	for (int i = 0; i < size; ++i)
	{
		a[i] = rand()%1000;
	}
	printf("%d, ", size); // print size
	bubbleSort(a, size);
}