#include <stdio.h>
int main(){
    int x;
    scanf("%d",&x);
    if ( x % 2 != 0){
        printf("%d\n",x);
            
    } else {
        x = x + 1;
        printf("%d\n",x);
    }
    for( int i = 0; i < 5 ; i++){
        x += 2;
        printf("%d\n",x);
    }

    return 0;

}