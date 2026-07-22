//performing arithmetic operations using pointer
#include<stdio.h>
#include<conio.h>
void arith_op(int*,int*);
void main()
{
int a,b;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
arith_op(&a,&b);
getch();
}
void arith_op(int *p,int *q)
{
printf("%d+%d=%d\n",*p,*q,*p+*q);
printf("%d-%d=%d\n",*p,*q,*p-*q);
printf("%d*%d=%d\n",*p,*q,*p**q);
if(*q!=0)
{
printf("%d/%d=%d\n",*p,*q,*p / *q);
printf("%d%%%d=%d\n",*p,*q,*p%*q);
}
else 
{
printf("Error! %d/%d undefined condition.",*p,*q);
}
}
