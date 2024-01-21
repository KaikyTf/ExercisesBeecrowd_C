#include <stdio.h>
int main(){
    int x,par;
    par = 0;

    
    for(int i = 1; i <= 5; i++){
         scanf("%d",&x);
        if(x % 2 == 0 ){
           
            par++;
        }
    }

    printf("%d valores pares\n",par);

    return 0;
}