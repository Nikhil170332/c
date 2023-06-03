#include <stdio.h>
int main()
{
    int i,n[20],a,dumb,j;
    printf("Enter number of numbers to being added:");
    scanf("%d",&a);
    printf("Enter %d numbers",a);
    for (i=0;i<a;i++)
        scanf("%d",&n[i]);
    for (i=0;i<a;i++)
    {
        for (j=i+1;j<a;++j)
            if (n[i]>n[j])
            {
                dumb = n[i];
                n[i]= n[j];
                n[j]= dumb;
            }
    }
    printf("After sorting:\nAscending order\n");
    for (i=0;i<a;i++)
        printf("%d\n",n[i]);
    printf("Descending order\n");
    for (i=a-1;i>=0;i--)
        printf("%d\n",n[i]);
    return 0;
}