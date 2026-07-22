#include<stdio.h>
#include<conio.h>
void main()
{
int secret_pin=2420;
int pin;
do
{
printf("enter the 4 digit value for pin no.:");
scanf("%d",&pin);
if(pin==secret_pin)
{
printf("welcome to the c coding\n");
}
else
{
printf("wrong input! enter again\n");
}
}
while(pin !=secret_pin);
getch();
}
