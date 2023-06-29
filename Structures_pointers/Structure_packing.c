// structure packing - turn on or off certain features
// save memory instead of cycles of processor

#include <stdio.h>
#pragma pack(1)

struct struct1 {
    char a;         // size 1byte
    int b;          // size 4 byte      => 5 bytes
};

struct struct2 {
    char a;         // size 1byte
    char b;         // size 1byte
    int c;          // size 4byte       => 6 bytes
};

struct struct3 {
    char a;         // size 1byte
    int b;          // size 4byte
    char c;         // size 1byte       => 6 bytes
};

struct struct4 {
    int a;          // size 4 byte
    char b;         // size 1 byte
    char c;         // size 1 byte
    char d;         // size 1 byte      => 7 bytes
};

struct struct5 {
    int a;          // size 4 byte
    char b;         // size 1 byte
    char c;         // size 1 byte
    char d;         // size 1 byte
    char e;         // size 1 byte      => 8 bytes
};

int main()
{
    struct struct1 x;
    struct struct2 y;
    struct struct3 z;
    struct struct4 p;
    struct struct5 q;
    
    printf("\nsize of struct1 structure is %ld bytes\n",sizeof(x));
    printf("\nsize of struct2 structure is %ld bytes\n",sizeof(y));
    printf("\nsize of struct3 structure is %ld bytes\n",sizeof(z));
    printf("\nsize of struct4 structure is %ld bytes\n",sizeof(p));
    printf("\nsize of struct5 structure is %ld bytes\n",sizeof(q));
    return 0;
}