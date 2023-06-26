#include <stdio.h>

struct Student
    {
        int no;
        char name[20];
        float grade;
    };

int main()
{
    int i;
    struct Student s1;
    struct Student s2;
    struct Student s3;
    
    s1.no=1;
    printf("Enter name and grade for Student-1\n");
    scanf("%s",s1.name);
    scanf("%f",&s1.grade);
    s2.no=2;
    printf("Enter name and grade for Student-2\n");
    scanf("%s",s2.name);
    scanf("%f",&s2.grade);
    s3.no=3;
    printf("Enter name and grade for Student-3\n");
    scanf("%s",s3.name);
    scanf("%f",&s3.grade);
    
    
    printf("s.no:   Name\tGrade\n");
    printf("  %d\t%s\t%.1f\n",s1.no,s1.name,s1.grade);
    printf("  %d\t%s\t%.1f\n",s2.no,s2.name,s2.grade);
    printf("  %d\t%s\t%.1f\n",s3.no,s3.name,s3.grade);
}