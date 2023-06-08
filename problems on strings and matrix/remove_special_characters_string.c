#include <stdio.h>
int main()
{
    char string[100];
    int i=0,j;
    printf("Enter any text\n");
    fgets(string, sizeof(string),stdin);
    while (string[i]!='\0')
    {
        if (string[i]>='A' && string[i]<='Z' || string[i]>='a' && string[i]<='z')
        {
            i++;
            continue;
        }
        else
        {
            j=i;
            while(string[j]!='\0')
            {
                string[j]=string[j+1];
                j++;
            }
            i--;
        }
        i++;
    }
    printf("\nAfter removing special characters \nThe text is\n %s",string);
    return 0;
}