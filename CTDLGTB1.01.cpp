#include<stdio.h>
#define MAX 50
 
void Nhapmang(int a[], int &n)
{
    do
    {
        printf("Nhap kich thuoc mang: ");
        scanf("%d", &n);
       
        if(n<= 0 || n > MAX)
        {
            printf("Kich thuoc mang phai tu 1-50\n");
        }
    }while(n <= 0 || n > MAX);

    for(int i=0; i<n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

int tongChan(int a[], int n)
{
    
    if(n == 0)
        return 0;
    float s = tongChan(a, n - 1);
    if(a[n - 1] % 2 == 0)
        s = s + a[n - 1];
    return s;


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
    printf("\nTong cac phan tu chan trong mang la:%d", tongChan(a,n));
    return 0;
}
