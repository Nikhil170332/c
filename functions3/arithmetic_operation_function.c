#include <stdio.h>

int add(float a, float b)
{
    printf("The Addition of numbers %.2f & %.2f is %.2f",a,b,(a+b));
}

int sub(float a, float b)
{
    printf("The subtraction of numbers %.2f & %.2f is %.2f",a,b,(a-b));
}

int mul(float a, float b)
{
    printf("The multiplication of numbers %.2f & %.2f is %.2f",a,b,(a*b));
}

int divi(float a, float b)
{
    if(a!=0.0)
        printf("The division of numbers %.2f & %.2f is %.2f",a,b,(a/b));
    else
        printf("Numerator or first number must be greater than 0");
}

int main()
{
    char option;
    float a,b;
    printf("a) ADD\tb) SUBTRACT\tc) MULTIPLY\td) DIVISION\n");
    printf("Enter a option to perform task\n");
    scanf("%c",&option);
    printf("Enter 2 numbers\n");
    scanf("%f %f",&a,&b);
    switch(option)
    {
        case 'a': 
            add(a,b);
            break;
        case 'b':
            sub(a,b);
            break;
        case 'c': 
            mul(a,b);
            break;
        case 'd':
            divi(a,b);
            break;
        default:
            printf("Choose option carefully");
    }
    return 0;
}