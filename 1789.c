#include <stdio.h>
int main(){
    int lesma[50];
    int x, t, maior;
    
    while(scanf("%d",&x) != EOF){
        scanf("%d",&t);
        
        for(int i = 0; i < t ; i++){
            scanf("%d",&lesma[i]);
            
            if(i == 0)
                maior = lesma[i];
            else if (lesma[i] > maior)
                maior = lesma[i];
        }
        
        if(maior < 10)
            printf("1\n");
        else if(maior >= 10 && maior < 20)
            printf("2\n");
        else 
            printf("3\n");
    }

    return 0;
}

