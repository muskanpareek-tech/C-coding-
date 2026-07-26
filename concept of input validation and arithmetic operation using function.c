#include<stdio.h>
#include<conio.h>
//function declaration
int input_validation(int);
void arithmetic_operation(int,int);

//main function
void main()
{
int a,b;
int x,y;
//function calling
x=input_validation(a);
y=input_validation(b);
arithmetic_operation(x,y);
getch();
}

//function definition for input_validation
int input_validation(int num)
{
while(1)
{
printf("enter the number:");
if(scanf("%d",&num)==1)
{
break;
}
else
{
printf("Invalid input! Please enter integer value \n");
while(getchar()!='\n');
}
}
return num;
}

//function definition for arithmetic operations
void arithmetic_operation(int m,int n)
{
printf("%d+%d=%d\n",m,n,m+n);
printf("%d-%d=%d\n",m,n,m-n);
printf("%d*%d=%d\n",m,n,m*n);
if(n!=0)
{
printf("%d/%d=%d\n",m,n,m/n);
printf("%d%%%d=%d\n",m,n,m%n);
}
else 
{
printf("Error! %d/%d undefined condition.",m,n);
}
}