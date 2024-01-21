#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    double p, lado, area;
    scanf("%d",&a);
    
    while( a != 0 ){
        
        scanf("%d %d",&b,&c);
        
        area = a * b;
        p = (double) c / 100.0;
        
        lado = area / p;
        lado = sqrt(lado);
        //arredonda valor para baixo
        lado = floor(lado);
        
        printf("%.0lf\n",lado);
        
        scanf("%d",&a);
    }
    
    return 0;
}

