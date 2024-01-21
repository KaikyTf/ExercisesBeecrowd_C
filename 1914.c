#include <stdio.h>
#include <string.h>
int main(){
    int x;
    long int a, b, soma;
    char r1[10], r2[10];
    char nome1[100],nome2[100];
    
    scanf("%d",&x);
    for(int i = 0 ; i < x ; i++){
        scanf("%s %s %s %s",&nome1,&r1,&nome2,&r2);
        scanf("%ld %ld",&a,&b);
        soma = a + b;
        
        if(soma % 2 ==  0){
            if(strcmp(r1,"PAR") == 0)
                printf("%s\n",nome1);
            else
                printf("%s\n",nome2);
        }else{
            if(strcmp(r1,"IMPAR") == 0)
                printf("%s\n",nome1);
            else
                printf("%s\n",nome2);
        }
    }
    return 0;
}

