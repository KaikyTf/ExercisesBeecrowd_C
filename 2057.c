#include <stdio.h>
int main(){
    int x,y,z;
    int result;
    
    scanf("%d %d %d",&x,&y,&z);
    
    result = x + y + z;
    
    if(result > 24 )
        result = result - 24;
    else if(result < 0)
        result = result + 24;
    else if(result == 24)
        result = 0;
    
    printf("%d\n",result);
    
    return 0;
}

