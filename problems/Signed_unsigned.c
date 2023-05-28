#include <stdio.h>

int main()
{
    char a = 130;
    unsigned char b = 130;
    printf("a = %d \n",a);          //signed char print  as -126(integer) , if it is for value range(-128_0_127)
    printf("a = %c \n",a);          //signed char print as unknown character, if it is for character
    printf("b = %d \n",b);          //unsigned char print  as 130(integer) , if it is for value range(0_255)
    printf("b = %c \n",b);          //unsigned char print as unknown character
    return 0;
}