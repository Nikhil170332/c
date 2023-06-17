#include <stdio.h>
#include <string.h>

char reverse(char *string, int length)
{
    int i=0;
    char c;
    for(i=0;i<=length/2;i++)
    {
        c= *(string+i);
        *(string+i)= *(string+length-i-1);
        *(string+length-i-1) =c;
    }
}


int main()
{
    char string[10];
    int length;
    printf("Enter a string\n");
    fgets(string,10,stdin);
    length = strlen(string);
    reverse(string,length);
    printf("The reverse of string is %s",string);
    return 0;
}