#include <stdio.h>

int digit_sum(int n)
{
    int sum =0,quo=0;
    while (n!=0)
    {
        sum = sum + n%10;
        quo = n/10;
        n= quo;
    }
    return sum;
}

int main()
{
    int n,result;
    printf("Enter number\n");
    scanf("%d",&n);
    result = digit_sum(n);
    printf("sum of digits of number %d is  %d",n,result);
    return 0;
}