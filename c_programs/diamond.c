#include <stdio.h>

int main()
{
    int n,s,i,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i=0;i<n+1;i++)
    {
        for (s=n-i;s>0;s--)
            printf("  ");
        for (j=0;j<i;j++)
            printf("*   ");
        printf("\n");
    }
    for (i=0;i<n;i++)
    {
        for (s=0;s<i+1;s++)
            printf("  ");
        for (j=n-i-1;j>0;j--)
            printf("*   ");
        printf("\n");
    }
    return 0;
}