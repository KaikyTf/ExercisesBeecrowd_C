#include <stdio.h>

int main(){
    int tam;
    int inicio, fim, elem;
    int linha, coluna;
    
    scanf("%d",&tam);
    
    while(tam != 0){
        
        int mat[tam][tam];
        
        inicio = 0;
        fim = tam;
        elem = 1;
        
        while(1){
            for(linha = inicio ; linha < fim ; linha++)
                for(coluna = inicio ; coluna < fim ; coluna++)
                    mat[linha][coluna] = elem;
          
            if(fim == 0)
                break;
            
            fim--;
            inicio++;
            elem++;
            
            
        }
        
        for(linha = 0 ; linha < tam ; linha++){
            for(coluna = 0 ; coluna < tam ; coluna++){
                if(coluna == 0) 
                    printf("%3d",mat[linha][coluna]);
                else
                    printf(" %3d",mat[linha][coluna]);
            }
            
            printf("\n");
        }
        
        printf("\n");
        
        scanf("%d",&tam);
        
    }

    return 0;
    
}
// // // // // //
/*
#include <stdio.h>
int main(){
    int mat[100][100];
    int x;
    
    scanf("%d",&x);
    
    while(x != 0){
        
        for(int i = 0 ; i < x ; i++)
            for(int j = 0 ; j < x ; j++)
                mat[i][j] = 1;
                
        
        if( x % 2 == 0 ) {
            
             // // /// //// ///// PAR ///// //// /// // //
             
            // linha // cima para baixo
            for(int i = 0 ; i < x / 2; i++){
                if(i == 0){
                    for(int j = i + 1, k = x - 2 ; j <= k ; j++, k--){
                        mat[i][j] = i + 1;
                        mat[i][k] = i + 1;
                    }
                }else{
                    for(int j = i, k = x - i - 1 ; j <= k ; j++, k--){
                        mat[i][j] = i + 1;
                        mat[i][k] = i + 1;
                    }
                }
            } 
        
            //linha // baixo para cima
            for(int i = x - 2, z = 1 ; i > (x / 2) - 1 ; i--, z++)
                for(int j = z , k = i ; j <= k ; j++, k--){
                    mat[i][j] = z + 1;
                    mat[i][k] = z + 1;
                }
         
            //coluna // esquerda para direita
            for(int i = 1 ; i < x / 2 ; i++)
                for(int j = i ; mat[j + 1][i] != mat[j][i]; j++)
                    mat[j + 1][i] = mat[j][i];
         
            //coluna // direita para esquerda
            for(int i = x - 2, z = 1 ; i > (x / 2) - 1 ; i--,z++)
                for(int j = z ; mat[j + 1][i] != mat[j][i]; j++)
                    mat[j + 1][i] = mat[j][i];
            
        } else {
            
                // // /// //// ///// IMPAR ///// //// /// // //
                
            // linha // cima para baixo
            for(int i = 0 ; i < x / 2; i++){
                if(i == 0){
                    for(int j = i + 1, k = x - 2 ; j <= k ; j++, k--){
                        mat[i][j] = i + 1;
                        mat[i][k] = i + 1;
                    }
                }else{
                    for(int j = i, k = x - i - 1 ; j <= k ; j++, k--){
                        mat[i][j] = i + 1;
                        mat[i][k] = i + 1;
                    }
                }
            } 
            
            //linha // baixo para cima
            for(int i = x - 2, z = 1 ; i > x / 2 ; i--, z++)
                for(int j = z , k = i ; j <= k ; j++, k--){
                    mat[i][j] = z + 1;
                    mat[i][k] = z + 1;
                }
         
            //coluna // esquerda para direita
            for(int i = 1 ; i < x / 2 ; i++)
                for(int j = i ; mat[j + 1][i] != mat[j][i]; j++)
                    mat[j + 1][i] = mat[j][i];
         
            //coluna // direita para esquerda
            for(int i = x - 2, z = 1 ; i > x / 2 ; i--,z++)
                for(int j = z ; mat[j + 1][i] != mat[j][i]; j++)
                    mat[j + 1][i] = mat[j][i];
                    
                    
            mat[x/2][x/2] = mat[( x / 2 ) - 1][x/2] + 1;
        }
        
        if (x == 1) {
            printf("  1\n");
        } else {
            for(int i = 0; i < x ; i++){
                for(int j = 0; j < x ; j++){
                    printf("%3d",mat[i][j]);
                   
                    // Adiciona espaço após cada elemento, exceto o último
                    if (j < x - 1) 
                        printf(" ");
                }
                
                // Nova linha após cada linha da matriz
                printf("\n");
            }
            
        }
        
        // Linha em branco após a impressão da matriz
        printf("\n");
        scanf("%d",&x);
    }    

    return 0;
}
*/