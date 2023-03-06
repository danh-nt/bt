#include<stdio.h>
#include<conio.h>

struct honso
{
    int tu,mau,nguyen;
};

typedef struct honso HonSo;

void nhap(HonSo);
void xuat(HonSo);

void nhap(HonSo hs)
{
    printf("nhap phan nguyen: ");
    scanf("%d", &hs.nguyen);
    printf("nhap tu so: ");
    scanf("%d", &hs.tu);

    do
    {
        printf("nhap mau so: ");
        scanf("%d", &hs.mau);

        if(hs.mau == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
    }while(hs.mau == 0);
}

void xuat(HonSo hs)
{
    printf("%d\t%d/%d", hs.nguyen, hs.tu, hs.mau);
}
int main()
{
    struct honso hs;
    nhap(hs);
    xuat(hs);

    

    getch();
    return 0;
}