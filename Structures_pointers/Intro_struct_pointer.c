#include <stdio.h>

struct Anything {
    int a;
    int b;
};

int main()
{
    struct Anything x;
    printf("Enter 2 values\n");
    scanf("%d",&x.a);
    scanf("%d",&x.b);
    
    struct Anything *ptr = &x;
    
    printf("\nAccessing member using ptr->a\n");
    printf("First Value %d\nSecond Value %d\n",ptr->a,ptr->b); //using ptr->a
    printf("\nAccessing member using (*ptr).a\n");
    printf("First Value %d\nSecond Value %d",(*ptr).a,(*ptr).b); //using *ptr.a 
    return 0;
}