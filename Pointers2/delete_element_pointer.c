#include <stdio.h>

int delete(int *num,int element)
{
    int i,j;
    int len =10;
    for(i=0;i<len;i++){
        if(element==*(num+i)){
            for(j=i;j<len;++j){
                *(num+j) = *(num+j+1);
            }
            len--;
            return len;
            break;
        }
    }
}

int main()
{
    int num[10],i,element,len;
    printf("Enter 10 elements\n");
    for(i=0;i<10;i++){
        scanf("%d",&num[i]);
    }
    printf("Enter the element want to delete\n");
    scanf("%d",&element);
    len = delete(num,element);
    printf("After removing element %d\n Remaining elements are ",element);
    for(i=0;i<len;i++){
        printf("%d\t",num[i]);
    }
    return 0;
}