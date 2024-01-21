#include <stdio.h>
int main(){
    int n,h;
    double s;
    scanf("%d %d %lf",&n,&h,&s);
    s = s * h;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n",n,s);
    return 0;
}