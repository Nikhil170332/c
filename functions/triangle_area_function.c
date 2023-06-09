#include <stdio.h>

float area_of_triangle(float,float);

int main()
{
    float l,b,result;
    printf("Enter the length and breadth of triangle\n");
    scanf("%f%f",&l,&b);
    result = area_of_triangle(l,b);
    printf("Area of triangle is %.2f",result);
    return 0;
}

float area_of_triangle(float l,float b)
{
    return ((1.0/2.0)*l*b);
}