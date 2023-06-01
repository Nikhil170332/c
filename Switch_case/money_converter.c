#include <stdio.h>

int main()
{
    int a,cu;
    float result;
    printf("Enter amount you want to convert");
    scanf("%d",&a);
    printf("\nAvailable countries\njapan     - 1\nusa       - 2\nrussia    - 3\naustralia - 4\nchina     - 5");
    printf("\nEnter country's code (as shown above):");
    scanf("%d",&cu);
    switch (cu)
    {
        case 1:
            result = a*1.68;
            printf("Total money in japanese is %.2f¥",result);
            break;
        case 2:
            result = a*0.012;
            printf("Total money in dollar is %.2f$",result);
            break;
        case 3:
            result = a*0.99;
            printf("Total money in ruble is %.2f₽",result);
            break;
        case 4:
            result = a*0.019;
            printf("Total money in australian dollar is %.2fA$",result);
            break;
        case 5:
            result = a*0.086;
            printf("Total money in yuan is %.2f¥",result);
            break;
        default:
            printf("Please enter money and country code carefully")
    }
    return 0;
}