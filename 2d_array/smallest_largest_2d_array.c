#include <stdio.h>

int main()
{
    int n[3][3],i,j;
    int largest =0,smallest=0;
    printf("Enter the values for 3x3 matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter element for row:%d,column:%d ",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    printf("matrix elements\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",n[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if (n[i][j]> largest)
                largest = n[i][j];
                
            if (n[i][j]<smallest)
                smallest = n[i][j];
        }
    }
    printf("largest number is %d \nsmallest number is %d",largest,smallest);
    return 0;
}