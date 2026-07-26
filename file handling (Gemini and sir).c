#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	int c;
	fp=fopen("ankur.txt","w");
	if(fp==NULL)
	{
		printf("error --- file does not exist \n");
	}
	else
	{
		printf("----------- please enter data of your choice------------ \n");
		while((c=getchar())!='*')
		{
			fputc(c,fp);
		}
		printf("----------- data entered sucessfully ------------ \n");
		fclose(fp);
		fp=fopen("ankur.txt","r");
		printf("----------- data reading from file ------------ \n");
		while((c=fgetc(fp))!=EOF)
		{
			printf("%c",c);
		}
		printf("----------- data read sucessfully ------------ \n");
	}
	fclose(fp);
	getch();
}