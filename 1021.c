#include <stdio.h>

int main(){
    int c,cinq,v,d,cinco,dois,um,cent50,cent25,cent10,cent5,cent1;
    double r;
    scanf("%lf",&r);

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
    r = r-um;
    cent50 = r/0.5;
    r = r-cent50*0.5;
    cent25 = r/0.25;
    r = r-cent25*0.25;
    cent10 = r/0.1;
    r = r-cent10*0.1;
    cent5 = r/0.05;
    r= r-cent5*0.05;
    cent1 = r/0.01;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",c,cinq,v,d,cinco,dois,um,cent50,cent25,cent10,cent5,cent1);

    return 0;
}