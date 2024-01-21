#include <stdio.h>
int main(){
    int x,pa,pb,anos;
    float ta,tb;
    scanf("%d",&x);

    for(int i = 0 ; i < x ; i++){
        scanf("%d %d %f %f",&pa,&pb,&ta,&tb);

        anos = 0;

        for(int z = 0 ; pa <= pb ; z++ ){
            pa = pa + pa * (ta / 100);
            pb = pb + pb * (tb / 100);
            anos++;

            if(anos > 100)
                break;
        }

        if(anos > 100){
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n",anos);
        }
            


    }

    return 0;
}