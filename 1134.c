#include <stdio.h>

int main(){
    int al = 0;
    int ga = 0;
    int di = 0;
    int x = 0;
    
    for(; x != 4 ;){
        
        scanf("%d",&x);
        if(x == 1){
           al++; 
        } else if ( x == 2){
            ga++;
        } else if (x == 3){
            di++;
        } else if (x == 4){
            break;
        }
       
    }
    
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",al,ga,di);
    
    return 0;
}
