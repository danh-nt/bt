//https://www.iostream.vn/giai-thuat-lap-trinh/interchange-sort-pn9gT1
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
void interchangeSort(int arr[], int n)
{
    for (int i = 0; i < n-1 ; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
	int arr[MAX],x,n;
	Nhapmang(arr,n);
	interchangeSort(arr,n);
	Xuatmang(arr,n);
	return 0;
}
