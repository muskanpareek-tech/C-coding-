#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //system clear clrscr() or {system("cls")<- windows modern compiler}
#include<unistd.h> //sleep <windows.h>
void main()
{
//variable declaration
int choice,r,c;
int player=2;
char mark;
int win=0,count=0;
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
//password security
char original_password[10]="Radhe";
char b[10];
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
if(ch==10) //ENTER (ASCII Value)in windows=13
{
b[i]='\0';
break;
}
else if(ch==127) //backspace(ASCII value)=8
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
b[i]=ch;
printf("*");
i++;    
}    
}
}
printf("\n");
if(strcmp(original_password,b)==0)
{
printf("welcome to c language programming!\n");
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
system("clear");//clrscr()
printf("-----------PASSWORD_SECURITY------------\n");
printf("System is blocked for 30 seconds!,try again after %d seconds",k);
fflush(stdout);
sleep(1); //Sleep(1000) 1000millisecond=1second
}
j=-1;
}
}
}
//Tic Tac Toe game
while(1) //infinite loop
{
system("clear");//clear output screen
printf("--------------TIC-TAC-TOE---------------\n\n");//heading
//output
printf("%2c|%2c |%2c\n",a[0][0],a[0][1],a[0][2]);
printf("--+---+--\n");
printf("%2c|%2c |%2c\n",a[1][0],a[1][1],a[1][2]);
printf("--+---+--\n");
printf("%2c|%2c |%2c\n",a[2][0],a[2][1],a[2][2]);
player=(player%2==0)? 2:1; //ternary operator
mark=(player==1)?'X':'O'; //ternary operator 
printf("\nEnter box no.1-9:"); //user input
scanf("%d",&choice);
if(choice<1||choice>9) //invalid input
{
printf("invalid input !!! enter the number between 1-9 only\n");
sleep(1);
continue;
}
else
{
r=(choice-1)/3; //rows index
c=(choice-1)%3; //columns index
if(a[r][c]=='X'||a[r][c]=='O') //already block filled 
{
printf("Oops!already filled\n");
sleep(1);
continue; //player--; also use but continue is modular programming
}
else
{
a[r][c]=mark;
count++; //total 9 moves
//winning condition
if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]||
a[0][2]==a[1][1]&&a[1][1]==a[2][0]) //1.diagonally wins
{
win=1; 
}
else if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]||
a[1][0]==a[1][1]&&a[1][1]==a[1][2]||
a[2][0]==a[2][1]&&a[2][1]==a[2][2]) //2.rowwise wins
{
win=1;
}
else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]||
a[0][1]==a[1][1]&&a[1][1]==a[2][1]||
a[0][2]==a[1][2]&&a[1][2]==a[2][2]) //3.columnwise wins
{
win=1;
}
if(win==1) //match wins
{
system("clear");
//space logic 
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
if(a[i][j]!='X' && a[i][j]!='O')
{
a[i][j]=' '; //space logic(instead of number)
}
}
}
sleep(1);
printf("🏆congratulations!🎉🎉 player%d(%c) wins\n", player,mark);
printf("%2c|%2c |%2c\n",a[0][0],a[0][1],a[0][2]);
printf("--+---+--\n");
printf("%2c|%2c |%2c\n",a[1][0],a[1][1],a[1][2]);
printf("--+---+--\n");
printf("%2c|%2c |%2c\n",a[2][0],a[2][1],a[2][2]);
printf("\n");
getch(); //stop screen
exit(0); //game top
}
else if(count==9) //match draw
{
system("clear");
printf("Oops! MATCH WITHDRAWAL😛 \n");
sleep(1);
printf("%2c|%2c |%2c\n",a[0][0],a[0][1],a[0][2]);
printf("--+---+--\n");
printf("%2c|%2c |%2c\n",a[1][0],a[1][1],a[1][2]);
printf("--+---+--\n");
printf("%2c|%2c |%2c\n",a[2][0],a[2][1],a[2][2]);
exit(0);
}
}
player++; //next player
}
}
}
