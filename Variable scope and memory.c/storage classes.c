#include<stdio.h>
#include<conio.h>
extern int x=100; //global variable
void muskan()
{
static int m=0; //static variable
register int n=0;//register variable
m++;
n++;
printf("static variable m:%d \n",m);
printf("register variable n:%d\n",n);
}
void main()
{
auto int a=10;//local variable
printf("local variable a:%d\n",a);
printf("global variable x:%d\n",x);
muskan();
muskan();
getch();
}
