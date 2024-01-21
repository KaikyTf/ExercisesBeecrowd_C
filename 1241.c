#include <string.h>
#include <stdio.h>
#define TF 1000
int main(){
    int y,i,falso = 0,tamA,tamB;
    char nomep[TF],nomea[TF],nomeb[TF];
    
    scanf("%d",&y);
    
    for(int i = 0 ; i < y ; i++){
        scanf("%s",&nomea);
        scanf("%s",&nomeb);
        
        if(strlen(nomea) < strlen(nomeb)){
            strcpy(nomep,nomea);
            strcpy(nomea,nomeb);
            strcpy(nomeb,nomep);
        }
        
        //printf("MAIOR = %s\n",nomea);
        //printf("MENOR = %s\n",nomeb);
        
        tamA = strlen(nomea);
        tamB = strlen(nomeb);
        
        for(int i = 0, x = 1; i < tamB;i++,x++){
            if(nomea[tamA - x] != nomeb[tamB - x])
                falso = 1;
        }
        
        if(falso == 1)
                printf("nao encaixa\n");
            else
                printf("encaixa\n");
        
         falso = 0;
    }
    
    return 0;
    
}