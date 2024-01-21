#include <stdio.h>
int main(){
    float s = 0, x = 3.0, y = 2.0;
    while (x <= 39){
        s = s + (x / y);
        x = x + 2.0;
        y = y * 2.0;
    }
    s = s + 1.0;
    printf("%.2f\n",s);
    return 0;
}