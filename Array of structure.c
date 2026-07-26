#include<stdio.h>
#include<conio.h>
struct book
{
 float price; 
 int publication_year;
 char book_name[30];
 char author[20];
};
void main()
{
 struct book b[5];
 int i;
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
  getchar();
  printf("\n");
 }
 printf("----------------BOOKS RECORD-----------------");
 printf("-----------------------------------------");
 printf("|%-30s|%-20s|%-4d|%0.2f|","BOOK","AUTHOR","PUBLICATION YEAR","PRICE");
 for(i=0;i<5;i++)
 {
 printf("|%-30s|%-20s|%-4d|%0.2f|",b[i].book_name,b[i].author,b[i].publication_year,b[i].price);
 printf("-----------------------------------------");
 }
getch();
}