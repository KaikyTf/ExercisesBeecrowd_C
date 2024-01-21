#include <stdio.h>

int main(){
    int x,y;
    int inter = 0;
    int gremio = 0;
    int empate = 0;
    int inicio = 0;
    int i = 0;
    
    while(inicio != 2){
        
        scanf("%d %d",&x,&y);
        
        if(x > y ){
            inter += 1;
        } else if (y > x){
            gremio += 1;
        } else {
            empate += 1;
        }
        
        i++;
        
        printf("Novo grenal (1-sim 2-nao)\n");
        
        scanf("%d",&inicio);
    }
    
    printf("%d grenais\n",i);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",empate);
    if( inter > gremio){
        printf("Inter venceu mais\n");
    } else if( gremio > inter){
        printf("Gremio venceu mais\n");
    }
    return 0;
}
