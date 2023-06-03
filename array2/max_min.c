#include <stdio.h>

int main()
{
    int i,n[3];
    printf("Enter 3 numbers\n");
    for (i=0;i<3;i++)
    {
        scanf("%d",&n[i]);
    }
    printf("\n");
    if (n[0]> n[1] && n[0]>n[2]){
        printf("Maximum number is %d",n[0]);
        if (n[1]>n[2])
            printf("\nMinimum number is %d",n[2]);
        else
            printf("\nMinimum number is %d",n[1]);
    }
    else if(n[1]>n[2]){
        printf("Maximum number is %d",n[1]);
        if (n[0]>n[2])
            printf("\nMinimum number is %d",n[2]);
        else
            printf("\nMinimum number is %d",n[0]);
    }
    else{
        printf("Maximum number is %d",n[2]);
        if (n[0]>n[1])
            printf("\nMinimum number is %d",n[1]);
        else
            printf("\nMinimum number is %d",n[0]);
    }
    return 0;
}