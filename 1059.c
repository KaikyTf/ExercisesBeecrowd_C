#include <stdio.h>
int main (){
    int x = 2;
    for(int i = 0; i < 50; i++){
        printf("%d\n",x);
        x = x + 2;
    }

    return 0;
}