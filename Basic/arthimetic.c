#include<stdio.h>
#include<conio.h>

int main() 
{
    int a, b, add, sub, mul, divi;
    printf("Enter the a, b values\n");
    scanf("%d",&a);
    scanf("%d",&b);
    add = a+b;
    sub = a-b;
    mul = a*b;
    divi = a/b;
    printf("\nThe sum of numbers is: %d",add);
    printf("\nThe subtraction of numbers is: %d",sub);
    printf("\nThe muliplication of numbers is: %d",mul);
    printf("\nThe division of numbers is: %d",divi);
    return 0;
    
}