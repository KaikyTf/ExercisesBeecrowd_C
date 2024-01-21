#include <stdio.h>
int main(){
    int d, h, m, s, df, hf, mf, sf, dr, hr, mr, sr;
        
    scanf("Dia %d\n", &d);
    scanf("%d : %d : %d\n",&h,&m,&s);

    scanf("Dia %d\n", &df);    
    scanf("%d : %d : %d", &hf, &mf, &sf);
        
    dr = df - d;
    hr = hf - h;
    mr = mf - m;
    sr = sf - s;

    if (sr < 0){
        sr += 60;
        mr--;
    }
    if (mr < 0){
        mr += 60;
        hr--;
    }
    if (hr < 0) {
        hr += 24;
        dr--;
    }
    
    printf("%d dia(s)\n",dr);
    printf("%d hora(s)\n",hr);
    printf("%d minuto(s)\n",mr);
    printf("%d segundo(s)\n",sr);

    return 0;


}