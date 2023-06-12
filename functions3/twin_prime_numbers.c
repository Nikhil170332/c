#include <stdio.h>

int twin_prime()
{
    int i,j,k,fac=0,p=1;
    printf("Twin prime numbers\n");
    for(i=0;i<=100;i++)
    {
        fac=0;
        for(j=1;j<i;j++)
        {
            if (i%j==0)
                fac = fac+1;
        }
        
        if(fac==1)
        {
            if(i-p==2)
                printf(" (%d, %d)\n",p,i);
            p=i;
        }
    }
}

int main()
{
    int count;
    count = twin_prime();
    return 0;
}