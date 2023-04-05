//https://www.geeksforgeeks.org/selection-sort
// C program for implementation of selection sort
#include <stdio.h>
#define MAX 100
#include<stdio.h>
void Nhapmang(int arr[], int &n)
{
    do
    {
        printf("Nhap kich thuoc mang: ");
        scanf("%d", &n);
       
        if(n<= 0 || n > MAX)
        {
            printf("Kich thuoc mang phai tu 1-100\n");
        }
    }while(n <= 0 || n > MAX);

    for(int i=0; i<n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}
void Xuatmang(int arr[], int n)
{
	printf("\nMang sau khi xep la:");
    for(int i=0; i<n; i++)
    {
        printf("\t%d", arr[i]);
    }
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	// One by one move boundary of unsorted subarray
	for (i = 0; i < n-1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		// Swap the found minimum element with the first element
			int temp =arr[min_idx];
			arr[min_idx] = arr[i];
			arr[i] = temp;
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int main()
{
	int n, arr[MAX];
	Nhapmang(arr,n);
	int b = sizeof(arr)/sizeof(arr[0]);
	selectionSort(arr, n);
	Xuatmang(arr,n);
	return 0;
}
