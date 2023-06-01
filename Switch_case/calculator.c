#include <stdio.h>

int main()
{
    char op;
    float a,b,result = 0.0;
    printf("Please Enter expression like\n Examples: 34+26 or 34-26 \n choose operator from '+','-','*','/'\n");
    printf("Enter the expression of arithmetic:");
    scanf("%f%c%f",&a,&op,&b);
    switch (op)
    {
        case '+':
            printf("The addition of %.1f and %.1f is %.1f",a,b,a+b);
            break;
        case '-':
            printf("The subtraction of %.1f and %.1f is %.1f",a,b,a-b);
            break;
        case '*':
            printf("The product of %.1f and %.1f is %.1f",a,b,a*b);
            break;
        case '/':
            printf("The division of %.1f and %.1f is %.1f",a,b,a/b);
            break;
        default:
            printf("Please enter the expression carefullly");
    }
    
    return 0;
}