#include <stdio.h>

int main()
{
    int n[3][3],i,j;
    int sum=0,row_sum=0,column_sum=0;
    int diagonal=0;
    printf("Enter the values for 3x3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for row:%d,column:%d ",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    printf("matrix elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",n[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<3;i++)
    {
        row_sum =0;
        column_sum =0;
        for(j=0;j<3;j++)
        {
            sum = sum + n[i][j];
            row_sum = row_sum+ n[i][j];
            column_sum = column_sum + n[j][i];
            if (i==j)
                diagonal = n[i][j]+ diagonal;
        }
        printf("sum of %dst row elements is %d\t",i+1,row_sum);
        printf("sum of %dst column elements is %d\n",i+1,column_sum);
    }
    printf("\n");
    printf("Sum of diagonal elements is %d\n",diagonal);
    printf("sum of all elements of matrix is %d",sum);
    return 0;
}