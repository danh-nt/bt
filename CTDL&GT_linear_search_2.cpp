//https://www.geeksforgeeks.org/linear-search/
// C code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1

#include <stdio.h>
#define MAX 100
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
int search(int arr[], int n, int x)
{
	int i;
	for (i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

// Driver code
int main(void)
{
	int n,x,arr[MAX];
	Nhapmang(arr,n);
	printf("nhap x can tim: ");
	scanf("%d",&x);
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	int result = search(arr, n, x);
	(result == -1)
		? printf("Element is not present in array")
		: printf("Element is present at index %d", result);
	return 0;
}
