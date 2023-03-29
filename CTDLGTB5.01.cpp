#include<stdio.h>
#define MAX 100
 
void Nhapmang(int a[], int &n)
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
        scanf("%d", &a[i]);
    }
}

int dem(int a[], int n)
{
    
    if(n == 0)
        return 0;
    float s = dem(a, n - 1);
    if(a[n - 1] > 0|| a[n-1]==0)
        s = s + 1;
    return s;
}

void Xuatmang(int a[], int n)
{
	printf("\nMang vua nhap la:");
    for(int i=0; i<n; i++)
    {
        printf("\t%d", a[i]);
    }
}
int main()
{
    int n, a[MAX];
    Nhapmang(a,n);
    Xuatmang(a,n);

    printf("\nSo phan tu duong trong mang la:%d", dem(a,n));
    return 0;
}
