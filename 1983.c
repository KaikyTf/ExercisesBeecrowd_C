#include <stdio.h>
int main(){
    int vezes,pos;
    
    scanf("%d",&vezes);
    float vet1[vezes], vet2[vezes];
    
    for(int i = 0 ; i < vezes; i++){
        scanf("%f",&vet1[i]);
        scanf("%f",&vet2[i]);
    }
    
    for(int i = 0 ; i < vezes; i++){
        if(i == 0)
            pos = i;
        else
            if(vet2[i] > vet2[pos])
                pos = i;
    }
    
    if(vet2[pos] < 8.0)
        printf("Minimum note not reached\n");
    else
        printf("%.0f\n",vet1[pos]);
    
    return 0;
    
    
}
