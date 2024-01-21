#include <stdio.h>
int main(){
    int hi,mi,hf,mf,x,y;
    scanf("%d",&hi);
    scanf("%d",&mi);
    scanf("%d",&hf);
    scanf("%d",&mf);

    x = hf - hi;
    y = mf - mi;

    if((hf == hi && mf < mi) || hf < hi){
        x = 24 - hi + hf;
    }
    if(mf < mi){
        y = 60 - mi + mf;
        x--;
    } 
    if ( hf == hi && mi == mf){
        x = 24;
        y = 0;
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);

    return 0;
}