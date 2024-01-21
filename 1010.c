#include <stdio.h>
int main(){
    int q1,q2,c1,c2;
    double v1,v2,vf;
    scanf("%d %d %lf",&c1,&q1,&v1);
    scanf("%d %d %lf",&c2,&q2,&v2);
    vf = (q1 * v1) + (q2 * v2);
    printf("VALOR A PAGAR: R$ %.2lf\n",vf);

    return 0;
}