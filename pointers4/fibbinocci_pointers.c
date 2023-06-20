#include <stdio.h>
#include <stdlib.h>

int fibbi(int n, int *f)
{
    int i;
    *f=0;
    *(f+1)=1;
    for(i=2;i<n;i++)
    {
        *(f+i) = *(f+i-2) + *(f+i-1);
    }
    
}

int main()
{
    int n,i;
    printf("Enter number of fibbinocci series want\n");
    scanf("%d",&n);
    int *f = (int*) malloc(n*sizeof(int));
    fibbi(n,f);
    printf("The Fibonacci series is ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(f + i));
    }
    
    free(f);
    return 0;
}