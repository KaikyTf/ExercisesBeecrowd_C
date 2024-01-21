#include <stdio.h>
int main (){
    int x,y,z;
    y = 0;
    z = 1;
    scanf("%d",&x);
    for(int i = 1; i < x ; i++){
        y = z * i;
        z += y;
    }

    printf("%d\n",z);

    return 0;
}