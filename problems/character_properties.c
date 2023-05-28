#include <stdio.h>

int main()
{
    char a = 270;

    //printf not only print output on screen, but also print no fo characters
    printf(" %d\n", printf("%s","Hello World!"));     // characters length of "Hello World!" is 12
    printf(" %d\n", printf("%s","My name is Nikhil"));    // "my name is Nikhil" - 17 characters

    //printing spaces at beginning to fitting no of characters to the string
    printf("%10s\n","Hello");        //print characters upto 10 characters length
    printf("%20s\n","Nikhil");       //print characters upto 20 characters length

    printf("%d\n", a)			//result = 14, due to character hold 1byte
    return 0;
}