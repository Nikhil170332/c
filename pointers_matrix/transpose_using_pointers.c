#include <stdio.h>
#define R 3
#define C 3

int matrix(int a[R][C])
{
    int i,j,b[R][C];
    printf("Enter elements for matrix\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Before swapping rows and columns of matrix\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d  ",*(*(a+i)+j));
        }
        printf("\n");
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            b[i][j] = *(*(a+j)+i);
        }
    }
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            *(*(a+i)+j) = b[i][j];
        }
    }
}

int main()
{
    int a[R][C],i,j;
    if(R==C){
        matrix(a);
        printf("After the swapping rows and columns\n");
        for(i=0;i<R;i++)
        {
            for(j=0;j<C;j++)
            {
                printf("%d  ",a[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Product of matrix is not possible due to unequal rows and columns\nPlease check no of rows and columns\n");
    }
    return 0;
}