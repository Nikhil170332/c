#include<stdio.h>
#include<conio.h>

int main() 
{
    int a, b, temp;
    printf("Enter the a, b values\n");
    scanf("%d",&a);
    scanf("%d",&b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("The swapped values of a,b values are %d %d",a,b);
    return 0;
}