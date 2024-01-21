#include <stdio.h>
#include <math.h>
int main(){
    double a,b,c,delta,r1,r2;
    scanf("%lf %lf %lf",&a,&b,&c);
    delta = (b * b) - (4 * a * c);
    r1 = (-b + sqrt(delta)) / (2 * a);
    r2 = (-b - sqrt(delta)) / (2 * a);

    if ( delta > 0 && 2 * a > 0){
         printf("R1 = %.5lf\nR2 = %.5lf\n",r1,r2);
    }else{
        printf("Impossivel calcular\n");
    }
   

    return 0;
}