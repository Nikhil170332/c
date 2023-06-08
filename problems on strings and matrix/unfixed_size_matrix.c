#include <stdio.h>

int main()
{
    int s,i,j,temp;
    printf("Enter the size of matrix\n");
    scanf("%d",&s);
    printf("Enter the values for %dx%d matrix\n",s,s);
    int n[s][s];
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("Enter element for row:%d,column:%d ",i+1,j+1);
            scanf("%d",&n[i][j]);
        }
    }
    printf("matrix elements\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("%d  ",n[i][j]);
        }
        printf("\n\n");
    }
    for (i=0;i<s;i++)
    {
        for (j=0;j<s;j++)
        {
            if (i==j)
            {
                temp=n[i][j];
                n[i][j]=n[i][s-(i+1)];
                n[i][s-(i+1)]=temp;
            }
        }
    }
    printf("\n\n");
    for(i=0;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            printf("%d  ",n[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}