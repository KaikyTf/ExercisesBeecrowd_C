#include <stdio.h>
int main(){
    int positivos = 0;
    double x;
    for(int i = 0; i < 6 ; i++ ){
        scanf("%lf",&x);
        if(x > 0){
            positivos++;
        }
    }
    printf("%d valores positivos\n",positivos);
    
    return 0;
}