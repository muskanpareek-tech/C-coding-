#include<stdio.h>
#include<conio.h>
void main()
{
int i,a;
printf("enter the value for a:");
scanf("%d",&a);
i=1;
do
{
printf("%d X %d = %d \n",a,i,a*i);
i++;
}
while(i<=10);
getch();
}