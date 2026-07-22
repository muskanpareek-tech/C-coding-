//table printing using for loop:-
#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,s,e;
printf("enter the no. to it's table:");
scanf("%d",&a);
printf("enter the starting value:");
scanf("%d",&s);
printf("enter the ending value:");
scanf("%d",&e);
printf("table of %d\n",a);
printf("_______________\n");
for(i=s;i<=e;i++)
{
printf("|%d|x|%d|=|%d|\n", to a,i,a*i);
}
printf("_______________\n");
getch();
}
