#include <stdio.h>
int main(){
    int x, a = 1;
    
    scanf("%d",&x);
    
    while (x != 0) {
        
        
        
        if(a != x){
            printf("%d ",a);
            a++;
            
        } else {
            printf("%d\n",a);
            a = 1;
            scanf("%d",&x);
            
        }
        
        
        
    }
    
    return 0;
}