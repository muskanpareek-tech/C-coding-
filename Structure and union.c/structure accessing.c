#include<stdio.h>
#include<conio.h>
struct employee //global structure datatype 
{
float salary;
int age;
char name[20];
char city[20];
};
void main()
{
struct employee e;
//user input 
printf("Employee's detail \n");
printf("Enter the Name:");
gets(e.name);
printf("Enter the City:");
gets(e.city);
printf("Enter the Age:");
scanf("%d",&e.age);
printf("Enter the salary:");
scanf("%f",&e.salary);
printf("\n\n");
//output 
printf("Employee's Name:%s\n",e.name);
printf("Employee's Destination:%s\n",e.city);
printf("Employee's Age:%d\n",e.age);
printf("Employee's Salary:%0.2f\n",e.salary);
//- shows that left alignment
printf("------------------------------------------------------\n");
printf("|%-20s|%-20s|%-5s|%15s|\n","Name","City","Age","Salary");
printf("------------------------------------------------------\n");
printf("|%-20s|%-20s|%-5d|%15.2f|\n",e.name,e.city,e.age,e.salary);
printf("------------------------------------------------------\n");
getch();
}
