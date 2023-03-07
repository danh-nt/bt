#include<stdio.h>
#include<conio.h>

struct diem3
{
    float x, y, z;
};
void nhap(struct diem3 *a)
{
    printf("nhap toa do x: ");
    scanf("%f", &a->x);
    printf("nhap toa do y: ");
    scanf("%f", &a->y);
    printf("nhap toa do z: ");
    scanf("%f", &a->z);
}
void xuat(struct diem3 a)
{
    printf("(%f;%f;%f)",a.x, a.y, a.z);
}
int main()
{
    struct diem3 a;
    nhap(&a);
    xuat(a);
    return 0

}