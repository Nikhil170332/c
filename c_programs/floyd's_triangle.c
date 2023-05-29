#include <stdio.h>

int main()
{
    int i,n,j;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i=0;i<n+1;i++)
    {
        for (j=0;j<i;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
}