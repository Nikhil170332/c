//Array in structures

#include <stdio.h>
#include <string.h>
#define L 3

struct Bike
{
    char name[30];
    char colour[20];
    int year,engine,milage,price;
};


int main()
{
    struct Bike b[L];
    int i;
    for(i=0;i<L;i++){
        printf("Enter name of the bike-%d ",i+1);
        fgets(b[i].name,30,stdin);
        b[i].name[strlen(b[i].name)-1]= '\0';
        printf("Enter the colour of the bike ");
        scanf("%s",b[i].colour);
        printf("Enter year ");
        scanf("%d",&b[i].year);
        printf("Enter Engine Capacity ");
        scanf("%d",&b[i].engine);
        printf("Enter milage (in kmpl) ");
        scanf("%d",&b[i].milage);
        printf("Enter price of the bike ");
        scanf("%d",&b[i].price);
        printf("\n\n");
        getchar();
    }
    
    for(i=0;i<L;i++){
        printf("Bike: %s\t- ₹%d\n",b[i].name,b[i].price);
        printf("----------------------------------------\n");
        printf("Colour : %s\n",b[i].colour);
        printf("Year : %d\nEngine Capacity : %d cc\nMilage : %d kmpl\n",b[i].year,b[i].engine,b[i].milage);
        printf("----------------------------------------\n\n\n");
    }
    
    return 0;
}