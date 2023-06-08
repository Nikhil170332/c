#include <stdio.h>

int main()
{
    int r,c,i,j;
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
                if(i==j)
                {
                    n[i][j]=1;
                }
                else
                {
                    n[i][j]=0;
                }
            }
        }
    }
    else
    {
        printf("For given number of rows and columns, unit matrix not possible ");
    }
    printf("\nUnit matrix for %dx%d size\n",r,c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d   ",n[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}