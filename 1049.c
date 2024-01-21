#include <stdio.h>
#include <string.h>
int main(){
    char x[20];
    char y[20];
    char z[20];
    scanf("%s",&x);
    scanf("%s",&y);
    scanf("%s",&z);
    
    if(strcmp(x,"vertebrado")==0 && strcmp(y,"ave")==0 && strcmp(z,"carnivoro")==0){
        printf ("aguia\n");
    } else if(strcmp(x,"vertebrado")==0 && strcmp(y,"ave")==0 && strcmp(z,"onivoro")==0){
        printf("pomba\n");    
    } else if(strcmp(x,"vertebrado")==0 && strcmp(y,"mamifero")==0 && strcmp(z,"onivoro")==0){
        printf("homem\n");
    } else if (strcmp(x,"vertebrado")==0 && strcmp(y,"mamifero")==0 && strcmp(z,"herbivoro")==0){
        printf("vaca\n");
    } else if (strcmp(x,"invertebrado")==0 && strcmp(y,"inseto")==0 && strcmp(z,"hematofago")==0){
        printf("pulga\n");
    } else if (strcmp(x,"invertebrado")==0 && strcmp(y,"inseto")==0 && strcmp(z,"herbivoro")==0){
        printf("lagarta\n");
    } else if (strcmp(x,"invertebrado")==0 && strcmp(y,"anelideo")==0 && strcmp(z,"hematofago")==0){
        printf("sanguessuga\n");
    } else if (strcmp(x,"invertebrado")==0 && strcmp(y,"anelideo")==0 && strcmp(z,"onivoro")==0){
        printf("minhoca\n");
    }
        
    return 0;
}
