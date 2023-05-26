#include <stdio.h>

int main()
{
    float b,h,area;
    printf("Enter the base of the triangle:");
    scanf("%d",&b);
    printf("Enter the height of the triangle:");
    scanf("%d",&h);
    area = 0.5*(b*h);
    printf("The area of triangle is %d",area);
}