#include <stdio.h>

struct Student {
    char name[20];
    int class;
    int rank;
};


int main()
{
    struct Student scl;
    struct Student *ptr = &scl;
    
    printf("Enter name of the student\n");
    scanf("%s",scl.name);
    printf("Enter the class of the student\n");
    scanf("%d",&scl.class);
    printf("Enter rank of student in the class\n");
    scanf("%d",&scl.rank);
    
    printf("\n\n%s got rank %d in %d class\n",ptr->name,ptr->class,ptr->rank);
}