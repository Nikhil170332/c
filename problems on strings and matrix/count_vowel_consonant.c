#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    int i,vowel=0,consonant=0;
    printf("Enter any text\n");
    fgets(string, sizeof(string),stdin);
    while (string[i]!='\0')
    {
        if (string[i]!=' ')
        {
            if ((int)string[i]>=65 && (int)string[i]<=90)
            {
                string[i]= (int)string[i] + 32;
            }
            else if(string[i]==' '  | string[i]=='\n')
            {
                i++;
                continue;
            }
            if (string[i]=='a' | string[i]=='e' | string[i]=='i' | string[i]=='o' | string[i]=='u')
            {
                vowel+=1;
            }
            else
            {
                consonant +=1;
            }
        }
        i++;
    }
    printf("\nNumber of vowels is %d \nNumber of consonants is %d",vowel,consonant);
    return 0;
}