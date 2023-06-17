#include <stdio.h>

int search(int *num,int a)
{
    int i,f=-1;
    for(i=0;i<10;i++){
        if(a==*(num+i)){
            f = i;
        }
    }
    return f;
}

int main()
{
    int num[10],i,element;
    printf("Enter 10 elements\n");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("Enter the element want to search\n");
    scanf("%d",&element);
    int result = search(num,element);
    if(result!= -1)
    {
        printf("%d is in position %d",element,result+1);
    }
    else
    {
        printf("%d does not exist\n",element);
    }
    return 0;
}