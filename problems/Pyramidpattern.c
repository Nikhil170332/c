#include <stdio.h>

int main()
{
    int i,j,limit,s,space;
    printf("Enter the range of characters to print:");
    scanf("%d",&limit);
    space = limit;
    for (i=1;i<limit+1;i++)
    {
        for (s=space;s>=1;s--)
        {
            printf(" ");
        }
        for (j=1;j<i+1;j++)
        {
            printf("* ");
        }
        space = space-1;
        printf("\n");
    }
    return 0;
}