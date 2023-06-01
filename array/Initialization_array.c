//complie time initialization

#include <stdio.h>

int main()
{
    //no of ways to initialize array and elements
    int a[5]={1,2,3,-2,0};
    int b[]={2,5,-3,-6,0,-4,3};
    int c[5]={1,6,7};
    //int d[5]= {5,-5,3,-6,0,3,5};     //ERROR - number of elements in array are more than size of array
    int e[3];
    e[0]= 4;
    e[1]= 5;
    e[2]= -3;
    int f[3]={};            //Empty array will give ERROR
    char g[]= {'j','e','b','r'};
    
    printf("Size of a is %ld\n",sizeof(a));
    printf("Size of b is %ld\n",sizeof(b));
    printf("Size of c is %ld\n",sizeof(c));
    //printf("Size of d is %ld\n",sizeof(d));  // result = 20 , gives size of array , but error while initializing
    printf("Size of e is %ld\n",sizeof(e));
    printf("Size of f is %ld\n",sizeof(f));
    printf("Size of g is %ld\n",sizeof(g));
    return 0;
}