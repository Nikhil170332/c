
#include <stdio.h>

int main()
{
    int i,j,a,b;
    int n1[20],n2[20],like[20];
    printf("Enter the number of elements are adding for array1 and array2 respectively:");
    scanf("%d%d",&a,&b);
    printf("\nEnter the %d elements for array1",a);
    for (i=0;i<a;i++)
        scanf("%d",&n1[i]);
    printf("\nEnter the %d elements for array2",b);
    for (i=0;i<b;i++)
        scanf("%d",&n2[i]);
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            if(n1[i]==n2[j])
            {
                printf("Common element is %d\n",n1[i]);
            }
        }    
    }
    return 0;
}
