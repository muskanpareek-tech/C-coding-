#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char string1[20];
char string2[20];
printf("enter the string1:");
gets(string1);
printf("enter the string2:");
gets(string2);
printf("\nstring1:%s\n", string1);
printf("string2:%s\n", string2);
strcat(string2,string1);
printf("\nreturn value destination after concatenates(join):%s\n", string2);
getch();
}