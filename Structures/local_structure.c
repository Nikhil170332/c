//local structure

#include <stdio.h>
#define LIMIT 3

int main()
{
    struct Menu
    {
        int no;
        char item[20];
        int price;
    };
    int i;
    struct Menu menu[LIMIT];
    
    for(i=0;i<LIMIT;i++)
    {
        menu[i].no = i+1;
        printf("Enter the name of item(%d):",i+1);
        scanf("%s",menu[i].item);
        printf("Enter the price of item(%d):",i+1);
        scanf("%d",&menu[i].price);
        printf("\n");
    }
    
    
    printf("s.no:   Name\tPrice(₹)\n");
    for(i=0;i<LIMIT;i++)
    {
        printf("  %d\t%s\t%d\n",menu[i].no,menu[i].item,menu[i].price);
    }
}