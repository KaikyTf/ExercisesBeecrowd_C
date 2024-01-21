#include <stdio.h>
int main(){
    int i,a,m,d;
    scanf("%d",&i);
    a = i / 365;
    m = (i - 365 * a) / 30;
    d = i - (365 * a + 30 * m) ;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);

    return 0;
}