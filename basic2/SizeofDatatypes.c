#include<stdio.h>

int main()
{
    int integer_type;
    float float_type;
    char character_type;
    double double_type;
    
    printf("The size of int is:%ld",sizeof(integer_type));
    printf("\nThe size of float is:%ld",sizeof(float_type));
    printf("\nThe size of character is:%ld",sizeof(character_type));
    printf("\nThe size of double is:%ld",sizeof(double_type));
    return 0;
}