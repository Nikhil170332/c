#include <stdio.h>

int main()
{
    int a,b,sum, *ptr1,*ptr2,*add;
    printf("Enter a,b values \n");
    scanf("%d%d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    sum = *ptr1 + *ptr2;
    add = &sum;
    printf("The sum of values %d and %d is %d\n\n",*ptr1,*ptr2,*add);
    printf("Address of sum is %p \nAddress of *add is %p",&sum,add);
    return 0;
}
