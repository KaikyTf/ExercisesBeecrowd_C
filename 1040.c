#include <stdio.h>
int main(){
    double n1,n2,n3,n4,media,exame;
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    media = ((2*n1 )+ (3*n2) + (4*n3) + n4) / 10;

    printf("Media: %.1lf\n",media);

    
    if (media < 5.0){
        printf("Aluno reprovado.\n");
    } else if (media >= 5.0 && media <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%lf",&exame);
        printf("Nota do exame: %.1lf\n",exame);
        media = (media + exame) / 2 ;
        if(media >= 5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",media);
        } else if (media < 5.0){
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",media);
        }

    }else if (media >= 7.0){
        printf("Aluno aprovado.\n"); 
    }

    return 0;
    
}