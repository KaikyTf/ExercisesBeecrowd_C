#include <stdio.h>
int main(){
    int x,y,maior,menor,soma;

    scanf("%d %d",&x,&y);

    for(; x > 0 && y > 0; ){
        
        soma = 0;

        if(x > y){
            maior = x;
            menor = y;
        } else {
            maior = y;
            menor = x;
        }

        for (int i = 0 ; menor <= maior; menor++){
            soma += menor;
            printf("%d ",menor);

        }

        printf("Sum=%d\n",soma);

        scanf("%d %d",&x,&y);

        
    } 

    return 0;
    
}
