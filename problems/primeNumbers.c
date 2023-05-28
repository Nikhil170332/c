#include <stdio.h>

int main()
{
    int limit,i,j,count =0;
    printf("Enter the range of number you want to print prime numbers");
    scanf("%d",&limit);
    for (i=2;i<limit;i++)
    {
        for (j=2;j<i;j++)
        {
            if (i%j==0)
                count = count + 1;
        }
        if (count==0)
            printf("prime number %d\n",i);
        count = 0;
    }
    return 0;
}