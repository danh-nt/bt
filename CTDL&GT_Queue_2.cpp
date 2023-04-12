#include <stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void del();
void display();

int queue_array[MAX];
int rear = - 1;
int front = - 1;
void nhapmang(int queue_array[],int n)
{
	for(int i=0; i<n; i++)
	{
		printf("nhap a[%d]", i);
		scanf("%d", &queue_array[i]);
	}
 } 
int main()
{
int choice;
while (1)
{
printf("1.them gia tri vao queue \n");
printf("2.xoa phan tu \n");
printf("3.xuat queue \n");
printf("4.Quit \n");
printf("nhap lua chon : ");
scanf("%d", &choice);
switch(choice)
{
case 1:
insert();
break;
case 2:
del();
break;
case 3:
display();
break;
case 4:
exit(1);
default:
printf("Wrong choice \n");
}
}
}
void insert()
{
int item;
if(rear == MAX - 1)
printf("Queue Overflow \n");
else
{
if(front== - 1)
front = 0;


printf("them gia tri vao queue : ");
scanf("%d", &item); 
rear = rear + 1;
queue_array[rear] = item;

}
}
void del()
{
	int item;
	 
if(front == - 1 || front > rear)
{
printf("Queue Underflow \n");
return;
}
else
{
printf("so phan tu muon xoa : ");
scanf("%d", &item); 
for(int i=0;i<item;i++){

queue_array[front];
front = front + 1;
}
}
}

void display()
{
int i;
if(front == - 1)
printf("Queue trong \n");
else
{
printf("Queue : \n");
for(i = front; i <= rear; i++)
printf("%d ", queue_array[i]);
printf("\n");
}
}
