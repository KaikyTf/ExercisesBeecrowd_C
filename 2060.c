#include <stdio.h>
int main(){
    int x;
    int z;
    int n1,n2,n3,n4;
    
    n1 = 0, n2 = 0, n3 = 0, n4 = 0;
    
    scanf("%d",&x);
    
    for(int i = 0 ; i < x ; i++){
        scanf("%d",&z);
        
        if(z % 2 == 0)
            n1++;
        if(z % 3 == 0)
            n2++;
        if(z % 4 == 0)
            n3++;
        if(z % 5 == 0)
            n4++;
        
    }
    
    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",n1,n2,n3,n4);
    
    return 0;
}

