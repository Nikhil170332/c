#include <stdio.h>

int main()
{
    int i,j,limit;
    printf("Enter the range of characters to print:");
    scanf("%d",&limit);
    for (i=1;i<limit+1;i++)
    {
        for (j=1;j<i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}