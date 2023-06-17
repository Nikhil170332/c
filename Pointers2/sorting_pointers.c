#include <stdio.h>

int sort(int *arr)
{
    int i,j,temp=0;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(*(arr+i)>*(arr+j))
            {
                temp = *(arr+i);
                *(arr+i)= *(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    
}


int main()
{
    int arr[10];
    int i;
    printf("Enter 10 elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr);
    for(i=0;i<10;i++)
    {
        printf("The element is %d\n",arr[i]);
    }
}