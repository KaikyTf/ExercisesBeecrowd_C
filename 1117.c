#include <stdio.h>
int main(){
    double nota,notas,media;
    media = 0;
    notas = 0;
    for (int i = 0 ; i <= 1;){
        scanf("%lf",&nota);
        if (nota >= 0 && nota <= 10 ){
            i++;
            notas += nota;
        } else {
            printf("nota invalida\n");
        }

    }

    media = notas / 2;

    printf("media = %.2lf\n",media);

    return 0;
}