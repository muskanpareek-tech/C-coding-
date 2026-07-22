#include<stdio.h>
#include<conio.h>
void main()
{
//variable declaration
int start;
int end;
int rstart;
int rend;
//user input
printf("enter the value for start:");
scanf("%d",&start);
printf("enter the value for end:");
scanf("%d",&end);
//forward counting output
printf("forward counting\n");
int i=start;
while(i<=end)
{
printf("%d  ",i);
i++;
}
printf("\n");
//reverse counting output
printf("reverse counting\n");
int j=end;
while(j>=start)
{
printf("%d  ",j);
j--;
}
printf("\n");
getch();
}