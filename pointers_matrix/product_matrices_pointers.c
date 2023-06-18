#include <stdio.h>
#define R 3
#define C 3

int matrix(int a[R][C],int b[R][C])
{
    int i,j,t,k,result[R][C];
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
            t=0;
            for (k=0;k<R;k++)
            {
                t = *(*(a+i)+k)*(*(*(b+k)+j)) + t;    
            }
            result[i][j] = t;
        }
    }
    printf("Product of matrices is\n");
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d  ",*(*(result+i)+j));
        }
        printf("\n");
    }
}

int main()
{
    int a[R][C],b[R][C],i,j;
    if(R==C){
        matrix(a,b);
    }
    else{
        printf("Product of matrix is not possible due to unequal rows and columns\nPlease check no of rows and columns\n");
    }
    
    return 0;
}