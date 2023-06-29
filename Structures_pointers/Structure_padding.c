//structure padding
// processor read 1 word at a time means 4 bytes
// structure padding make empty bits in byte to avoid memory cycle wastage

#include <stdio.h>

struct struct1 {
    char a;         // size 1byte
    int b;          // size 4 byte      => 5 bytes(but wrong)
};

struct struct2 {
    char a;         // size 1byte
    char b;         // size 1byte
    int c;          // size 4byte       => 6 bytes(but wrong)
};

struct struct3 {
    char a;         // size 1byte
    int b;          // size 4byte
    char c;         // size 1byte       => 6 bytes(but wrong)
};

int main()
{
    struct struct1 x;
    struct struct2 y;
    struct struct3 z;
    
    printf("\nsize of struct1 structure\n Calculated size is 5 bytes,\t Actual size is %ld bytes\n",sizeof(x));
    printf("\nsize of struct2 structure\n Calculated size is 6 bytes,\t Actual size is %ld bytes\n",sizeof(y));
    printf("\nsize of struct3 structure\n Calculated size is 6 bytes,\t Actual size is %ld bytes\n",sizeof(z));
    return 0;
}