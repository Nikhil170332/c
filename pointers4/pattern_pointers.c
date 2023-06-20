#include <stdio.h>

int shape(int n,char *option)
{
    int i,j,s;
    if(*option=='a'){
        printf("Rectangle Pattern\n");
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    else if(*option=='b'){
        printf("Triangle Pattern\n");
        for(i=0;i<n;i++){
            for(j=0;j<=i;j++){
                printf("* ");
            }
            printf("\n");
        }
    }
    else if(*option == 'c'){
        printf("Pyramid Pattern\n");
        for (i=0;i<n+1;i++)
        {
            for (s=n-i;s>0;s--)
                printf("  ");
            for (j=0;j<i;j++)
                printf("*   ");
            printf("\n");
        }
    }
    else{
        printf("choose option carefully\n");
    }
}


int main()
{
    int n;
    char option;
    printf("a)Rectangle\tb)Triangle\tc)Pyramid\n");
    printf("Choose one option on above\n");
    scanf("%c",&option);
    printf("Enter number\n");
    scanf("%d",&n);
    shape(n,&option);
    return 0;
}