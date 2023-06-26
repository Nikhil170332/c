//global structure

#include <stdio.h>
#define LIMIT 5

struct Candidates
{
    int no;
    char name[20];
    int age;
};

int main()
{
    int i;
    struct Candidates c[LIMIT];
    
    for(i=0;i<LIMIT;i++)
    {
        c[i].no = i+1;
        printf("Enter the name of Candidate(%d):",i+1);
        scanf("%s",c[i].name);
        printf("Enter the age of Candidate(%d):",i+1);
        scanf("%d",&c[i].age);
        printf("\n");
    }
    
    
    printf("s.no:   Name\tAge\n");
    for(i=0;i<LIMIT;i++)
    {
        printf("  %d\t%s\t%d\n",c[i].no,c[i].name,c[i].age);
    }
}