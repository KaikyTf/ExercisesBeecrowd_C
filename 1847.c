#include <stdio.h>
int main(){
    int x, y, z;
    scanf("%d %d %d",&x,&y,&z);
    
    if(y < x && z >= y )
        printf(":)\n");
    else if(y > x && z <= y)
        printf(":(\n");
    else if(y > x && z > y && z - y < y - x)
        printf(":(\n");
    else if(y > x && z > y && z - y >= y - x)
        printf(":)\n");
    else if(y < x && z < y && y - z < x - y)
        printf(":)\n");
    else if(y < x && z < y && y - z >= x - y)
        printf(":(\n");
    else if(x == y && z > y)
        printf(":)\n");
    else if(x == y && y > z)
        printf(":(\n");
    else
        printf(":(\n");

    return 0;
    
}

