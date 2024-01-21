#include <stdio.h>

int main()
{
    float n1,n2,media;
    int i = 1;
    
    for(; i < 2; ){
        media = 0;
        
        scanf("%f",&n1);
        
        for(;n1 < 0 || n1 > 10;){
            printf("nota invalida\n");
            scanf("%f",&n1);
        }
        
        scanf("%f",&n2);
        
        for(;n2 < 0 || n2 > 10;){
            printf("nota invalida\n");
            scanf("%f",&n2);
        }
        
        media = (n1 + n2) / 2;
        printf("media = %.2f\n",media);
        printf("novo calculo (1-sim 2-nao)\n");
        
        scanf("%d",&i);
        
        for(; i > 2 || i < 0;){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&i);
        }
        
        
        
    }
    
    
    
    return 0;
}