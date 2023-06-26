//Designated Intialization

#include <stdio.h>

struct triangle
{
    float h;
    float b;
}area;


int main()
{
    float height,base;
    printf("Enter the Height and Base of triangle\n");
    scanf("%f%f",&height,&base);
    
    struct triangle area = {.b = base, .h = height};
    
    printf("Area of Triangle is %.2f",(0.5*area.h*area.b));
    return 0;
}