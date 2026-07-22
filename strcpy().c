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
printf("\nas source string1:%s\n", string1);
printf("\nas destination string2 (before copy):%s\n", string2);
strcpy(string2,string1);
printf("\nreturn value in copy functions (after copied):%s\n", string2);
getch();
}