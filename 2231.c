#include <stdio.h>
int main(){
    
    int n, i, y, x, aux;
    int total = 0;
    int contador = 1;
    float media, maior, menor;

    scanf("%d %d", &n, &i);

    while (n > 0 && i > 0){

        int vettemp[100];
        
        for (int a = 0; a < n; a++)
            scanf("%d", &vettemp[a]);

        maior = -201;
        menor = 201;
        aux = 0;
        x = i;
            
        while (x <= n){
            
            total = 0;
            y = aux;
            
            while (y < x){
                total += vettemp[y];
                y++;
            }

            media = total / i;
            
            if (media > maior)
                maior = media;
            
            if (media < menor)
                menor = media;
                
            x++;
            aux++;
        }
        
        printf("Teste %d\n", contador);
        printf("%.0f %.0f\n", menor, maior);
        printf("\n");
        
        contador++;        

        scanf("%d %d", &n, &i);
    }
    
    return 0;
}