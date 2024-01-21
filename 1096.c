#include <stdio.h>
int main(){
    int I = 1;
    int J = 7;
    for (int i = 1 ; i <= 15 ; i++){
        
        printf("I=%d J=%d\n",I,J);
        J = J - 1;
        if ( i % 3 == 0){
            I = I + 2;
            J = 7; 
        }
    }
   
    return 0;
}   