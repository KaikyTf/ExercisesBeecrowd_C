#include <stdio.h>

int main(){
    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int x, i;
    
    scanf("%d",&x);
    
    for(i = 0 ; i < x ; i++)
        printf("%c",frase[i]);
    
    printf("\n");
    
    return 0;
}

