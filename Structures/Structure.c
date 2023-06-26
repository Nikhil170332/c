#include <stdio.h>

struct Emp
{
    int no;
    char name[20];
};

int main()
{
    struct Emp a;
    printf("size of data type Emp: %ld\n",sizeof(a));
    printf("size of Emp: %ld",sizeof(struct Emp));
}