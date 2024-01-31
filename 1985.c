#include <stdio.h>
int main(){
    int x, y, z;
    float result = 0;
    
    
    scanf("%d",&z);
    
    for(int i = 0 ; i < z ; i++){
        scanf("%d %d",&x,&y);
        
        if(x == 1001)
            result += 1.5 * y;
        else if(x == 1002)
            result += 2.5 * y;
        else if(x == 1003)
            result += 3.5 * y;
        else if(x == 1004)
            result += 4.5 * y;
        else
            result += 5.5 * y;
        
    }
    
    printf("%.2f\n",result);
    
    return 0;
}

