#include <stdio.h>

void even_odd(int s[], int *even, int *odd)
{
    int i=0,num;
    printf("enter the number of elements need to check ");
    scanf("%d",&num);
    printf("Enter %d elements\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&s[i]);
    }
    
    for(i=0;i<num;i++)
    {
        if (s[i]%2==0)
        {
            *even = *even+1;
        }
        else
        {
            *odd = *odd +1;
        }
    }
    
}

int main()
{
    int even=0, odd=0,s[20];
    even_odd(s,&even,&odd);
    printf("No of even elements %d\nNo of odd elements %d",even,odd);
    return 0;
}