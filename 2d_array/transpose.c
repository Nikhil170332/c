#include <stdio.h>

int main()
{
    int a[3][3],i,j,b[3][3];
    printf("Enter the values for 3x3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for row:%d,column:%d ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements of matrix 'A'\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Transpose of matrix 'A' is matrix 'B'\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}