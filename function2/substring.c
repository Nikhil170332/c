#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char string_in_text(char text[50],char string[10])
{
    int i,j,count=0;
    for(i=0;i<strlen(text);i++)
    {
        if(text[i]!=' ')
        {
            for(j=0;j<strlen(string);j++)
            {
                if(text[i]==string[j])
                {
                    count= count +1;
                    i++;
                }
            }
        }
        else
        {
            count = 0;
        }
        if (count==strlen(string))
        {
            printf("YES it has substring");
            exit(0);
        }
    }
    printf("NO it don't have substring");
}

int main()
{
    char text[50],string[10];
    printf("Enter text ");
    fgets(text,50,stdin);
    printf("enter substring ");
    scanf("%s",string);
    string_in_text(text,string);
    return 0;
}
