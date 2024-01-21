#include <stdio.h>
int
main ()
{
  int x, y, i = 0, soma = 0;

    scanf ("%d", &x);
    
    while (x <= 0){
        scanf ("%d", &x);
    }
    
    scanf ("%d", &y);
    
    while (y <= 0){
        scanf ("%d", &y);
    }
    
    while(i < y){
        
        soma += x + i;
        i++;
    }



    printf ("%d\n", soma);

}
