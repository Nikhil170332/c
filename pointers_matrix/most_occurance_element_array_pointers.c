#include <stdio.h>
 
int mode(int *arr)
{
    int i,j,count=0,most=0,max;
    for(i=0;i<10;i++){
        count=0;
        for(j=0;j<10;j++){
            if(*(arr+i)==*(arr+j)){
                count++;
            }
            if(count>most){
                most = count;
                max = *(arr+i);
            }
        }
    }
    return max;
}
 

int main()
{
    int arr[10],i,result;
    printf("Enter 10 elements\n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("most no of occurance element is %d",mode(arr));
    return 0;
}