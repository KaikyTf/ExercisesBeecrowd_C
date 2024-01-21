#include <stdio.h>
#define TF 12
int main(){
    int cont = 0;
    float mat[12][12], result = 0; 
    char op;

    scanf(" %c",&op); //espaço em branco limpa o buffer
    
    for(int i = 0; i < TF ; i++)
        for(int j = 0 ; j < TF ; j++)
            scanf("%f",&mat[i][j]);
    
    for(int i = 0 ; i < TF - 1 ; i++)
        for(int j = 0 ; j < TF - 1 - i ; j++){
            result = result + mat[i][j];
            cont++;
        }    
    
    if(op == 'M')
        result = result / cont ;
    
    printf("%.1f\n",result);
    return 0;
}



