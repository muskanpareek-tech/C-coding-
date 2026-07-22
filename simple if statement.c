#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
//variable declaration
int a,b,c;
char aname[20],bname[20],cname[20];
//players name
printf("First player name:");
gets(aname);
printf("second player name:");
gets(bname);
printf("Third player name:");
gets(cname);
//players score
printf("first player's score:");
scanf("%d",&a);
printf("second player's score:");
scanf("%d",&b);
printf("third player's score:");
scanf("%d",&c);
//winner announcement
if((a>b)&&(a>c))
{
printf("Winner:%s\n",aname);
printf("Score🏅:%d\n",a);
}
if((b>a)&&(b>c))
{
printf("Winner:%s\n",bname);
printf("Score 🏅:%d\n",b);
}
if((c>a)&&(c>b))
{
printf("Winner:%s\n",cname);
printf("Score 🏅:%d\n",c);
}
getch();
} 
    