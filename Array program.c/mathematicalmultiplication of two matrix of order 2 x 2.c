//multidimensional 2d array multipliaction 
#include<stdio.h>
#include<conio.h>
void main()
{
//variable declaration 
int i,j,k;
int a[2][2],b[2][2],c[2][2];
//inputs for a and b matrix;
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
for(j=0;j<2;j++)
{
for(k=0;k<2;k++)
{
printf("b[%d][%d]:",j,k);
scanf("%d",&b[j][k]);
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
for(j=0;j<2;j++)
{
printf("|");
for(k=0;k<2;k++)
{
printf("%d ",b[j][k]);
}
printf("|");
printf("\n");
}
//multiplication of two matrix:-
//c matrix 
printf("multipliaction of two matrix:-\n");
//c matrix initialisation and concept of multiplication of two matrix:
for(i=0;i<2;i++)
{
for(k=0;k<2;k++)
{
c[i][k]=0;
for(j=0;j<2;j++)
{
c[i][k]+=a[i][j]*b[j][k];//c[i][k]=c[i][k]+a[i][j]*b[j][k]
}
}
//a[i][j]*b[j][k]=c[i][k]
printf("|");
for(k=0;k<2;k++)
{
printf("%d ",c[i][k]);
}
printf("|");
printf("\n");
getch();
}
}
