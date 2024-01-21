#include <stdio.h>
int main(){
    int x,y,atraso;
    while(scanf("%d:%d",&x,&y) != EOF){
        
        if(x == 7)
            atraso = y;
        else if(x == 8)
            atraso = y + 60;
        else if(x == 9)
            atraso = y + 60 + 60;
        else
            atraso = 0;
            
        printf("Atraso maximo: %d\n",atraso);
    }
    
    
    return 0;
}

