#include <stdio.h>
#include <math.h>
#define TF 32
int main(){
    unsigned int b1[TF], b2[TF], b3[TF], x, y, sf;
    while (1){
        if (scanf("%u %u",&x,&y) != 2) {
            break;  // Saia do loop se "EOP" for inserido
        }
        //
        sf = 0;
        //
        /*
        //converter input para inteiro
        x = atoi(input);
        */
        //loop para popular o vetor do bit1
        for(int i = 0 ; i < 32 ; i++){
            //condição de verificar se o número é par ou impar (sempre que impar, o primeiro digito vai começar com 1)
            if (i == 0){ 
                if(x % 2 != 0){
                    b1[i] = 1;
                } else {
                    b1[i] = 0;
                }
            } else {
                //dividir por 2 e adicionar o resto ( 0 ou 1) a próxima posição // mesma coisa do jeito manual de fazer (dividindo por 2)
                x = x / 2;
                if (x > 0){
                    b1[i] = x % 2;
                } else {
                    b1[i] = 0;
                }
            }
        }
        /*
        //invertendo na hora de printar
        for(int i = TF - 1 ; i >= 0 ; i--){
            printf("%d",b1[i]);
        }
        // // // // // // // // // // // // // // //
        printf("\n");
        // // // // // // // // // // // // // // //
        */
        //loop para popular o vetor do bit2
        for(int i = 0 ; i < 32 ; i++){
            //condição de verificar se o número é par ou impar (sempre que impar, o primeiro digito vai começar com 1)
            if (i == 0){ 
                if(y % 2 != 0){
                    b2[i] = 1;
                } else {
                    b2[i] = 0;
                }
            } else {
                //dividir por 2 e adicionar o resto ( 0 ou 1) a próxima posição // mesma coisa do jeito manual de fazer (dividindo por 2)
                y = y / 2;
                if (y > 0){
                    b2[i] = y % 2;
                } else {
                    b2[i] = 0;
                }
            }
        }
        /*
        //invertendo na hora de printar
        for(int i = TF - 1 ; i >= 0 ; i--){
            printf("%d",b2[i]);
        }
        // // // // // // // // // // // // // // //
        printf("\n");
        // // // // // // // // // // // // // // //
        */
        //condição para popular o vet da disjunção exclusiva
        for(int i = 0 ; i < 32 ; i++){
            if(b1[i] == 0 && b2[i] == 0){
                b3[i] = 0;
            } else if (b1[i] == 0 && b2[i] == 1){
                b3[i] = 1;
            } else if (b1[i] == 1 && b2[i] == 0){
                b3[i] = 1;
            } else {
                b3[i] = 0;
            }
        }
        /*
        //invertendo na hora de printar
        for(int i = TF - 1 ; i >= 0 ; i--){
            printf("%d",b3[i]);
        }
        // // // // // // // // // // // // // // //
        printf("\n");
        // // // // // // // // // // // // // // //
        */
        //condição para converter o vetor da disjunção exclusiva ( binário para decimal )
        for(int i = 0, j = 0, k = 2 ; i < 32 ; i++,j++){
            sf += b3[i] * (pow(k,j));
        }
        //printando o valor decimal
        printf("%u\n",sf);
    }

    return 0;
}
    