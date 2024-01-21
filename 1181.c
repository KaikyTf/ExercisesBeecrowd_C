#include <stdio.h>
#define TF 12
int main(){
    int L;
    float mat[12][12], result = 0;
    char op;
    
    scanf("%d",&L);
    scanf(" %c",&op); //espaço em branco limpa o buffer
    
    for(int i = 0; i < TF ; i++)
        for(int j = 0 ; j < TF ; j++)
            scanf("%f",&mat[i][j]);
    
    for(int j = 0 ; j < TF ; j++)
       result = result + mat[L][j];
    
    
    if(op == 'M')
        result = result / 12 ;
    
    printf("%.1f\n",result);
    return 0;
}

