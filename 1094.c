#include <stdio.h>
int main(){
    int x,y;
    float pc,pr,ps,c,r,s,t;
    char animal;
    c = 0;
    r = 0;
    s = 0;
    t = 0;
    scanf("%d",&x);

    for(int i = 0; i < x ; i++){
        scanf("%d %c",&y,&animal);
        switch(animal){
            case 'C':
            c += y;
            break;

            case 'R':
            r += y;
            break;

            case 'S':
            s += y;
            break;
        }
        t += y;
        
    }
    pc = (c *100)/t;
    pr = (r *100)/t;
    ps = (s *100)/t;

    printf("Total: %.0f cobaias\n",t);
    printf("Total de coelhos: %.0f\nTotal de ratos: %.0f\nTotal de sapos: %.0f\n",c,r,s);
    printf("Percentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",pc,pr,ps);

    return 0;
}