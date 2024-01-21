#include <stdio.h>
int main(){
    int i,ifinal,f;
    scanf("%d %d",&i,&ifinal);
    if(ifinal < i || i == ifinal){
        ifinal = ifinal + 24;
    }else {

    }
    f = ifinal - i;
    printf("O JOGO DUROU %d HORA(S)\n",f);

    return 0;
}