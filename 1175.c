#include <stdio.h>
#define TF 20
int main(){
    int vet1[TF],vet2[TF];

    for(int i = 0 ; i < TF ; i++ ){
        scanf("%d",&vet1[i]);
    }
    
    for(int i = 0 , j = TF - 1 ; i < TF ; i++ , j--){
        vet2[i] = vet1[j];
    }

    for(int i = 0 ; i < TF ; i++){
        printf("N[%d] = %d\n",i,vet2[i]);
    }

    return 0;
    
}