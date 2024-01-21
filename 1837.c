#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y;
    int q, r;
    
    scanf("%d %d",&x,&y);
    
    q = x / y;
    r = x % y;
    
    if (r < 0) {
        r = (r + abs(y)) % abs(y);
        q = (x - r) / y;
    }
    
    printf("%d %d\n",q,r);
    
    return 0;
}

