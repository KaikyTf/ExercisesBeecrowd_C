#include <stdio.h>
int main(){
    
    long int x;
    scanf("%ld",&x);
    
    for(int i = 1 ; i <= x ; i++){
        
        if(i != x )
            printf("Ho ");
        else
            printf("Ho!\n");
    }

    return 0;
}

