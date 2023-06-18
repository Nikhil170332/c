#include <stdio.h>
#define R 3
#define C 3

int matrix(int a[R][C],int b[R][C])
{
    int i,j;
    printf("Enter elements for matrix A\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter elements for matrix B\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix A\t\t\tMatrix B\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d  ",*(*(a+i)+j));
        }
        printf("\t\t\t");
        for(j=0;j<C;j++)
        {
            printf("%d  ",*(*(b+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            *(*(a+i)+j) = *(*(a+i)+j) + *(*(b+i)+j);
        }
    }
    
}

int main()
{
    int a[R][C],b[R][C],i,j;
    matrix(a,b);
    printf("Addition of matrices is \n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}