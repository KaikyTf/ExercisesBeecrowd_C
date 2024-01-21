#include <stdio.h>
int main(){
    int tam;
    int flag;
    
    scanf("%d",&tam);
    while(tam != 0){
        int mat[tam][tam];
        
        for(int i = 0; i < tam; i++){
            flag = 0;
            for(int j = 0; j < tam; j++){
                if(i == 0)
                    mat[i][j] = j + 1;
                else if (i == tam - 1) 
                    mat[i][j] = tam - j;
                else{
                    if(j == 0)
                        mat[i][j] = i + 1;
                    else if(flag == 0){
                        mat[i][j] = mat[i][j - 1] - 1;
                        if(mat[i][j - 1] - 1 == 1)
                            flag = 1;
                    } else if(flag == 1)
                        mat[i][j] = mat[i][j - 1] + 1;
                }
            }   
        }
        
        for(int i = 0; i < tam ; i++){
            for(int j = 0 ; j < tam ; j++){
                if(j == 0)
                    printf("%3d",mat[i][j]);
                else
                    printf(" %3d",mat[i][j]);
            }
            printf("\n");
        }
        
        printf("\n");   
        scanf("%d",&tam);
    }

    return 0;
}

