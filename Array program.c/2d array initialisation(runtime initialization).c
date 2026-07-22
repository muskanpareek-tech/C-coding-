//runtime initialization;
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int a[3][3];
printf("runtime initialization:-\n");
printf("input\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
//output
printf("output\n"); 
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d]:%d\n",i,j,a[i][j]);
}
}
getch();
}
