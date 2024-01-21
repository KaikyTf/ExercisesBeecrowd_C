#include <stdio.h>
int main(){
    int x,n1,n2,n3;
    char s[100];
    scanf("%d",&x);
    n1 = 1;
    n2 = n1 * n1;
    n3 = n1 * n1 * n1;

    for(int i = 0; i < 2*x ; i++){
        
        
        if(i > 0 ){
    
            n2 = n1 * n1 + 1;
            n3 = n1*n1*n1 + 1;
            if(i%2 == 0){
            n1++;
            n2 = n1 * n1;
            n3 = n1*n1*n1;
            }
        }

        sprintf(s,"%d %d %d",n1,n2,n3);
        printf("%s\n",s);
        
        
    } 
    
    return 0;
        
                                          
}                  