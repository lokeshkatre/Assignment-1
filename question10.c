#include<stdio.h>
int main()
{
    int day,month,year;
   
    printf("Enter date in (dd:mm:yyyy) formate: \n");
    scanf("%d%d%d",&day,&month,&year);
    printf("Day-%.2d,Month-%.2d,Year-%.4d",day,month,year);
    return 0;
}