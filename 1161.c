#include <stdio.h>
int main(){
    int x,y,i,j;
    long double s1,s2,soma;
    while(scanf("%d %d",&x,&y) != EOF ){
        if(x != 0){
            i = x;
            s1 = 1;
            
            while(i > 1){
                s1 *= i;
                i--;
            }
            
        } else
            s1 = 1;
        
        if(y != 0){
            j = y;
            s2 = 1;
            
            while(j > 1){
                s2 *= j;
                j--;
            }
            
        } else
            s2 = 1;
        
        
        soma = s1 + s2;
        
        printf("%.0Lf\n",soma);
    }
    
    return 0;
}

