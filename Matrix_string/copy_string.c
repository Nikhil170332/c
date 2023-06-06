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
        s2[i]= s1[i];
        i++;
    }
    printf("After copying string: %s\n",s2);
    printf("Size of string from second string %ld\n",strlen(s2));
    return 0;
}