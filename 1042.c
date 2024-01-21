#include <stdio.h>
int main(){
    int x,y,z,maior,meio,menor;
    scanf("%d %d %d",&x,&y,&z);
    if (x > y && x > z){
        maior = x;
        if (y > z){
            meio = y;
            menor = z;
        } else {
            meio = z;
            menor = y;
        }
    } else if (y > x && y > z){
        maior = y;
        if( x > z ){
            meio = x;
            menor = z;
        } else {
            meio = z;
            menor = x;
        }
    } else if (z > x && z > y){
        maior = z;
        if(y > x ){
            meio = y;
            menor = x;
        } else {
            meio = x;
            menor = y;
        }
    }

    printf("%d\n%d\n%d\n\n",menor,meio,maior);
    printf("%d\n%d\n%d\n",x,y,z);

    return 0;
}