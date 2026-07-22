//swapping of two numbers using pointer
#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
void main()
{
int a,b;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
swap(&a,&b);
getch();
}
void swap(int *p,int *q)
{
int num=*p;
*p=*q;
*q=num;
printf("after swapping the value of a:%d \n",*p);
printf("after swapping the value of b:%d \n",*q);
}
