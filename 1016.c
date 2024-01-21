#include <stdio.h>
int main() {
    int x = 60;
    int y = 90;
    int d;
    float t,tm;
    scanf("%d",&d);
    t = (float)d /(y-x) ;
    tm = t *60;
    printf("%.0lf minutos\n", tm);
return 0;
}