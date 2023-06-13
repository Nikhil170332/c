#include <stdio.h>

int main()
{
    int a, *ptr1,*ptr2;
    printf("Enter a value\n");
    scanf("%d",&a);
    ptr1 = &a;
    printf("Value of a using pointer ptr1 %d\n",*ptr1);
    
    printf("Enter a value again\n");
    //scanf("%d",*ptr2);                  //Error; pointer needs a integer variable to assign variable's address, can't assign value to it
    //printf("Value using pointer ptr2 %d\n",*ptr2);      
    return 0;
}
