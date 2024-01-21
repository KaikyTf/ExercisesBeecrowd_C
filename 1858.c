#include <stdio.h>
int main(){
    int x;
    int vet[100];
    int menor, pos;
    
    scanf("%d",&x);
    
    for(int i = 0; i < x ; i++)
        scanf("%d",&vet[i]);

    for(int i = 0; i < x ; i++){
        if(i == 0){
            menor = vet[i];
            pos = i + 1;
        }else
            if(vet[i] < menor){
                menor = vet[i];
                pos = i + 1;
            }
    }

    printf("%d\n",pos);
    
    return 0;
}

