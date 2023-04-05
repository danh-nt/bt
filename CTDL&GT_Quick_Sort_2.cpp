https://www.geeksforgeeks.org/quick-sort/
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
	printf("\nMang vua nhap la:");
    for(int i=0; i<n; i++)
    {
        printf("\t%d", arr[i]);
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);
  
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
          int t = arr[i];
          arr[i]=arr[j];
          arr[j]=t;
        }
    }
    int g=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=g;
    return (i + 1);
}
 
// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
	int n, arr[MAX];
	Nhapmang(arr,n);
	int b = sizeof(arr) / sizeof(arr[0]);
	quickSort(arr,0,n-1);
	Xuatmang(arr,n);
}
