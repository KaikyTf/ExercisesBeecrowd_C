#include <stdio.h>

int main()
{
    int x;
    int a = 1;
    int b = 1;
    int c = 1;
    int um = 1;
    
    scanf("%d",&x);
    
    for (int i = 0 ; i < x ; i++){
        printf("%d %d %d\n",a,b,c);
        a = a + 1;
        b = a * a;
        c =  a * b;
    }

    return 0;
}