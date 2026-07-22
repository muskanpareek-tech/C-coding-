//multidimensional array transpose:
#include<stdio.h>
#include<conio.h>
void main()
{
//variable declaration 
int i,j;
int a[2][3];
//a matrix 
printf("input for matrix a[2][2]\n");
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d]:",i,j);
scanf("%d",&a[i][j]);
}
}
//output
//a matrix 
printf("output for matrix a\n"); 
for(i=0;i<2;i++)
{
printf("|");
for(j=0;j<3;j++)
{
printf("%d ",a[i][j]);
}
printf("|");
printf("\n");
}
//transpose of matrix 
printf("Transpose of matrix:-\n");
for(i=0;i<3;i++)
{
printf("|");
for(j=0;j<2;j++)
{
printf("%d ",a[j][i]);
}
printf("|");
printf("\n");
}
getch();
}
