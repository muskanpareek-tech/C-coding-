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
printf("\n");
printf("value of pointer p:%u\n",p);
printf("value at pointer p:%d\n",*p);
printf("memory address of pointer p:%u\n",&p);
printf("\n");
printf("value of double pointer q:%u\n",q);
printf("value at double pointer q:%d\n",**q);
printf("memory address of double pointer q:%p\n",&q);
printf("\n");
getch();
}