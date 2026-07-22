#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char string1[20];
char string2[20];
int cmp;
printf("enter the string1:");
gets(string1);
printf("enter the string2:");
gets(string2);
if(strlen(string1)==strlen(string2)) // checking equal length 
{
cmp=strcmp(string1,string2);
printf("something difference:%d \n",cmp);
if(cmp==0)  //lexicography(checking char to char)
{
printf("both the strings are identically same");
}
else
{
printf("both the strings are not identically same");
}
}
else
{
printf("both the strings have unequal length");
}
getch();
}