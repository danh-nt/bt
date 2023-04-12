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

void swap(int *a, int *b)
{
	int tg=*a;
	*a=*b;
	*b=tg; 
 } 

void heapify(int arr[], int n, int i)
{

    int largest = i;
 
    int left = 2 * i + 1;

    int right = 2 * i + 2;
 
    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
 
        largest = left;
 
    if (right < n && arr[right] > arr[largest])
 
        largest = right;

    if (largest != i) {
 
        swap(&arr[i], &arr[largest]);

        heapify(arr, n, largest);
    }
}
 
// Main function to do heap sort
void heapSort(int arr[], int n)
{
 
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
 
        heapify(arr, n, i);
        
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
 
        swap(&arr[0], &arr[i]);

        heapify(arr, i, 0);
    }
}
int main()
{
	int n, arr[MAX]; 
	Nhapmang(arr,n); 
	heapSort(arr,n); 
	Xuatmang(arr,n); 
 } 
