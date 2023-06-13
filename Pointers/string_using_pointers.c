#include <stdio.h>

int main()
{
    char string[20],*ptr;
    int count=0;
    printf("Enter a string\n");
    scanf("%s",string);
    ptr= string;
    printf("Enterted string is %s\n",ptr);
    printf("address of string is %p\n",string);
    printf("address of ptr is %p\n",ptr);
    return 0;
}
