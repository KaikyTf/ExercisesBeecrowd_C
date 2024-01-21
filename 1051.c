#include <stdio.h>
int main(){
    float s,sf;
    scanf("%f",&s);  
    if(s >= 0 && s <= 2000.00){
    printf("Isento\n");
    }else if(s > 2000.00 && s <= 3000.00){
    sf = (s - 2000) * 0.08;
    printf("R$ %.2f\n",sf);
    }else if(s > 3000.00 && s <= 4500.00){
    sf = (1000*0.08) + ((s - 3000) * 0.18);
    printf("R$ %.2f\n",sf);
    }else if ( s > 4500.00 ){
    sf = (1000*0.08) + (1500*0.18) + ((s-4500) *0.28);
    printf("R$ %.2f\n",sf);
        
    }   
}