
// addresses of integer variables and pointers are same
#include <stdio.h>

int main()
{
    int a,b, *ptr1,*ptr2;
    a = 2;
    b = 3;
    ptr1 = &a;
    ptr2 = &b;
    printf("The addresses of a and b are %p and %p\n",&a,&b);
    printf("The addresses of a and b are %p and %p\n",ptr1,ptr2);
    return 0;
}
