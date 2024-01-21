#include <stdio.h>

int main(){
    
    float disp;
    int x;
    int cont;
    scanf("%d",&x);
    
    for(int i = 0 ; i < x ; i++){
        scanf("%f",&disp);
        
        while(disp > 1){
            disp = disp / 2;
            cont++;
        }
        
        printf("%d dias\n",cont);
        cont = 0;
    }
    
    return 0;
}

