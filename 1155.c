#include <stdio.h>
int main(){
    int x = 2;
    float s = 0;
    
    while (x <= 100){
        
        s = s +(1.0/x);
        x = x + 1;
        
        
    }
    
    s = s + 1.0;
    printf("%.2f\n",s);
    
    return 0;
}