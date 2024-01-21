#include <stdio.h>
int main(){
    int x, y, soma = 0, i = 0;

    scanf("%d",&x);
    if(x % 2 == 0){
        y = x;
    } else {
        y = x + 1;
    }

    while(x != 0){

        while ( i < 5){
            soma += y;
            y = y + 2;
            i++;
        }

        printf("%d\n",soma);

        scanf("%d",&x);

        if(x % 2 == 0){
        y = x;
        } else {
        y = x + 1;
        }

        soma = 0;
        i = 0;
    }

    return 0;
}