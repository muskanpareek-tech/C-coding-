#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
char aname[20],bname[20],cname[20];
printf("enter the aname:");
scanf("%s",&aname);
printf("enter the bname:");
scanf("%s",&bname);
printf("enter the cname:");
scanf("%s",&cname);
printf("enter the first no.a:");
scanf("%d",&a);
printf("enter the second no.b:");
scanf("%d",&b);
printf("enter the third no.c:");
scanf("%d",&c);
if((a>b)&&(a>c))
{
printf("%s secured the first rank,scoring %d marks in the class\n",aname,a);
}
else if((b>a)&&(b>c))
{
printf("%s secured the first rank,scoring %d marks in the class\n",bname,b);
}
else if((c>a)&&(c>b))
{
printf("%s secured the first rank,scoring %d marks in the class\n",cname,c);
}
if((a<b&&a>c)||(a>b&&a<c))
{
printf("%s secured the second rank,scoring %d marks in the class\n",aname,a);
}
else if((b<a&&b>c)||(b>a&&b<c))
{
printf("%s secured the second rank,scoring %d marks in the class\n",bname,b);
}
else if((c<a&&c>b)||(c>a&&c<b))
{ 
printf("%s secured the second rank,scoring %d marks in the class\n",cname,c);
}
if((a<b)&&(a<c))
{
printf("%s secured the third rank, scoring %d marks in the class\n",aname,a);
}
else if((b<a)&&(b<c))
{
printf("%s secured the third rank, scoring %d marks in the class\n",bname,b);
}
else if((c<a)&&(c<b))
{
printf("%s secured the third rank, scoring %d marks in the class\n",cname,c);
}
getch();
}