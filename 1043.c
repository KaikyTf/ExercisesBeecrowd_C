#include <stdio.h>
int main(){
    double x,y,z,p,a;
    scanf("%lf %lf %lf",&x,&y,&z);
    if (x + y > z && z + y > x && x + z > y ){
        p = x + y + z;
        printf("Perimetro = %.1lf\n",p);
        
    }else {
        a = (x + y ) * z / 2;
        printf("Area = %.1lf\n",a); 
    }
          
    return 0;
    
}