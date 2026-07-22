#include<stdio.h>
#include<conio.h>
//a,b=formal parameter & m,n=actual parameter👍
void swap(int a,int b); //function declaration
void main()
{
int m=22,n=44;
printf("value before swap m=%d and n=%d \n",m,n);
swap(m,n); //function calling
getch();
}
void swap(int a, int b) //function definition
{
int tmp;
tmp=a;
a=b;
b=tmp;
printf("value after swap m=%d and n=%d ",a,b);
getch();
}
