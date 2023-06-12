#include <stdio.h>

int prime_max(int num)
{
    int p[num+10],i,j,count=0;
    printf("Enter %d prime numbers\n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&p[i]);
    }
    int max=p[0];
    for(i=0;i<num;i++)
    {
        count=0;
        for(j=2;j<p[i];j++)
        {
            if (p[i]%j==0)
                count = count+1;
        }
        if(count==0)
        {
            if(max<p[i])
                max = p[i];
        }
        else
        {
            printf("\nyou have entered Non prime number %d\n",p[i]);
            continue;
        }
    }
    return max;
}

int main()
{
    int num,max;
    printf("Enter number of prime numbers want to consider \n");
    scanf("%d",&num);
    max = prime_max(num);
    if(max>=2)
    {
        printf("\nMaximum prime number from given prime numbers list is %d",max);
    }
    else
    {
        printf("\nFor given list of prime numbers, maximum of prime numbers is not possible");
    }
    return 0;
}