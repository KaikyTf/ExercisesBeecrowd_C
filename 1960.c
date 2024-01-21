#include <stdio.h>
int main(){
    int x;
    
    scanf("%d",&x);
    
    
    while(x > 0){
        if(x >= 1000){
            x = x - 1000;
            printf("M");
        } else if(x >= 900){
            x = x - 900;
            printf("CM");
        }else if(x >= 500){
            x = x - 500;
            printf("D");
        } else if(x >= 400){
            x = x - 400;
            printf("CD");
        } else if(x >= 100){
            x = x - 100;
            printf("C");
        } else if(x >= 90){
            x = x - 90;
            printf("XC");
        } else if(x >= 50){
            x = x - 50;
            printf("L");
        } else if(x >= 40){
            x = x - 40;
            printf("XL");
        } else if(x >= 10){
            x = x - 10;
            printf("X");
        } else if(x >= 9){
            x = x - 9;
            printf("IX");
        } else if(x >= 5){
            x = x - 5;
            printf("V");
        } else if(x >= 4){
            x = x - 4;
            printf("IV");
        } else {
            x = x - 1;
            printf("I");
        }
    }
    
    printf("\n");
    
    return 0;
}

