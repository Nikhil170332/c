#include <stdio.h>

int main()
{
    int a[2][2],i,j;
    for (i=0;i<=1;i++)
    {
        for (j=0;j<=1;j++)
            scanf("%d",&a[i][j]);
    }
    printf("\nThe 2D array elements are\n");
    for (i=0;i<=1;i++)
    {
        for (j=0;j<=1;j++)
            printf("%d\t",a[i][j]);
        printf("\n\n");
    }
    return 0;
}