

#include<stdio.h>
#include<conio.h>

struct Honso
{
    int tu,mau,nguyen;
};

void nhap(struct Honso *hs)
{
    printf("nhap phan nguyen: ");
    scanf("%d", &hs->nguyen);
    printf("nhap tu so: ");
    scanf("%d", &hs->tu);

    do
    {
        printf("nhap mau so: ");
        scanf("%d", &hs->mau);

        if(hs->mau == 0)
        {
            printf("\nMau so phai khac 0. Xin kiem tra lai !");
        }
    }while(hs->mau == 0);
}

void xuat(struct Honso hs)
{
    printf("%d\t%d/%d", hs.nguyen, hs.tu, hs.mau);
}
int main()
{
    struct Honso hs;
    nhap(&hs);
    xuat(hs);

    

    getch();
    return 0;
}

