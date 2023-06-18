#include <stdio.h>
#include <string.h>

int *frequency(char string[100],char *character, int *greater)
{
    int i,j=0,count=0; 
    *character= string[0];
    for(i=0;i<strlen(string);i++)
    {
       if(*(string+i)>='A' && *(string+i)<='Z' || *(string+i)>='a' && *(string+i)<='z')
       {
           count=0;
           while(*(string+j)!='\0')
           {
               if(*character == *(string+j))
                   count+=1;
                j++;
           }
       }
       if (count>*greater)
       {
           *character=string[i];
           *greater=count;
       }
    }
}

int main()
{
    char string[100],character;
    int count=0;
    printf("Enter any text\n");
    fgets(string, sizeof(string),stdin);
    int *result = frequency(string,&character,&count);
    printf("\nHighest number occurance of character is %c \nnumber of occurance is %d",character,count);
    return 0;
}