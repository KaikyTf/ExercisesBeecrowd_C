#include <stdio.h>
#define TF 5
int main(){
    int par[TF],impar[TF],verif,contp = 0, conti = 0,print = 0;

    for(int k = 0; k < 15 ; k++){

        scanf("%d",&verif);
        
        if(verif % 2 == 0){
            par[contp] = verif;
            contp++;
        }
        if(verif % 2 != 0){
            impar[conti] = verif;
            conti++;
        }
        if(contp == 5){
            for(int idx = 0 ; idx < contp ; idx++){
                printf("par[%d] = %d\n",idx,par[idx]);
            }
            contp = 0;
            print++;
        }
        if(conti == 5){
            for(int idx = 0 ; idx < conti ; idx++){
                printf("impar[%d] = %d\n",idx,impar[idx]);
            }
            conti = 0;
            print++;
        }
        if(conti + contp == 5 && print == 2){
            for(int idx = 0 ; idx < conti ; idx++){
                printf("impar[%d] = %d\n",idx,impar[idx]);
            }
            for(int idx = 0 ; idx < contp ; idx++){
                printf("par[%d] = %d\n",idx,par[idx]);
            }
            contp = 0;
            conti = 0;
            print = 0;
    
        }
    }

    return 0;
}