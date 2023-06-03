#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char ch[20],reverse[20];
    printf("Enter any string:");
    scanf("%s",ch);
    printf("The length of string: %ld\n",strlen(ch));
    for (i=0;i<strlen(ch);i++)
        reverse[strlen(ch)-i-1] = ch[i];
    printf("The Reverse of the string is %s",reverse);
    return 0;
}