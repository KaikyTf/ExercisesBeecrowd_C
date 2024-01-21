#include <stdio.h>
#define TF 100
int main (){

    int x, i;
    char temperatura;
    char codigo[TF];

    while (scanf("%d", &x) != EOF)
    {

        scanf(" %[^\n]", codigo);

        char temperatura2 = 0;
        for (i = 0; codigo[i]; ++i)
            if (codigo[i] == ' ')
                ++temperatura2;

        temperatura = 96;
        for (i = 0; codigo[i]; ++i)
            if (codigo[i] == ' ')
                break;
            else
                ++temperatura;

        if (!temperatura2)
            printf("%c\n", temperatura);
        else
        {

            char letra;
            if (temperatura2 == 1)
                letra = 3;
            else if (temperatura2 == 2)
                letra = 6;
            else if (temperatura2 == 3)
                letra = 9;
            else if (temperatura2 == 4)
                letra = 12;
            else if (temperatura2 == 5)
                letra = 15;
            else if (temperatura2 == 6)
                letra = 18;
            else if (temperatura2 == 7)
                letra = 21;
            else if (temperatura2 == 8)
                letra = 24;

            printf("%c\n", letra + temperatura);
        }
    }
    return 0;
}