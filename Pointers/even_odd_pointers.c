#include <stdio.h>

int main()
{
    int num[10],*ptr,i;
    printf("Enter 10 elements\n");
    for(i=0;i<10;i++)
        scanf("%d",&num[i]);
    ptr= num;
    while (*ptr!=num[10])
    {
        if(*ptr%2==0)
        {
            printf("\nEven number is %d",*ptr);
        }
        else
        {
            printf("\n\t\t\tOdd number is %d",*ptr);
        }
        *ptr++;
    }
    return 0;
}
