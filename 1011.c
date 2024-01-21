#include <stdio.h>
int main(){
double r,v,pi;
pi = 3.14159;
scanf("%lf\n",&r);
v = (4/3.0) * pi * (r*r*r);
printf("VOLUME = %.3lf\n",v);
return 0;    
}