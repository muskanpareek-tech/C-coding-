#include<stdio.h>
#include<conio.h>
void main()
{
int a=0;
int b=1;
int next_term; 
int end;
int i;
printf("enter the no. of terms:");
scanf("%d",&end);
if(end<=0)
{
printf("invalid input❗❗❗");
}
else if(end==1)
{
printf("Fibonacci series \n %d ",a);
}
else
{
printf("Fibonacci series 😃 \n %d %d ",a,b);
for(i=0;i<=end-3;i++)
{
next_term=a+b;
a=b;
b=next_term;
printf("%d ",next_term);
}
}
getch();
}
