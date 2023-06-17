#include <stdio.h>

int string(char str[20],int *i)
{
    printf("Enter a string ");
    scanf("%s",str);
    while(str[*i]!= '\0')
    {
        *i = *i+1;
    }
}


int main()
{
    char str[20];
    int i=0;
    string(str,&i);
    printf("The length of string is %d",i);
    return 0;
}