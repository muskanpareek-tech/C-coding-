#include<stdio.h>
#include<conio.h>
struct book   //global structure
{
 float price; 
 int publication_year;
 char book_name[30];
 char author[20];
};
void main()  
{
 struct book b[5];//array of structure
 int i;
 //input
 for(i=0;i<5;i++)
 {
  printf("book's name:");
  gets(b[i].book_name);
  printf("author's name:");
  gets(b[i].author);
  printf("publication year:");
  scanf("%d",&b[i].publication_year);
  printf("book's price:");
  scanf("%f",&b[i].price);
  getchar(); //for buffer cleaning
  printf("\n");
 }
 //table format output
 /*1.LEFT ALIGNMENT: Using '-' (like %-30s) to start the text from the left side.
   2.PERFECT GRID: Matching the number of dashes (---) with the format size (30, 20) so the table stays straight.
   3.DATABASE LOOK: Printing the border line inside the loop to create a box around every record (MySQL style).*/
 printf("------------------------------------------BOOKS RECORD------------------------------------\n");
 printf("+------------------------------+--------------------+--------------------+--------------------+\n");
 printf("|%-30s|%-20s|%-20s|%20s|\n","BOOK","AUTHOR","PUBLICATION YEAR","PRICE");
 printf("+------------------------------+--------------------+--------------------+--------------------+\n");
 for(i=0;i<5;i++)
 {
 printf("|%-30s|%-20s|%-20d|%20.2f|\n",b[i].book_name,b[i].author,b[i].publication_year,b[i].price);
 printf("+------------------------------+--------------------+--------------------+--------------------+\n");
 }
getch();
}