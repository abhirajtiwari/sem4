#include<stdio.h>
#include<stdlib.h>
int op=0;
void swap(int* arr, int i, int j);
int partition(int* arr,int l, int r);
void quicksort(int* arr, int l, int r);

void swap(int* arr, int i, int j)
{
	int temp;
	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

int partition(int* arr,int l, int r)
{
	int p = arr[l];
	int i,j;
	i=l;
	j=r+1;
	do{
		do{i++;op++;}while(!(arr[i] >= p));
		do{j--;op++;}while(!(arr[j] <= p));
		swap(arr,i,j);
	}while(!(i >= j));
		swap(arr,i,j);
		swap(arr,l,j);
		return j;
}

void quicksort(int* arr, int l, int r)
{
	int s;
	if(l<r)
	{ 	s=partition(arr,l,r);
		quicksort(arr,l,s-1);
		quicksort(arr,s+1,r);
	}
}

void main()
{
	int n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
		scanf("%d",&arr[i]);
	printf("\n");
	quicksort(arr,0,n-1);
	for(int i=0; i<n; i++)
		printf("%d \t",arr[i]);
	printf("\nThe opcount is: %d\n",op);
}
