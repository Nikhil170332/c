#include <stdio.h>

int main()
{
    int r,c,i,j,trace=0;
    printf("Enter the no of rows of matrix\n");
    scanf("%d",&r);
    printf("Enter the no of columns of matrix\n");
    scanf("%d",&c);
    int n[r][c];
    if (r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("Enter element for row:%d,column:%d ",i+1,j+1);
                scanf("%d",&n[i][j]);
            }
        }
        printf("matrix elements\n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d  ",n[i][j]);
            }
            printf("\n\n");
        }
        for (i=0;i<r;i++)
        {
            for (j=0;j<c;j++)
            {
                if (i==j)
                {
                    trace= n[i][j]+trace;
                }
            }
        }
        printf("\nThe trace of given matrix is %d",trace);
    }
    else 
    {
        printf("For given number of rows and columns, Trace of the matrix not possible ");
    }
    return 0;
}
