#include <stdio.h>
int main(){
    int x,y,z,soma = 0;

    scanf("%d",&x);

    for(int i = 0 ; i < x ; i++){
        soma = 0;
        scanf("%d %d",&y,&z);

        if(y % 2 == 0){
            y = y + 1;
        }

        for(int k = 0 ; k < z ; k++){
            soma = soma + y;
            y = y + 2;
        }

        printf("%d\n",soma);

    }

    return 0;
}