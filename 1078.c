#include <stdio.h>
int main(){
    int x,z;
    scanf("%d", &x);
    if (x >= 2){
        for (int i = 1; i >= 0 && i <= 10; i++){
        z = x * i;
        printf("%d x %d = %d\n",i,x,z);
        }
    }else{

    }
    

    return 0;
} 