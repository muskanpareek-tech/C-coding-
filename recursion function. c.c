#include<stdio.h>
#include<conio.h>
void recursion(int n)
{
if(n<=10)
{
printf("%d ",n);
recursion(n+1);
}
}
void main()
{
recursion(1);
getch();
}