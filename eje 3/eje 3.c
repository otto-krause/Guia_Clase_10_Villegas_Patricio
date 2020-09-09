#include <stdio.h>
#include <stdlib.h>

void main()
{
int cant, fact=0, pu, num, mayor, pmayor, produ, imp;
while (fact!=999)
    {
    printf("Ingrese el n%cmero de factura(Para finalizar ingrese 999)", 163);
    scanf("%d", &fact);
    printf("Ingrese el n%cmero del producto: ");
    scanf("%d", &num);
    printf("Ingrese la cantidad y el precio unitario: ");
    scanf("%d %d", &cant, &pu);

    produ=pu*cant;
    if(produ>pmayor){
      pmayor=produ;
      mayor=num;
    }
    if (pu>imp){
       imp=pu;
    }

    }
    printf("El producto mas vendido es el nro:%d", mayor);
    printf("\nEl mayor importe es de:%d", imp);
return 0;
}
