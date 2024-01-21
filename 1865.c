#include <stdio.h>
#include <string.h>
int main(){
    int x;
    int fnew;
    int flag;
    char nome[100];
    
    scanf("%d",&x);
    for(int i = 0 ; i < x ; i++){
        flag = 0;
        
        scanf("%s",nome);
        if(strcmp(nome,"Thor") == 0)
            flag = 1;
        
        scanf(" %d",&fnew);
        
        if(flag == 1)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}

