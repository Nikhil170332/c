#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10],s2[10];
    int i=0;
    printf("Enter a string\n");
    scanf("%s",s1);
    while (s1[i]!='\0')
    {
        if ((int)s1[i]>=65 && (int)s1[i]<=90)
        {
            s2[i]= (int)s1[i] + 32;
            i++;
        }
        else if((int)s1[i]>=97 && (int)s1[i]<=122)
        {
            s2[i]= (int)s1[i] - 32;
            i++;
        }
    }
    printf("The coverted string is %s",s2);
    return 0;
}_