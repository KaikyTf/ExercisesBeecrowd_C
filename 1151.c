#include <stdio.h>
int main(){
    int x,z,n, i = 2;
    

    scanf("%d",&x);
    n = x;
    scanf("%d",&z);
    
    while(z <= x ){
        scanf("%d",&z);
    }
    
    while(n <= z){
        n += n + 1;
        i++;
    }
    
    printf("%d\n",i);
    
    return 0;
    
}