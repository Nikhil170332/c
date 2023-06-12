#include <stdio.h>

int prime_max(int start, int end)
{
    int i,j,fac=0,count=0;
    printf("prime numbers\n");
    for(i=start;i<end;i++)
    {
        fac=0;
        if(i>=2){
            for(j=2;j<i;j++)
            {
                if (i%j==0)
                    fac = fac+1;
            }
            if(fac==0)
            {
                printf("%d  ",i);
                count=count+1;
            }
        }
        else{
            continue;
        }
    }
    return count;
}

int main()
{
    int start,end,count;
    printf("Enter the starting number \n");
    scanf("%d",&start);
    printf("Enter the ending number \n");
    scanf("%d",&end);
    count = prime_max(start,end);
    printf("\nTotal no of prime numbers between range of %d and %d is  %d",start,end,count);
    return 0;
}