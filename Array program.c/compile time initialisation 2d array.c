//compile time initialization;
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int a[3][3]={1,2,3,4,5,6,7,8,9};
printf("compile time initialization:-\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d]:%d\n",i,j,a[i][j]);
}
}
getch();
}
