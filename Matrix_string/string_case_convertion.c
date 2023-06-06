#include <stdio.h>
#include <string.h>

int main()
{
    char s1[10],s2[10],option;
    int i=0;
    printf("choose option either 'a' or 'b' to convert a string into\n");
    printf("(a) Upper\t\t(b) Lower\n");
    scanf("%c",&option);
    printf("Enter a string\n");
    scanf("%s",s1);
    if (option == 'a')
    {
        while (s1[i]!='\0')
        {
            if ((int)s1[i]>=97 && (int)s1[i]<=122)
            {
                s2[i]= (int)s1[i] - 32;
                i++;
            }
            else if((int)s1[i]>=65 && (int)s1[i]<=90)
            {
                s2[i]= (int)s1[i];
                i++;
            }
        }
    }
    else
    {
        while (s1[i]!='\0')
        {
            if ((int)s1[i]>=65 && (int)s1[i]<=90)
            {
                s2[i]= (int)s1[i] + 32;
                i++;
            }
            else if((int)s1[i]>=97 && (int)s1[i]<=122)
            {
                s2[i]= (int)s1[i];
                i++;
            }
        }
    }
    
    printf("The coverted string is %s",s2);
    return 0;
}