#include <stdio.h>
#define TF 100
int main(){
    float vet1[TF];
    for(int i = 0 ; i < TF ; i++){
        scanf("%f",&vet1[i]);
    }
    for(int i = 0 ; i < TF ; i++){
        if(vet1[i] <= 10)
            printf("A[%d] = %.1f\n",i,vet1[i]);
    }
    
    return 0;
}