#include <stdio.h>
#include <string.h>
int main(){
    char v[] = "Bazinga!", d[] = "Raj trapaceou!", e[] = "De novo!";
    char p1[100], p2[100];
    int x;
    
    scanf("%d",&x);
    
    for(int i = 0 ; i < x ; i++){
        scanf("%s",&p1);
        scanf("%s",&p2);
        
        if(strcmp(p1,"tesoura") == 0 && strcmp(p2,"papel") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"papel") == 0 && strcmp(p2,"tesoura") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else if(strcmp(p1,"papel") == 0 && strcmp(p2,"pedra") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"pedra") == 0 && strcmp(p2,"papel") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else if(strcmp(p1,"pedra") == 0 && strcmp(p2,"lagarto") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"lagarto") == 0 && strcmp(p2,"pedra") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else if(strcmp(p1,"lagarto") == 0 && strcmp(p2,"Spock") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"Spock") == 0 && strcmp(p2,"lagarto") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else if(strcmp(p1,"Spock") == 0 && strcmp(p2,"tesoura") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"tesoura") == 0 && strcmp(p2,"Spock") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else if(strcmp(p1,"tesoura") == 0 && strcmp(p2,"lagarto") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"lagarto") == 0 && strcmp(p2,"tesoura") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else if(strcmp(p1,"lagarto") == 0 && strcmp(p2,"papel") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"papel") == 0 && strcmp(p2,"lagarto") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else if(strcmp(p1,"papel") == 0 && strcmp(p2,"Spock") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"Spock") == 0 && strcmp(p2,"papel") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else if(strcmp(p1,"Spock") == 0 && strcmp(p2,"pedra") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"pedra") == 0 && strcmp(p2,"Spock") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else if(strcmp(p1,"pedra") == 0 && strcmp(p2,"tesoura") == 0)
            printf("Caso #%d: %s\n",i + 1,v);
        else if(strcmp(p1,"tesoura") == 0 && strcmp(p2,"pedra") == 0)
            printf("Caso #%d: %s\n",i + 1,d);
        else
            printf("Caso #%d: %s\n",i + 1,e);
    }
    
    return 0;
    
}

