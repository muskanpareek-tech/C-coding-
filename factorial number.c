#include<stdio.h>
#include<conio.h>
void main()
{
int a,i;
int factorial=1;
printf("enter the value for a:");
scanf("%d",&a);
for(i=a;i>=1;i--)
{
factorial=factorial*i;
printf("%d",i);
if(i!=1)
{
printf("x");
}
}
printf(":%d", factorial);
getch();
}