#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character to check whether vowel or not:");
    scanf("%c",&ch);
    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n\t\tVowel");
            break;
        default:
            printf("\n\t\tConsonant");
    }
    return 0;
}