#include <stdio.h>
#include <string.h>
int main(){
    int tam;
    char n1[100], n2[100];
    
    scanf("%s",&n1);
    
    //ignorar caractere nulo
    tam = strlen(n1);
    
    // j = tam - 1 pois se a string tiver 5 caracteres, seus índices serão de 0 a 4
    for(int i = 0, j = tam - 1; i < tam ; i++,j--){
        n2[i] = n1[j];
    }
    
    //adicionar o final a string n2
    n2[tam] = '\0';
    
    printf("%s\n",n2);
    
    return 0;
}

