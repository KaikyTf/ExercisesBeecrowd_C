int main(){
    int x,y,soma = 0;
    scanf("%d",&x);

    for(int z = 0; z < x; z++){ //loop para repetição de vezes do programa
        scanf("%d",&y);
        soma = 0;

        for(int i = 1; i < y ; i++){ //loop para fazer os divisores
            if(y % i == 0){  //condição para descobrir se é divisor, se for guardar ele em uma variável
            soma += i;
            }    
        }

        if(soma == y){ //condição para ver se o número é ou não perfeito
        printf("%d eh perfeito\n",y);
        } else {
        printf("%d nao eh perfeito\n",y);
    }
    
    }
    
    return 0;       
}