

#include<stdio.h>
#include<conio.h>

long Giaithua(int n)
{
    if(n == 0)
        return Giaithua(n+1);
    return Giaithua(n - 1)*n;
}

int main()
{
    int n, S=0;
    printf("Nhap n = "); scanf("%d", &n);

    S = Giaithua(n);
    printf("S = %d", S);

    getch();
    return 0;
}