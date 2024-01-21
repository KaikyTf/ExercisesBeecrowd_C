#include <stdio.h>

int main(){
	int tam, vaiUm, fimUm;
	
	while(scanf("%d", &tam) != EOF){
		
		int matriz[tam][tam];
		
		for(int i = 0; i < tam; i++)
			for(int j = 0; j < tam; j++){
				if(i == j) matriz[i][j] = 2;
				else if(i + j == tam - 1) matriz[i][j] = 3;
				else matriz[i][j] = 0;
			}
		
		//quadrado com '1' sempre começa na posição tamanho/3
		vaiUm = tam/3;
		fimUm = tam-vaiUm;
		
		for(int i = vaiUm; i < fimUm; i++)
			for(int j = vaiUm; j < fimUm; j++)
				 matriz[i][j] = 1;
		
		
		matriz[tam/2][tam/2] = 4;
		
		for(int i = 0; i < tam; i++){
			for(int j = 0; j < tam; j++)
				printf("%d", matriz[i][j]);			 
			 
			printf("\n");					
		}
		
		printf("\n");
	}
	
	return 0;
}
