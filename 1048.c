#include <stdio.h>
int main(){
    double s,r,sf,pf;
    int p;

    scanf("%lf", &s);
    if(s >= 0 && s <= 400.00){
        p = 15;
        pf = 0.15;
    } else if(s >= 400.01 && s <= 800.00){
        p = 12; 
        pf = 0.12;
    } else if(s > 800.00 && s <= 1200.00){
        p = 10;
        pf = 0.1;   
    } else if (s > 1200.00 && s <= 2000.00){
        p = 7;
        pf = 0.07; 
    }else if (s > 2000.00) {
        p = 4; 
        pf = 0.04;
    }

    r = s * pf;
    sf = s + r;

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n",sf,r,p);

    return 0;
}