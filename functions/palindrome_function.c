#include <stdio.h>

int palindrome(int n)
{
    int quo=0,reverse=0;
    while (n!=0)
    {
        reverse = n%10 + reverse*10;
        quo = n/10;
        n= quo;
    }
    return reverse;
}

int main()
{
    int n,result;
    printf("Enter number\n");
    scanf("%d",&n);
    result = palindrome(n);
    if(result == n)
    {
        printf("Given number %d is plaindrome",n);
    }
    else
    {
        printf("Given number %d is not plaindrome",n);
    }
    return 0;
}