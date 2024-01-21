#include <stdio.h>

int main(){
    int n;
    double x,y,z,media;
    scanf("%d",&n);
    for (int i = 0 ; i < n ; i ++){
        scanf("%lf %lf %lf",&x,&y,&z);
        media = ((x * 2 + y * 3 + z * 5 )/ 10);
        printf("%.1lf\n",media); 
    }
    
    
    
    return 0;
}