#include <stdio.h>

int main()
{
    int i,sum;
    int a[5];
    printf("Enter the 5 values\n");
    for (i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<=5;i++)
    {
        sum += a[i];
    }
    printf("The sum of elements is %d and it's average is %.3f",sum,(float)sum/5);
    return 0;
}