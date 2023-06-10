#include <stdio.h>

int prime(int num)
{
    int i,j,count=0,sum=0;
    printf("The prime numbers are");
    for(i=2;i<num;i++)
    {
        count=0;
        for(j=2;j<i;j++)
        {
            if (i%j==0)
                count = count+1;
        }
        if(count==0)
        {
            printf("%d  ",i);
            sum= sum+i;
        }
    }
    return sum;
}

int main()
{
    int num,sum;
    printf("Enter number \n");
    scanf("%d",&num);
    if(num>2){
        sum=prime(num);
        printf("\nThe sum of first %d prime numbers %d",num,sum);
    }
    else if(num==2)
        printf("\nThe sum of first %d prime numbers %d",num,num);
    else
        printf("\nThe sum of first %d prime numbers %d",num,0);
    return 0;
}