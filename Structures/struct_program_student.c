#include <stdio.h>
#define LIMIT 5

struct Student
{
    int no;
    char name[20];
    int maths,physics,chemistry;
};

int main()
{
    int i,total_marks[LIMIT];
    float per[LIMIT],avg[LIMIT];
    struct Student e[LIMIT];
    
    for(i=0;i<LIMIT;i++)
    {
        e[i].no = i+1;
        printf("Enter the name of Student(%d):",i+1);
        scanf("%s",e[i].name);
        printf("Enter the marks of Maths, Physics, Chemistry for Student(%d)\n",i+1);
        scanf("%d%d%d",&e[i].maths,&e[i].physics,&e[i].chemistry);
        printf("\n");
    }
    
    for(i=0;i<LIMIT;i++)
    {
        total_marks[i] = e[i].maths + e[i].physics + e[i].chemistry;
        avg[i]= total_marks[i]/3.0;
        per[i]= (total_marks[i]/300.0)*100.0;
    }

    
    printf("s.no:   Name\tMaths\tPhysics\tChemistry  Total Marks\tAverage\tPercentage\n");
    for(i=0;i<LIMIT;i++)
    {
        printf("  %d\t%s\t %d\t  %d\t  %d\t\t%d\t%.2f\t %.2f\n",e[i].no,e[i].name,e[i].maths,e[i].physics,e[i].chemistry,total_marks[i],avg[i],per[i]);
    }
    
}