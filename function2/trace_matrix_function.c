#include <stdio.h>
#include <stdlib.h>

int matrix(int r,int c)
{
    int n[r][c],i,j,trace=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the %dX%d element:",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",n[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if (i==j)
            {
                trace= trace +n[i][j];
            }
        }
        printf("\n");
    }
    return trace;
}

int main()
{
    int r,c,i,j,trace;
    printf("Enter the no of rows of matrix\n");
    scanf("%d",&r);
    printf("Enter the no of columns of matrix\n");
    scanf("%d",&c);
    int n[r][c];
    if (r==c)
    {
        trace = matrix(r,c);
        printf("The trace of matrix is %d",trace);
    }
    else
    {
        printf("For given number of rows and columns, It is not possible to create matrix");
        exit (0);
    }
    return 0;
}
