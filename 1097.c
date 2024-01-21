#include <stdio.h>
int main(){
    int I = 1;
    int J = 7;
    int Ji;
    Ji = J;

    for (int i = 1 ; i <= 15 ; i++){
        
        printf("I=%d J=%d\n",I,J);
        J = J - 1;
        if ( i % 3 == 0){
            I = I + 2;
            J = Ji + 2;
            Ji = J; 
        }
    }
   
    return 0;
}   