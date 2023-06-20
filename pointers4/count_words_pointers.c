#include <stdio.h>

int word_count(char str[100],int *count)
{
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==' ' ){
            *count = *count+1;
        }
        i++;
    }
    //last word count
    if(*count !=0){
        *count = *count+1;
    }
}


int main()
{
    char str[100];
    int count=0;
    printf("Enter the text\n");
    fgets(str,100,stdin);
    word_count(str,&count);
    printf("Number of words in string are %d\n",count);
    return 0;
}