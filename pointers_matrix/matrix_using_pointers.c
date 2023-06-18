#include <stdio.h>
#define R 3
#define C 3

int matrix(int arr[3][3])
{
    int i,j;
    printf("Enter 9 matrix elements\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The matrix is\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d  ",*(*(arr+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int arr[R][C],i,j;
    
    matrix(arr);
    return 0;
}