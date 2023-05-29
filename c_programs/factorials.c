#include <stdio.h>

int main()
{
    int i,n,fact =1,rem;
    printf("Enter the number to find factorial:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        rem = n-i;
        fact = fact * rem;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}
