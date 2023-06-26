#include <stdio.h>
#define LIMIT 3

struct Employee
{
    int no;
    char name[20];
    int ex;
    int ctc;
    float hand_salary;
};

int main()
{
    int i,total=0;
    struct Employee e[LIMIT];
    
    for(i=0;i<LIMIT;i++)
    {
        e[i].no = i+1;
        printf("Enter the name of Employee(%d):",i+1);
        scanf("%s",e[i].name);
        printf("Enter the Experience of Employee(%d):",i+1);
        scanf("%d",&e[i].ex);
        printf("Enter the CTC of Employee(%d):",i+1);
        scanf("%d",&e[i].ctc);
        printf("\n");
    }

    
    printf("s.no:   Name\tExperience\tCTC\tIn-hand Salary\n");
    for(i=0;i<LIMIT;i++)
    {
        printf("  %d\t%s\t    %d\t\t%d\t%.2f\n",e[i].no,e[i].name,e[i].ex,e[i].ctc,((e[i].ctc)-(e[i].ctc)*0.15));
    }
    
    for(i=0;i<LIMIT;i++)
    {
        total = total + e[i].ctc;
    }
    
    printf("\n   \t\t\tCumulative Salary is %d",total);
}