#include <stdio.h>
int main(){
    int x;
    int z;
    
    scanf("%d",&x);
    
    for(int i = 0 ; i < x ; i++){
        scanf("%d",&z);
        if(z % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}

