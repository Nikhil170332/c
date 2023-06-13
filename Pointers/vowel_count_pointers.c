#include <stdio.h>

int main()
{
    char string[20],*ptr;
    int count=0;
    printf("Enter a string\n");
    scanf("%s",string);
    ptr= string;
    while(*ptr !='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u'){
            count += 1;
        }
        ptr++;
    }
    printf("Numbers vowels is %d",count);
    return 0;
}
