#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the String:\n");
    gets(str);
    printf("Length of string is %d",strlen(str));
    return 0;
}