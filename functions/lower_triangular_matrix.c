#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r,c,i,j,sum_lower=0;
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
                printf("Enter the %dX%d element:",i+1,j+1);
                scanf("%d",&n[i][j]);
            }
        }
    }
    else
    {
        printf("For given number of rows and columns, It is not possible to create Triangular matrix");
        exit (0);
    }
    printf("\nMatrix created by given your elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d  ",n[i][j]);
        }
        printf("\n");
    }
    printf("\nLower traingular Matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(i>=j)
            {
                printf("%d  ",n[i][j]);
                sum_lower = sum_lower + n[i][j];
            }
            else
            {
                printf("0  ");
            }
        }
        printf("\n");
    }
    printf("\nsum of elements of lower triangular matrix is %d",sum_lower);
    return 0;
}