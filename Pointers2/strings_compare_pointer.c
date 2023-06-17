#include <stdio.h>
#include <string.h>

char compare(char *str1,char *str2)
{
    if(strcmp(str1, str2)==0){
        printf("Both strings are equal\n");
    }
    else{
        printf("Both strings are not equal\n");
    }
}

int main()
{
    char str1[10],str2[10];
    printf("Enter 2 strings for to compare them\n");
    fgets(str1,10,stdin);
    fgets(str2,10,stdin);
    compare(str1,str2);
    return 0;
}