#include<stdio.h>
#include<conio.h>
void main()
{
//variable declaration 
/*for no. storage*/
int num;
int original_num;
int original_val;
/*for calculation*/
int power;
int reminder;
int i;
long long sum,term;
//user input:-
printf("enter the number:");
scanf("%d",&num);
original_num=num;
original_val=original_num;
power=0;
sum=0;
//Loop to calculate digit in number(power)
while(num!=0)
{
num=num/10;
power++;
}
printf("total digit (power) is %d\n", power);
//loop to calculate reminder 
while(original_num!=0)
{
reminder=original_num%10;
term=1;
//loop to calculate terms
for(i=0;i<power;i++)
{
term*=reminder;
}
printf("%lld",term);
//final sum 
sum+=term;
original_num/=10;
if(original_num!=0)
{
printf("+");
}
}
printf("=%lld \n",sum);
//final comparison 
if(sum==original_val)
{
printf("%d is ARMSTRONG NO.",original_val);
}
else
{
printf("%d is not a ARMSTRONG NO.",original_val);
}
getch();
}
