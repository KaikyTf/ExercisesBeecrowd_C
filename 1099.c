#include <stdio.h>
int main(){
    int x,y,z,maior,menor,soma;
    scanf("%d",&z);

    for(int i = 0 ; i < z ; i++){
        scanf("%d %d",&x,&y);
        soma = 0;
        if(x > y){
            maior = x - 1;
            menor = y + 1;
        } else {
            maior = y - 1;
            menor = x + 1;
        }

        for(; menor <= maior ; menor++){
            if(menor % 2 != 0){
                soma += menor;
            } else {
                soma += 0;
            }

            
        }

        printf("%d\n",soma);
    }

    return 0;
}