#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main()
{
    char s1[10],s2[10];
    int i,j;
    printf("Enter a string\n");
    scanf("%s",s1);
    for (i=0;i<=(strlen(s1)-1)/2;i++)
    {
        if(s1[i]!= s1[strlen(s1)-i-1])
        {
            printf("Given string %s is not plindrome",s1);
            exit(0);
        }
        else
        {
            continue;
        }
    }
    printf("Given string %s is palindrome",s1);
    return 0;
}