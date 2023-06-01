#include <stdio.h>

int main()
{
    int i;
    int a[15];
    for (i=1;i<=15;i++)
        if (i<6)
            a[i]=0;
        else if(i>=6 && i<11)
            a[i]=1;
        else
            a[i] = i;
    printf("Elements of array:\n");
    for (i=1;i<=15;i++)
        printf("%d\t",a[i]);
    return 0;
}