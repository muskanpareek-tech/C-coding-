#include<stdio.h>
#include<conio.h>
int main ()
{
//variable declaration:-
int a,b;
//user inputs:-
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
/*bitwise operator*/
//Bitwise AND(&) Operator:-
printf("Bitwise AND a&b:%d \n",a&b);
//Bitwise OR(|) Operator:-
printf("Bitwise AND a|b:%d \n",a|b);
//Bitwise exclusive OR(^) Operator:-
printf("Bitwise Exclusive OR a^b:%d \n",a^b);
//Bitwise left shift (<<) Operator:-
printf("Bitwise left shift a<<b:%d \n",a<<b);
//Bitwise right shift (>>) Operator:-
printf("Bitwise Right shift a>>b:%d \n",a>>b);
return 0;
getch();
}
