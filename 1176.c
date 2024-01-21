#include <stdio.h>
#define TF 61
int main(){
    int x,print;
    scanf("%d",&x);
    for(int k = 0 ; k < x ; k++){
        double vet1[TF];
        vet1[0] = 0;
        vet1[1] = 1;
        for(int i = 2 ; i < TF ; i++){
            vet1[i] = vet1[i-1] + vet1[i-2];
        }

        scanf("%d",&print);
        printf("Fib(%d) = %.0lf\n",print,vet1[print]);
        
    }
    

    return 0;
}