#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);

    for(int i=1; i <= x ; i++){
        scanf("%d",&y);
        int primo = 1;
        
        if(y <= 1){
            primo = 0;
        } else{
            for(int z = 2; z < y; z++){
                if (y % z == 0){
                    primo = 0;
                }
            }
        }
        if(primo){
            printf("%d eh primo\n",y);
        } else{
            printf("%d nao eh primo\n",y);
        }
    }
    
    
    
    return 0;
    	
}