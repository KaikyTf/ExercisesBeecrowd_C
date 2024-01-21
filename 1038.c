#include <stdio.h>
int main(){
    int c,q;
    double v;
    scanf("%d %d",&c,&q);
    switch(c){
        case 1:
        v = q * 4.00;
        break;

        case 2:
        v = q * 4.50;
        break;

        case 3:
        v = q * 5.00;
        break;

        case 4:
        v = q * 2.00;
        break;

        case 5:
        v = q * 1.50;
        break;

    }

    printf("Total: R$ %.2lf\n",v);

    return 0;
}