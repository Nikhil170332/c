#include <stdio.h>

int main()
{
    int number,even_result = 0,odd_result = 0,i;
    printf("enter the 10 numbers one by one:\n");
    for(i=0;i<10;i++)
    {
        printf("Enter the %d number",i+1);
        scanf("%d",&number);
        if (number%2==0)
            even_result = number + even_result;
        else
            odd_result = number + odd_result;
    }
    printf("The sum of odd numbers is %d\n",odd_result);
    printf("the sum of even numbers is %d",even_result);
    return 0;
}