#include <stdio.h>

int main()
{
    int i,n,sum = 0,original;
    printf("Enter the number:");
    scanf("%d",&n);
    original = n;
    printf("The divisors of %d are ",n);
    for (i=1;i<n+1;i++)
    {
        if (n%i==0)
        {
            printf("%d ",i);
            sum =i + sum;
        }
        
    }
    if (sum == original*2)
    {
        printf("\nThe %d is perfect number",original);
    }
    else
    {
        printf("\nThe %d is  not perfect number",original);
    }
    return 0;
}