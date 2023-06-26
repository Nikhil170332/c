#include <stdio.h>
#include <string.h>
#define LIM 5

typedef struct mobile
{
    int no;
    char name[20];
    char model[30];
    int price;
    float dis_price;
}mobile;


int main()
{
    int i;
    mobile m[LIM];
    for(i=0;i<LIM;i++){
        m[i].no= i+1;
        printf("Enter the Mobile name ");
        scanf("%s",m[i].name);
        getchar();
        printf("Enter it's model name ");
        fgets(m[i].model,30,stdin);
        m[i].model[strlen(m[i].model)-1]='\0';
        printf("Enter price of the mobile ");
        scanf("%d",&m[i].price);
        m[i].dis_price= m[i].price-(m[i].price*0.15);
        printf("\n");
    }

    printf("S.no\tName\t\tModel\t\tPrice\tDiscount_Price\n");
    for(i=0;i<LIM;i++){
        printf(" %d\t%s\t\t%s\t\t%d\t%.2f\n",m[i].no,m[i].name,m[i].model,m[i].price,m[i].dis_price);
    }
    return 0;
}