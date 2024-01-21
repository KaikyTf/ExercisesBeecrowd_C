int main(){
    double x,y,z,at,ac,atrap,aq,ar;
    scanf("%lf %lf %lf",&x,&y,&z);
    at = (x * z) / 2;
    ac = 3.14159 * (z * z);
    atrap = ((x + y) * z) / 2;
    aq = y * y;
    ar = x * y;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",at,ac,atrap,aq,ar);
    return 0;

}
