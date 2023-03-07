#include<stdio.h>
#include<conio.h>

struct HOPSUA
{
    char nhan[20];
    int trongluong;
    int ngay;
};
void nhap(struct HOPSUA *a)
{
    printf("nhap nhan hieu: ");
    scanf("%s", &a->nhan);
    printf("nhap trong luong: ");
    scanf("%d", &a->trongluong);
    printf("nhap ngay: ");
    scanf("%d",&a->ngay);
}
void xuat(struct HOPSUA a)
{
    printf("nhan hieu: %s\ntrong luong: %d\n ngay: %d", a.nhan, a.trongluong, a.ngay);
}
int main()
{
    struct HOPSUA a;
    nhap(&a);
    xuat(a);
    return 0
}