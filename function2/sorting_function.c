#include <stdio.h>

int sort(int arr[20],int a)
{
    int i,j,temp;
    
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;++j)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i]= arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("After sorting elements");
    for(i=0;i<a;i++)
    {
        printf(" %d ",arr[i]);
    }
}

int main()
{
    int arr[20],i,a,result[20];
    printf("Enter number of elements you want\n");
    scanf("%d",&a);
    printf("Enter the elements\n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,a);
    return 0;
}