#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<unistd.h>
int main()
{
char original_password[10]="Radhe";
char a[10];
char ch;
int i,j;
for(j=0;j<3;j++)
{
i=0;
system("clear");
printf("-----------PASSWORD_SECURITY------------\n");
printf("Attempt %d enter the password:",j+1);
while(1)
{
ch=getch();
if(ch==10)
{
a[i]='\0';
break;
}
else if(ch==127)
{
if(i>0)
{
i--;
printf("\b \b");    
}    
} 
else
{
if(i<9)
{
a[i]=ch;
printf("*");
i++;    
}    
}
}
printf("\n");
if(strcmp(original_password,a)==0)
{
printf("welcome to c language programming!");
break;
}
else
{
if(j<2)
{
 printf("wrong password,enter again!(you have %d attempt left)\n",2-j);
 getch();
}
else
{
for(int k=30;k>=0;k--)
{
system("clear");
printf("-----------PASSWORD_SECURITY------------\n");
printf("System is blocked for 30 seconds!,try again after %d seconds",k);
fflush(stdout);
sleep(1);
}
j=-1;
}
}
}
getch();
}
