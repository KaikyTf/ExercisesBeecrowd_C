#include <stdio.h>
int main(){
    int x,y,in,out;
    in = 0;
    out  = 0;
    scanf("%d",&x);
    for(int i = 0 ; i < x ; i++){
        scanf("%d",&y);
        if(y > 0){
            if(y >= 10 && y <= 20){
                in++;
            } else{
                out++;
            }
        }
    }

    printf("%d in\n",in);
    printf("%d out\n",out);

    return 0;
}