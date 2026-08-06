#include<stdio.h>
#include<conio.h>
struct dob
{
int day;
int month;
int year;
}d;
union student
{
    int roll_no;
    struct dob d;
    char name[30];
    char stream[6];
};
void main()
{
    union student s;
    int a,b;
    //size of union &struct
    a=sizeof(union student);
    b=sizeof(struct dob);
    printf("size of union:%d (largest member memory space sharing)\n",a);
    printf("size of struct:%d(sum of all member memory space)\n",b);
    printf("\n");
    //union member accessing 
    printf("student details\n");
    //NAME 
    printf("student's name:");
    gets(s.name);
    printf("name of student:%s\n",s.name);
    //date of birth (structure inside union)
    printf("date of birth:");
    scanf("%d/%d/%d",&s.d.day,&s.d.month,&s.d.year);
    printf("dob:%d/%d/%d\n",s.d.day,s.d.month,s.d.year);
    //ROLL NO.
    printf("roll no.:");
    scanf("%d",&s.roll_no);
    printf("roll no.:%d\n",s.roll_no);
    getchar();
    //BATCH 
    printf("batch:");
    gets(s.stream);
    printf("batch:%s\n",s.stream);
    getch();
}
