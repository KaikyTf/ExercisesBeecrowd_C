#include <stdio.h>
#define TF 12
int main(){
    int cont;
    float mat[TF][TF];
    float soma, media;
    char op;
    
    soma = 0; cont = 0;
    
    scanf(" %c",&op);
    
    //lendo a matriz
    for(int i = 0 ; i < TF ; i++){
        for(int j = 0 ; j < TF ; j++){
            scanf("%f",&mat[i][j]);
            cont++;
        }
    }
    
    //calculo pela coluna
    for(int j = 11; j > 6 ; j--){
        for(int i = (11 - j) + 1 ; i < j ; i++){
            soma += mat[i][j];
        }
    }
    
    media = soma / cont;
    
    if(op == 'S')
        printf("%.1f\n",soma);
    else if(op == 'M')
        printf("%.1f\n",media);

    return 0;
}

