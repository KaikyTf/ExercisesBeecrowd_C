#include <stdio.h>
int main(){
    float I = 0;
    float J1 = 1;
    float J2 = 2;
    float J3 = 3;

    for (int i = 1 ; i <= 33 ; i++){
        if(i == 1 || i == 4 || i == 7 || i == 10 || i == 13 || i == 16 || i == 19 || i == 22 || i == 25 || i == 28 || i == 31 ){
            if( I == (int)I){
                printf("I=%.0f J=%.0f\n",I,J1);
            } else if (I > 1.9){
                printf("I=2 J=3\n");
            } else {
                printf("I=%.1f J=%.1f\n",I,J1);
            }

            J1 = J1 + 0.2;
        }
           
        if(i == 2 || i == 5 || i == 8 || i == 11 || i == 14 || i == 17 || i == 20 || i == 23 || i == 26 || i == 29 || i == 32 ){
            if( I == (int)I){
                printf("I=%.0f J=%.0f\n",I,J2);
            } else if (I > 1.9) {
                printf("I=2 J=4\n");
            } else {
                printf("I=%.1f J=%.1f\n",I,J2);
            }
            J2 = J2 + 0.2;
        }

        if(i == 3 || i == 6 || i == 9 || i == 12 || i == 15 || i == 18 || i == 21 || i == 24 || i == 27 || i == 30 || i == 33 ){
            if( I == (int)I){
                printf("I=%.0f J=%.0f\n",I,J3);
            } else if (I > 1.9) {
                printf("I=2 J=5\n");
            } else {
                printf("I=%.1f J=%.1f\n",I,J3);
            }
            J3 = J3 + 0.2;
            I = I + 0.2;
        }
        
    
    }
   
    return 0;
}   