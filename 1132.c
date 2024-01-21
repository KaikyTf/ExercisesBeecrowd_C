#include <stdio.h>
int main(){
    int x,y,soma,maior,menor;
    scanf("%d %d",&x,&y);
    soma = 0;

    if(x > y){
        maior = x;
        menor = y;
    } else {
        maior = y;
        menor = x;
    }

    for (int i = 0 ; menor <= maior; menor++){
        if(menor % 13 != 0 ){
            soma += menor;
        } else {

        }


    }

    printf("%d\n",soma);

    return 0;
    
}