#include<stdio.h>
#include<conio.h>
struct date //global structure datatype 
{
int day;
int month;
int year;
};
void main()
{
struct date s1;
int days[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
//user input
printf("enter today's date dd/mm/yyyy:");
scanf("%d/%d/%d",&s1.day,&s1.month,&s1.year);
//condition for leap year
if (s1.year % 4 == 0)
{
days[2] = 29;
}
//input validation
if(s1.day>days[s1.month]||s1.year<=0||s1.month<=0||s1.month>12)
{
printf("invalid date! please enter the correct date");
}
else
{
printf("today date is %02d/%02d/%d \n",s1.day,s1.month,s1.year);
s1.day++;  //next day
if(s1.day>days[s1.month]) //next month
{
s1.day=1;
s1.month++; 
}
if(s1.month>12) // new year
{
s1.month=1;
s1.year++;
printf("  Happy New Year🎉🎉🎉 \n");
}
printf("tomorrow date is %02d/%02d/%d \n",s1.day,s1.month,s1.year);
getch();
}
}