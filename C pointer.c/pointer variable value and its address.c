#include<stdio.h>
#include<conio.h>
void main()
{
int a;
int *p;
int **q;
p=&a;
q=&p;
printf("enter the number for a:");
scanf("%d",&a);
printf("memory address of a:%u\n",&a);
printf("value of pointer p:%u\n",p);
printf("value at pointer p:%d\n",*p);
printf("\n");

*p=20;
printf("*p=20 then,the value of a:%d\n",a);
printf("memory address of a:%u\n",&a);
printf("value of pointer p:%p\n",p);
printf("value at pointer p:%d\n",*p);
getch();
}
