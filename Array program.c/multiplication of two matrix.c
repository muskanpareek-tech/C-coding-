//multidimensional 2d array multipliaction 
#include<stdio.h>
#include<conio.h>
void main()
{
//variable declaration 
int i,j;
int a[2][2],b[2][2],c[2][2];
//a matrix 
printf("input for matrix a[2][2]\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
//b matrix 
printf("input for matrix b[2][2]\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("b[%d][%d]:",i,j);
scanf("%d",&b[i][j]);
}
}
//output
//a matrix 
printf("output for matrix a\n"); 
for(i=0;i<2;i++)
{
printf("|");
for(j=0;j<2;j++)
{
printf("%d ",a[i][j]);
}
printf("|");
printf("\n");
}
//b matrix 
printf("output for matrix b\n"); 
for(i=0;i<2;i++)
{
printf("|");
for(j=0;j<2;j++)
{
printf("%d ",b[i][j]);
}
printf("|");
printf("\n");
}
//multiplication of two matrix:-
//c matrix 
printf("multipliaction of two matrix:-\n");
for(i=0;i<2;i++)
{
printf("|");
for(j=0;j<2;j++)
{
c[i][j]=a[i][j]*b[i][j];
printf("%d ",c[i][j]);
}
printf("|");
printf("\n");
}
getch();
}
