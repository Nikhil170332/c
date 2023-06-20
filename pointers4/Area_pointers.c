#include <stdio.h>
#define PI 3.14

float area(float *area,char option)
{
    if(option=='a'){
        float h,b;
        printf("Enter Height and Base of Triangle\n");
        scanf("%f %f",&h,&b);
        *area = (0.5)*h*b;
    }
    else if(option=='b'){
        float l,b;
        printf("Enter length and breadth of Rectangle\n");
        scanf("%f %f",&l,&b);
        *area = l*b;
    }
    else if(option == 'c'){
        float r;
        printf("Enter the radius of Circle\n");
        scanf("%f",&r);
        *area = PI*r*r;
    }
    else{
        printf("choose option carefully\n");
    }
}


int main()
{
    float area;
    char option;
    printf("a)Triangle\tb)Rectangle\tc)Circle\n");
    printf("Choose one option on above\n");
    scanf(" %c",&option);
    area(&area,option);
    printf("The area is %.2f",area);
    return 0;
}