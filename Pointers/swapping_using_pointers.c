#include <stdio.h>

int main()
{
    int a,b, *x, *y;
    printf("Enter 2 values\n");
    scanf("%d%d",&a,&b);
    x = &a;
    y = &b;
    printf("\nBefore swapping\n value of x is %d\n value of y is %d\n",*x,*y);
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
    printf("\nAfter swapping\n value of x is %d\n value of y is %d\n",*x,*y);
    return 0;
}
