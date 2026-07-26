#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp=NULL;//if it is global pointer not need to give the default value null
int c;
fp=fopen("muskan.txt","w");//also use append "a" mode to save the previous data
if(fp==NULL)
{
printf("Sorry!file is not exist");
}
else
{
printf("enter the data\n");
while((c=getchar())!='*')
{
fputc(c,fp);
}
printf("file written successfully!\n");
fclose(fp);
fp=fopen("muskan.txt","r");
while((c=getc(fp))!=EOF)
{
printf("%c",c);
}
printf("\nfile read successfully!\n");
fclose(fp);
getch();
}
}