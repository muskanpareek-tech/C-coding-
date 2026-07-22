#include<stdio.h>
#include<conio.h>
void recursion(int n)
{
if(n<=10)
{
recursion(n+1);
printf("%d ",n);
}
}
void main()
{
recursion(1);
getch();
}