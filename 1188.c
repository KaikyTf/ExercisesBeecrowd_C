#include <stdio.h>
#define TF 12
int main(){
    int cont = 0;
    double mat[TF][TF], result = 0; 
    char op;

    scanf(" %c",&op); //espaço em branco limpa o buffer
    
    for(int i = 0; i < TF ; i++)
        for(int j = 0 ; j < TF ; j++)
            scanf("%lf",&mat[i][j]);
    
    for(int i = TF - 1 ; i > TF / 2 ; i--)
        for(int j = i - 1 ; j > TF - 1 - i ; j--){
            result = result + mat[i][j];
            cont++;
        }    
    
    if(op == 'M')
        result = result / cont ;
    
    printf("%.1lf\n",result);
    return 0;
}
