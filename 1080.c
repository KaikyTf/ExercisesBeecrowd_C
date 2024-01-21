#include <stdio.h>
int main(){
    int x[100];
    int valor = 0;
    int p = 0;
    for (int i = 1 ; i <= 100 ; i++){
        scanf("%d",&x[i]);
        if (x[i] > valor){
            valor = x[i];
            p = i;
        }
        
    }

    printf("%d\n%d\n",valor,p);

    return 0;
}