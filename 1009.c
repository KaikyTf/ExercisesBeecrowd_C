#include <stdio.h>
int main (){
    char nome[100];
    double s,v;
    scanf("%s",&nome);
    scanf("%lf %lf",&s,&v);
    s = s + (v * 0.15);
    printf("TOTAL = R$ %.2lf\n",s);
    return 0;
}