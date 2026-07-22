#include<stdio.h>
#include<conio.h>
void main()
{
char February;
int days;
printf("if this is leap year enter 1, otherwise not enter any other number:");
scanf("%c",&February);

//enter 1 means February has 29 days ("leap year") true= expression 1
//enter other number means February has 28 days("not leap year") false= expression 2

//ternary operator("conditional operator"):-
days=(February=='1')?29:28;
printf("Number of days in February:%d\n",days);
if (days==29)
printf("This is leap year😃");
else
printf("Not a leap year☹️");
getch();
}
