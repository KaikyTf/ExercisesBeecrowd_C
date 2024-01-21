#include <stdio.h>
#include <string.h>
int main(){
    int bin = 0,cont = 0;
    char fala[20];
    
    while(cont < 3){
        fflush(stdin);
        gets(fala);
        
        if(strcmp(fala,"caw caw") == 0){
            cont++;
            printf("%d\n",bin);
            bin = 0;
        }else {
            for(int i = 0; i < 3 ; i++){
                if(i == 0 && fala[i] == '*')
                    bin += 4; 
                else if(i == 1 && fala[i] == '*')
                    bin += 2;
                else if(i == 2 && fala[i] == '*')
                    bin +=1;
            }
            
        }
        
    }
    return 0;
}

