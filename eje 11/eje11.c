#include <stdio.h>
#include <stdlib.h>

int main()
{
    int divs, cont=0, resto, divid;

    printf("Ingrese el dividendo entero positivo ");
    scanf("%d", &divid);
    printf("Ingrese el divisor entero positivo ");
    scanf("%d", &divs);

    resto=divid;

    while ( resto>=divs ){
            resto=resto-divs;
            cont++;
        }
printf("El resto es: %d", resto);
return 0;
}
