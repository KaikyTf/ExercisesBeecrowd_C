#include <stdio.h>
int main(){
    int x,y,x1,y1,z;
    z = 0;

    scanf("%d", &x);
    scanf("%d", &y);

    if (x > y){
        x1 = y + 1;
        y1 = x - 1;    
    } else {
        x1 = x + 1;
        y1 = y - 1;
    }
    
    for ( int i = x1 ; i <= y1 ; i++){
        
        if (i % 2 != 0){
            z += i;
        }
        
    }
    
    printf("%d\n",z);
    
    return 0;

}