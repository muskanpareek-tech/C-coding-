#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int num;
int i;
int prime=1;
printf("enter the no.:");
scanf("%d",&num);
if(num<=1)
{
prime=0;
}
for(i=2;i<=num/2;i++)
{
a=num%i;
if(a==0)
{
prime=0;
break;
}
}
if(prime==1)
{
printf("%d is prime no.",num);
}
else
{
printf("%d is not prime no.",num);
}
getch();
}
