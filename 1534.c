#include <stdio.h>
int main(){
    int tam;
    int cont;
    
    while(scanf("%d",&tam) != EOF){
        int mat[tam][tam];
        
        for(int i = 0 ; i < tam ; i++){
            cont = 0;
            for(int j = 0; j < tam ; j++){
                if(i == 0){
                    if(j == 0)
                        mat[i][j] = 1;
                    else if(j == tam - 1)
                        mat[i][j] = 2;
                    else
                        mat[i][j] = 3;
                }else if(i == tam - 1){
                    if(j == 0)
                        mat[i][j] = 2;
                    else if(j == tam - 1)
                        mat[i][j] = 1;
                    else
                        mat[i][j] = 3;
                } else{
                    
                    if(j == i)
                        mat[i][j] = 1;
                    else if (j == tam - i - 1)
                        mat[i][j] = 2;
                    else
                        mat[i][j] = 3;
                }
            } 
        }    
        
        //correção do meio
        if(tam % 2 != 0)
            mat[tam / 2][tam / 2] = 2;
        
        for(int i = 0 ; i < tam ; i++){
            for(int j = 0 ; j < tam ; j++)
                printf("%d",mat[i][j]);
            printf("\n");
        }
    }
    
    return 0;
}



