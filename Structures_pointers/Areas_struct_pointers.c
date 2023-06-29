#include <stdio.h>

struct Area {
    float l,b,s,h;
};

int main()
{
    struct Area a;
    struct Area *p = &a;
    char o;
    
    printf("a)Rectangle     b)square    c)Triangle\n");
    printf("Choose one of the above\n");
    scanf("%c",&o);
    
    if(o == 'a'){
        printf("Enter length and breadth\n");
        scanf("%f%f",&a.l,&a.b);
        printf("Area of Rectangle is %.2f\n",((p->l)*(p->b)));
    }
    else if(o=='b'){
        printf("Enter side of sqaure\n");
        scanf("%f",&a.s);
        printf("Area of Square is %.2f\n",((p->s)*(p->s)));
    }
    else if(o=='c'){
        printf("Enter Base and height\n");
        scanf("%f%f",&a.b,&a.h);
        printf("Area of Triangle is %.2f\n",(0.5*(p->b)*(p->h)));
    }
}