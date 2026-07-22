#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
//variable declaration:-
int Rollno,FOC,FOM,Cprogram,DL,Eng, total, percentage;
char Name[15];
//user inputs:-
printf("Enter the Name:");
gets(Name);
printf("Enter the Roll number:");
scanf("%d",&Rollno);
printf("Enter the Marks for FOC:");
scanf("%d",&FOC);
printf("Enter the Marks for Mathematics:");
scanf("%d",&FOM);
printf("Enter the Cprogramming:");
scanf("%d",& Cprogram);
printf("Enter the Digital Logic:");
scanf("%d",&DL);
printf("Enter the English:");
scanf("%d",&Eng);
printf("\n");
printf("-------------------output------------------------------\n");
printf("-------------------------------------------------------\n");
printf("Student's Name:%s \n",Name);
printf("student's Rollno.:%d \n",Rollno);
printf("-------------------------------------------------------\n");
printf("Subject    Maximum Marks  Minimum Marks  Obtained Marks\n");
printf("FOC              100             35         %d\n",FOC);
printf("Mathematics      100             35         %d\n",FOM);
printf("C programming    100             35         %d\n",Cprogram);
printf("Digital Log      100             35         %d\n",DL);
printf("English          100             35         %d\n",Eng);
printf("-------------total and percentage----------------------\n");
total=FOC+FOM+Cprogram+DL+Eng;
percentage=total/5;
printf("                                        total=%d\n",total);
printf("                              percentage=%d\n",percentage);
printf("-------------------------------------------------------\n");
getch();
return 0;
}
