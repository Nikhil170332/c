#include <stdio.h>

int main()
{
    int a[3][3],i,j,b[3][3];
    int result[3][3],k,temp;
    printf("Enter the values for 3x3 matrices\n");
    printf("Enter the Matrix A elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for row:%d,column:%d ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Matrix B elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for row:%d,column:%d ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nmatrix A\t\tMatrix B\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\t\t");
        for(j=0;j<3;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp=0;
            for (k=0;k<3;k++)
            {
                temp = a[i][k]*b[k][j] + temp;    
            }
            result[i][j] = temp;
        }
    }
    printf("Product of 2 matrices is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}