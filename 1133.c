#include <stdio.h>
int main(){
    int x,y,z,inicio,fim;
    scanf("%d %d",&x,&y);

    if(x > y){
        z = y + 1;
        fim = x - 1;
        for (inicio = z ; inicio <= fim ; inicio++){
            if(inicio % 5 == 3 || inicio % 5 == 2){
            printf("%d\n",inicio);
            
        }
        }
        
    } else {
        z = x + 1;
        fim = y - 1;
        for(inicio = z ; inicio <= fim; inicio++){
            if(inicio % 5 == 3 || inicio % 5 == 2){
            printf("%d\n",inicio);
        }
        }
        
    }

    return 0;
}