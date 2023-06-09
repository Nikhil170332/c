#include <stdio.h>

int length(char string[20])
{
    int i=0,count=0;
    while (string[i]!='\0')
    {
        count+=1;
        i++;
    }
    printf("The length of string %s is %d",string,count);
}

int main()
{
    char string[20];
    printf("Enter string\n");
    scanf("%s",string);
    length(string);
    return 0;
}