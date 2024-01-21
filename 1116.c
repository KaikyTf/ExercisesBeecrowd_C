#include <stdio.h>
int main(){
    int w;
    float x,y,z;
    scanf("%d",&w);
    for(int i = 0 ; i < w ; i++){
        scanf("%f %f",&x,&y);
        if (y != 0){
        z = (x / y);
        printf("%.1f\n",z);
        } else {
        printf("divisao impossivel\n");
        }
    }
    

    return 0;
}