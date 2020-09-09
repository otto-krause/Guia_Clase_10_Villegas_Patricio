#include <stdlib.h>
#include <stdio.h>
void main()
{
int nota, I=1;
char nom[20];
for (I=1; I<16; I++)
    {
    printf("\nIngrese el nombre del alumno %d: ", I);
    scanf("%s", &nom);
    printf("Ingrese la nota del alumno: ");
    scanf("%d", &nota);
    if (nota>8)
        {
         printf("El alumno %s tiene una nota mayor a 8\n", nom);
        }
    }
return 0;
}
