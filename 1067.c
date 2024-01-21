#include <stdio.h>
int main(){
    int x,i;
    
    scanf("%d",&x);
    i = 1;
    while( x > i - 1){
        printf("%d\n",i);
        i = i + 2;
    }
   
    return 0;
}