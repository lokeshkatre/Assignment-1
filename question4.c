#include<stdio.h>
int main()
{
    float rad,area;
    printf("Enter radius of circle:");
    scanf("%f",&rad);
    area=rad*rad*3.14;
    printf("Area of circle is %f of radius %f.",area,rad);
    return 0;
}