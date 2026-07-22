#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20];
int length;
printf("enter the name:");
gets(name);
length=strlen(name);
printf("length of name:%d \n", length);
printf("size of name :%d \n", sizeof(name));
printf("size of length:%d \n", sizeof(length));
getch();
}
