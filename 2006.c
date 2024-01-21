#include <stdio.h>
int main(){
    int cha;
    int a,b,c,d,e;
    int result = 0;
    
    scanf("%d",&cha);
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    if(a == cha)
        result++;
    if(b == cha)
        result++;
    if(c == cha)
        result++;
    if(d == cha)
        result++;
    if(e == cha)
        result++;    
    
    printf("%d\n",result);
    
    return 0;
}

