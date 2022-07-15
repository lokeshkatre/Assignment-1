#include<stdio.h>
int main()
{
    char name[20];
    printf("Enter Your Name:");
    gets(name);
    printf("\"Hello,%s\"",name);
    return 0;
}