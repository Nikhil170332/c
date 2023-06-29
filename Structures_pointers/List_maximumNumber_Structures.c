#include <stdio.h>
#define L 3

struct Max {
    int no;
    int arr[L][3];
};

int main()
{
    int i,j=0,max;
    struct Max m;
    struct Max *p = &m;
    
    for(i=0;i<L;i++){
        p->no = i+1;
        printf("Enter 3 values\n");
        for(j=0;j<3;j++){
            scanf("%d",&m.arr[i][j]);
        }
    }
    printf("\ns.no\tArray elements\tmaximum\n");
    for(i=0;i<L;i++){
        printf("%d\t{",m.no);
        max=0;
        for(j=0;j<3;j++){
            printf("%d,",p->arr[i][j]);
            if(max<p->arr[i][j]){
                max= p->arr[i][j];
            }
        }
        printf("}\t%d\n",max);
    }
}