#include <stdio.h>

    int main(){
        int z = 0;
        int x;
        double y = 0;
        double media;
        scanf("%d",&x);
            if(x > 0){
                    y += x;
                    z++;  
                } 
            while(x > 0){
                scanf("%d",&x);
                if(x > 0){
                    y += x;
                    z++;  
                } 
            }
            
            
            
            
        
        media = y / z;

        printf("%.2lf\n",media);
    
        return 0;
    }