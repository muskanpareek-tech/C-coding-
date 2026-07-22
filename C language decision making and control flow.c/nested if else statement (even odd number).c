#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
printf("enter the first number:");
scanf("%d",&a);
if(a>=0)
{
if(a%2==0)
{
printf("%d is even",a);
}
else 
{
printf("%d is odd",a);
}
}
else
{
if(a%2==0)
{
printf("%d is even(negative)",a);
}
else 
{
printf("%d is odd(negative)",a);
}
}
getch();
}
