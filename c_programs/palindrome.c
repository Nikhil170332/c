#include <stdio.h>

int main()
{
    int n,temp, result = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp = n;
    while (n !=0)
    {
        result = result*10 + n%10;
        n = n/10;
    }
    printf("The return value is %d",result);
    if (result == temp)
    {
        printf(" and it is palindrome number");
    }
    else
    {
        printf(" and it is not palindrome number");
    }
    return 0;
}