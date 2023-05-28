#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,discriminant;
    float x1,x2;
    printf("Enter the 3 constant values(a,b,c) for quadratic equation (ax^2 + bx + c) \n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    discriminant = b*b-4*a*c;
    if (discriminant == 0)
    {
        x1 = -b/(2*a);
        x2 = x1;
        printf("The roots for x1 and x2 are same, and their values are \nx1=%f \n x2=%f",x1,x2);
    }
    else if(discriminant>0)
    {
        x1 = (-b + sqrt(discriminant))/2*a;
        x2 = (-b - sqrt(discriminant))/2*a;
        printf("The x1 root is %f\n",x1);
        printf("The x2 root is %f\n",x2);
    }
    else
    {
        printf("The roots are Imaginary roots")
    }
    return 0;
}