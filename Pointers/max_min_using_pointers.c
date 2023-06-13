#include <stdio.h>

int main()
{
    int a,b, *ptr1,*ptr2;
    printf("Enter a,b values \n");
    scanf("%d%d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    if (*ptr1>*ptr2)
    {
        printf("Maximum value is %d\n",*ptr1);
        printf("Minimum value is %d",*ptr2);
    }
    else
    {
        printf("Maximum value is %d\n",*ptr2);
        printf("Minimum value is %d",*ptr1);
    }
    return 0;
}
