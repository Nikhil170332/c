#include <stdio.h>
int main()
{
    char character, asciicharacter;
    int asciiValue, value;
    printf("enter the character:");
    scanf("%c",&character);
    asciiValue = (int)character;
    printf("the value of %c is %d",character,asciiValue);
    printf("\nNext enter number from 0 to 127 \n\n you will get value:");
    scanf("%d",&value);
    asciicharacter = (char)value;
    printf("\nthe character is %c",asciicharacter);
    return 0;
}