#include <math.h>
int main(){
    int rs,r,c,cinq,v,d,cinco,dois,um;
    scanf("%d",&rs);
    r = rs;
    c = r/100;
    r = r-c*100;
    cinq = r/50;
    r = r-cinq*50;
    v = r/20;
    r = r-v*20;
    d = r/10;
    r = r-d*10;
    cinco = r/5;
    r = r-cinco*5;
    dois = r/2;
    r = r-dois*2;
    um = r/1;

    printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",rs,c,cinq,v,d,cinco,dois,um);

    return 0;

}