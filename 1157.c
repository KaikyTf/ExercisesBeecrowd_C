#include <stdio.h>
int main(){
    int x,y = 1;
    scanf("%d",&x);

    while(y <= x){
        if(x % y == 0){
            printf("%d\n",y);
        }

        y++;
    }

    return 0;
}