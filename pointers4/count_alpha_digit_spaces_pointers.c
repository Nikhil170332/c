#include <stdio.h>

int count_string(char str[100],int *alpha, int *digit, int *space,int *character)
{
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
            *alpha = *alpha+1;
        }
        else if(str[i]>='0' && str[i]<='9'){
            *digit = *digit+1;
        }
        else if(str[i]==' ' && str[i] !='\n'){
            *space = *space+1;
        }
        else if(str[i]!='\n'){
            *character= *character+1;
        }
        i++;
    }
}


int main()
{
    char str[100];
    int alpha=0,digit=0,space=0,character=0;
    printf("Enter the text\n");
    fgets(str,100,stdin);
    count_string(str,&alpha,&digit,&space,&character);
    printf("Number of Alphabets: %d\nNumber of Digits: %d\n",alpha,digit);
    printf("Number of Spaces: %d\nNumber of Characters: %d\n",space,character);
    return 0;
}