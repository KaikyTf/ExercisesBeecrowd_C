#include <stdio.h>
int main(){
    int x,y;
    int result;
    
    scanf("%d",&x);
    
    for(int i = 0 ; i < x ; i++){
        scanf("%d",&y);
        
        if(y == 2015){
            result = 1;
            printf("%d A.C.\n",result);
        } else if(2015 < y){
            result = (y - 2015) + 1;
            printf("%d A.C.\n",result);
        } else {
            result = 2015 - y;
            printf("%d D.C.\n",result);
        }
    }

    return 0;
}

