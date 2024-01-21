#include <stdio.h>
int main(){
    float x,y,z,a,b,c;
    scanf("%f %f %f",&x,&y,&z);

    if(x >= y && x >= z){
        a = x;
        if(y >= z){
            b = y;
            c = z;    
        }else{
            b = z;
            c = y;
        }
    } else if (y >= x && y >= z){
        a = y;
        if(x >= z){
            b = x;
            c = z;
        } else{
            b = z;
            c = x;
        }
    } else if(z >= x && z >= y){
        a = z;
        if(x >= y){
            b = x;
            c = y;
        } else{
            b = y;
            c = x;
        }
    }


    if(a + b > c && c + b > a && a + c > b ){
        if(a*a == b*b + c*c){
            printf("TRIANGULO RETANGULO\n");
        }else if(a * a > b*b + c*c){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if(a * a < b*b + c*c){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if(a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        } else if(a == b || a == c || b == c){
            printf("TRIANGULO ISOSCELES\n");
        }       

    }else {
        
        printf("NAO FORMA TRIANGULO\n");
    }
        
    

    return 0;
}
