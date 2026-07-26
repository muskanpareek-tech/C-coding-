#include<stdio.h>
#include<conio.h>
void main()
{
FILE *fp=NULL;
fp=fopen("function.txt","w");
if(fp==NULL)
{
printf("file is not found!");
}
else
{
fputc('m',fp);
fputs("\nmuskan pareek\n",fp);
printf("data write successfully in file!");
fclose(fp);
}
getch();
}