#include <stdio.h>
int main(){
    double media,valor,positivo,negativo;
    positivo = 0;
    negativo = 0;
    media = 0;
    for (int i = 0 ; i < 6 ; i++){
        scanf("%lf",&valor);
        if (valor > 0 ){
            positivo++;
            media += valor;
        } else {
            negativo ++;
        }
        
    }
    if(positivo > 0){
        media = media / positivo;
        printf("%.0lf valores positivos\n", positivo);
        printf("%.1lf\n",media);
    }
    

    return 0;

}