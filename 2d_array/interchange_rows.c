#include <stdio.h>

int main()
{
    int a[3][3],i,j;
    int r1,r2,temp[3];
    printf("Enter the values for 3x3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for row:%d,column:%d ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix 'A'\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n\n");
    }
    printf("Enter the 2 rows to be interchanged\n");
    scanf(" %d %d",&r1,&r2);
    for(i=0;i<3;i++)
    {
        temp[i] = a[r1-1][i];
        a[r1-1][i] = a[r2-1][i];
        a[r2-1][i] = temp[i];
    }
    printf("After interchanging rows\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}