//program to understand relation operators:-
#include<stdio.h>
#include<conio.h>
int main()
{
//variable declaration: 
int a,b,c;
//user input:
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
printf("enter the third number:");
scanf("%d",&c);
//relational operators:
printf("---------comparison result(true=1)and(false=0)----------\n");
/*Equality(==)*/
printf("%d == %d is %d \n", a, b, a == b);
printf("%d == %d is %d \n", a, c, a == c);
/*greater than(>)*/
printf("%d > %d is %d \n", a, b, a > b);
printf("%d > %d is %d \n", a, c, a > c);
/*less than(<) */
printf("%d < %d is %d \n", a, b, a < b);
printf("%d < %d is %d \n", a, c, a < c);
/*Not equal to(!=)*/
printf("%d != %d is %d \n", a, b, a != b);
printf("%d != %d is %d \n", a, c, a != c);
/*Greater than or Equal to(>=)*/
printf("%d >= %d is %d \n", a, b, a >= b);
printf("%d >= %d is %d \n", a, c, a >= c);
/*Less than or Equal to(<=)*/
printf("%d <= %d is %d \n", a, b, a <= b);
printf("%d <= %d is %d \n", a, c, a <= c);
return 0;
getch();
}