#include <stdio.h>
int main(){
    int y,par,impar,positivo,negativo;
    par = 0;
    impar  = 0;
    positivo = 0;
    negativo = 0;
    for(int i = 0 ; i < 5; i++){
        scanf("%d",&y);
        if(y > 0){
            positivo++;
        } 
        if (y < 0){
            negativo++;
        } 
        if(y % 2 == 0){
            par++;
        } else {
            impar++;
        }
    }

    printf("%d valor(es) par(es)\n",par);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",positivo);
    printf("%d valor(es) negativo(s)\n",negativo);

    return 0;
}