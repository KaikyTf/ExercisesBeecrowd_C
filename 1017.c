#include <stdio.h>
int main(){
    int h,v;
    double d,l;
    scanf ("%d %d",&h,&v);
    d = v * h ;
    l = d / 12;
    printf("%.3lf\n",l);

    return 0;

}