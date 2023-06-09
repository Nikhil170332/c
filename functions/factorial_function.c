#include <stdio.h>

int factorial(int n)
{
    int re;
    if (n==1 | n==0)
    {
        return 1;
    }
    else
    {
        re = n*factorial(n-1);
        return re;
    }
}

int main()
{
    int n,result;
    printf("Enter number\n");
    scanf("%d",&n);
    result = factorial(n);
    printf("factorial of %d is  %d",n,result);
    return 0;
}