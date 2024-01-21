#include <stdio.h>
#include <string.h>
#define TF 100
int main() {
 
 	char vet[TF], vet2[TF][TF];
 	int x, y, mvet, TL, z;
 	
 	scanf("%d", &x);
 	
 	while(x != 0){
 		mvet = -1;
 		for(int a = 0; a < x; a++){
		 	y = 0;
            TL = 0;
		 	scanf("%*c%[^\n]", &vet);
		 	while(y < strlen(vet)){
		 		while (vet[y] != ' ' && y < strlen(vet)){
		 			
		 			vet2[a][TL] = vet[y];
		 			y++;
		 			TL++;
		 			
		 			if(vet[y] == ' '){
		 				
		 				vet2[a][TL] = ' ';
		 				TL++;
		 				
		 			}
		 			
		 		}
		 		 
		 		y++;
		 		
			 }
		 	
		 	TL--;
		 	while(vet2[a][TL] == ' ')
		 		TL--;
		 	
		 	TL++;
		 	vet2[a][TL] = '\0';
		 	z = strlen(vet2[a]);
            
		 	if(z > mvet)
		 		mvet = z;
		 }
		 
		 for(int a = 0; a < x; a++)
		 	printf("%*s\n", mvet, vet2[a]);
		 	
		scanf("%d", &x);
		
		if (x != 0)
			printf("\n");
 		
	 }

    return 0;
}