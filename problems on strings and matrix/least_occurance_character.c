#include <stdio.h>
#include <string.h>
int main()
{
    char string[100],character;
    int i,j=0,count=0,least=0;
    printf("Enter any text\n");
    fgets(string, sizeof(string),stdin);
    character= string[0];
    for(i=0;i<strlen(string);i++)
    {
       if(string[i]>='A' && string[i]<='Z' || string[i]>='a' && string[i]<='z')
       {
           count=0;
           while(string[j]!='\0')
           {
               if(character == string[j])
                   count+=1;
                j++;
           }
       }
       if (count<least)
       {
           character=string[i];
           least=count;
       }
    }
    printf("\nLeast number occurance of character is %c \nnumber of occurance is %d",character,least);
    return 0;
}