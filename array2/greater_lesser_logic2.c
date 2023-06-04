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
    greater = n[0];
    lesser = n[0];
    for (i=0;i<a;i++)
    {
        if (greater<n[i])
        {
            greater = n[i];
        }
        if (lesser>n[i])
        {
            lesser = n[i];
        }
    }
    printf("Maximum number is %d",greater);
    printf("\n\tMinimum number is %d",lesser);
    return 0;
}