#include <stdio.h>
#include <string.h>

struct school
{
    int no;
    char name[20];
    double number;
};

int main()
{
    struct school s;
    
    s.no = 1;
    strcpy(s.name,"pawan");
    s.number = 9535892054;
    
    printf("Roll no:    Name \tPhone Number\n");
    printf("  %d\t    %s\t%.lf",s.no,s.name,s.number);
}