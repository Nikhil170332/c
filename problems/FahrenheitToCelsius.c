#include <stdio.h>

int main()
{
    float fh,ce;
    printf("Now converting fahrenheit to celsius\nEnter the fahrenheit temperature:");
    scanf("%f",&fh);
    ce = (fh - 32)*5/9;
    printf("The celsius temperature is %f",ce);
    return 0;
}