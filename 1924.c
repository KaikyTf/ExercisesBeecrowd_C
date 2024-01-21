#include <stdio.h>
int main(){
    int tam;
    
    scanf("%d",&tam);
    char cursos[tam][100];
    
    for(int i = 0 ; i <= tam ; i++)
        gets(cursos[i]);
        
    
    printf("Ciencia da Computacao\n");
    
    return 0;
}

