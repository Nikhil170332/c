#include <stdio.h>

int prime(int *arr)
{
    int i,j,count=0,sum=0;
    printf("The prime numbers are\n");
    for(i=0;i<10;i++)
    {
        count=0;
        for(j=1;j<=*(arr+i);j++)
        {
            if (*(arr+i)%j==0)
                count = count+1;
        }
        if(count==2)
        {
            printf("%d  ",*(arr+i));
            sum= sum+*(arr+i);
        }
    }
    return sum;
}

int main()
{
    int arr[10],i;
    printf("Enter the numbers\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nsum of all prime numbers is %d",prime(arr));
    return 0;
}