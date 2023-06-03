#include <stdio.h>

int main()
{
    int i,a,greater,lesser;
    printf("Enter number of numbers want to add:");
    scanf("%d",&a);
    printf("\nEnter %d numbers:",a);
    int n[a];
    for (i=0;i<a;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\n\t");
    for (i=0;i<a-1;i++)
    {
        if (n[i]>n[i+1])
        {
            if (n[i]>greater)
                greater = n[i];
            else if(n[i+1]<lesser)
                lesser = n[i+1];
        }
        else{
            if (n[i+1]>greater)
                greater = n[i+1];
            else if(n[i]<lesser)
                lesser = n[i];
        }
    }
    printf("Maximum number is %d",greater);
    printf("\n\tMinimum number is %d",lesser);
    return 0;
}