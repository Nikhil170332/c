#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);
    if (a>b && a>c)
        printf("%d is largest number",a);
    else if(b>c)
        printf("%d is largest number",b);
    else
        printf("%d is largest number",c);
    return 0;
}
