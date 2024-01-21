#include <stdio.h>
int main (){
    int x = 2;
    int y = 2;
    int v;
    scanf("%d",&v);
    for(int i = 0 ; i < v; i = i + 2 ){
        y = x * x;
        printf("%d^2 = %d\n",x,y);
        x = x + 2;
    }

    return 0;
}