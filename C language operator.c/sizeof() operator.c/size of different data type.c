#include<stdio.h>
#include<conio.h>
#include<string.h>
void main ()
{
/*variable declaratio*/
char name[12];
int age;
long int mobile;
float salary;
printf("enter your name=");
gets (name);
printf("size of name:%d\n",sizeof(name));
printf("enter your age=");
scanf("%d",&age);
printf("size of age:%d\n",sizeof(age));
printf("enter your mobile number=");
scanf("%ld",&mobile);
printf("size of mobile number:%d\n",sizeof(mobile));
printf("enter your salary=");
scanf("%f",&salary);
printf("size of salary:%d\n",sizeof(salary));
getch();
}
