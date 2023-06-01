#include <stdio.h>

int main()
{
    int marks;
    char ch;
    printf("Enter the marks");
    scanf("%d",&marks);
    if (marks>=90 && marks <= 100)
        ch = 'A';
    else if(marks>=60 && marks< 90)
        ch = 'B';
    else if(marks>=40 && marks<60)
        ch = 'C';
    else if(marks>=0 && marks < 40)
        ch = 'E';
    else
        printf("You have entered marks more than maximum marks\nEnter the marks out of 100\n");
        
    switch (ch)
    {
        case 'A':
            printf("congratulations, you passed in distinction and secured 'A' Grade");
            break;
        case 'B':
            printf("congratulations, you passed and secured 'B' Grade");
            break;
        case 'C':
            printf("congratulations, you passed and secured 'C' Grade");
            break;
        case 'E':
            printf("Better luck next time, you failed\n\n\t Upgrade your skills!!!");
            break;
    }
    return 0;
}