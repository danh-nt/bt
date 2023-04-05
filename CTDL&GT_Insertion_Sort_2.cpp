https://www.geeksforgeeks.org/insertion-sort/
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

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main()
{
	int n,arr[MAX];
	Nhapmang(arr,n);
	insertionSort(arr,n);
	Xuatmang(arr,n);
	return 0;
}
