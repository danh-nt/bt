#include<stdio.h>

float Tinh(float x, int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return x;
	return  (1 + x/n) * Tinh(x, n - 1) - (x/n) * Tinh(x, n - 2);
	
 } 
int main()
{
	float x;
	int n;
	printf("nhap x va n:");
	scanf("%d%d",&x,&n);
	float kq = Tinh(x,n);
	printf("ket qua la %f", kq);
	return 0; 
 } 
