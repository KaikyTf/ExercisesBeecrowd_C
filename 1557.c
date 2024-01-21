#include <stdio.h>
#include <math.h>
int main(){
    int tam;
    int elem = 1;
    
    scanf("%d",&tam);
    while(tam != 0){
        int mat[tam][tam];
        
        for(int i = 0 ; i < tam ; i++)
            for(int j = 0 ; j < tam ; j++){
                if(i == 0 && j == 0)
                    mat[i][j] = elem;
                else if(i != 0 && j == 0)
                    mat[i][j] = mat[i - 1][j] * 2;
                else
                    mat[i][j] = mat[i][j - 1] * 2;
            }
        
        int digitos = 0;
        int t;
        //maior valor da matriz
        t = mat[tam - 1][tam - 1];
        //contar digitos do ultimo valor
        do{
            //quando divide um inteiro por 10, reduz um digito dele, ex = 123/10 = 12;
            t = t/10;
            digitos++;
        }while(t > 0);
        
        for(int i = 0 ; i < tam ; i++){
            for(int j = 0 ; j < tam ; j++){
                if(j == 0 )
                    printf("%*d",digitos,mat[i][j]);
                else 
                    printf(" %*d",digitos,mat[i][j]);
            }
            printf("\n");
        }
        
        printf("\n");
        scanf("%d",&tam);
    }
    
    return 0;
}

