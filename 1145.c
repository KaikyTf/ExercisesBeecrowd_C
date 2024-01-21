#include <stdio.h>
int main(){
    int x, y, a = 1;
    scanf("%d %d",&x,&y);
    while(a <= y){
        if(a % x == 0){
            printf("%d\n",a);
        } else {
            printf("%d ",a);
        }
        a++;
    }
    
    return 0;
}