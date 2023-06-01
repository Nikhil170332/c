//run time initialization

#include <stdio.h>

int main()
{
    int i;
    int a[5];
    printf("Enter the 5 values\n");
    for (i=1;i<=5;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<=5;i++)
    {
        printf("Element %d is %d\t",i,a[i]);
    }
    return 0;
}