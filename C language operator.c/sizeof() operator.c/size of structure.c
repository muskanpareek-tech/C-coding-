#include<stdio.h>
struct Test
{
    int z;
    char x;
    char y;

};
struct Test t={'a','b',10};
int main()
{
//struct Test t={'a','b',10};
int size=sizeof(struct Test);
printf("The size of struct Test is: %d bytes\n", size);
return 0;
}
