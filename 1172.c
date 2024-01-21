#include <stdio.h>
#define TF 11
int main(){
    int vet[TF];

    for (int i = 0 ; i < vet[TF] ; i++){
        scanf("%d",&vet[i]);

        if(vet[i] <= 0){
            vet[i] = 1;
        }
    }

    for (int i = 0 ; i < TF; i++){
        printf("X[%d] = %d\n",i,vet[i]);
    }
}