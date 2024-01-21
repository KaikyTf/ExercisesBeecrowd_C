#include <stdio.h>
#include <stdlib.h>
int main(){
    int h, qtd;
    int pular, result = 0;
    int x[100];
    
    scanf("%d %d",&h,&qtd);
    
    for(int i = 0; i < qtd ;  i++){
        scanf("%d",&x[i]);
    }
    
    for(int i = 0; i < qtd ; i++){
        if(i != 0){
            pular = abs( x[i] - x[i - 1]);
            
            if(pular > h){
                result = 1;
                break;
            }
        }
    }
    
    if(result == 1)
        printf("GAME OVER\n");
    else 
        printf("YOU WIN\n");

    return 0;
}

