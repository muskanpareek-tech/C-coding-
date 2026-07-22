#include<stdio.h>
#include<conio.h>
void main ()
{
//variable declaration:-
int a=10,b=5;
/*logical AND operator*/
printf("logical AND truth table\n");
printf("| A | B | R |\n");
printf("| %d | %d | %d |\n",(a==b),(a==b),((a==b)&&(a==b)));
printf("| %d | %d | %d |\n",(a!=b),(a==b),((a!=b)&&(a==b)));
printf("| %d | %d | %d |\n",(a==b),(a!=b),((a==b)&&(a!=b)));
printf("| %d | %d | %d |\n",(a!=b),(a>=b),((a!=b)&&(a>=b)));
/*logical OR operator*/
printf("logical OR truth table\n");
printf("| A | B | R |\n");
printf("| %d | %d | %d |\n",(a==b),(a==b),((a==b)||(a==b)));
printf("| %d | %d | %d |\n",(a!=b),(a==b),((a!=b)||(a==b)));
printf("| %d | %d | %d |\n",(a==b),(a!=b),((a==b)||(a!=b)));
printf("| %d | %d | %d |\n",(a!=b),(a>=b),((a!=b)||(a>=b)));
/*logical NOT operator*/
printf("logical NOT truth table\n");
printf("| A | R |\n");
printf("| %d | %d |\n",(a==b),!(a==b));
printf("| %d | %d |\n",(a!=b),!(a==b));
getch();
}
