#include <stdio.h>
#define TF 12
int main(){
    int coluna,div = 0;
    double M[TF][TF],s = 0,m = 0;
    char op;

    scanf("%d",&coluna);
    //Esse espaço em branco antes do %c ajuda a consumir qualquer caractere de quebra de linha ou espaço 
    //em branco que possa ter sido deixado na entrada após a leitura do número coluna.
    scanf(" %c",&op);
    
    //popular a matriz
    for(int i = 0 ; i < TF ; i++){
        for(int j = 0 ; j < TF ; j++){
            scanf("%lf",&M[i][j]);
        }
    }

    switch(op) {
        case 'S':
            for(int j = 0 ; j < TF ; j++){
                s = s + M[j][coluna];
            }
            printf("%.1lf\n",s); 
            break;
        case 'M':
            for( int j = 0 ; j < TF ; j++){
                m = m + M[j][coluna];
                div++;
            }
            m = m / div;
            printf("%.1lf\n",m);
            break;
    }


    return 0;

}