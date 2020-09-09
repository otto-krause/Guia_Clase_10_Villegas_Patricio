#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, notap=0, nota=0, pmayor=0, mayor;
    int cont=0, acu=0, cont1=0,acu1=0, cont2=0;
    float prom=0, pgeneral=0;
    do
    {
     printf("Ingrese la del TP del alumno %d: ", i);
     scanf("%d", &notap);
     cont=cont+1;
     printf("\nIngrese las notas de las actividades(Para finalizar ingrese un valor negativo)\n");
     do
        {
        scanf("%d", &nota);
        if (nota>0)
            {
            cont=cont+1;
            acu=acu+nota;
            }
        if (cont<3)
            {
            cont1=cont1+1;
            }
        }
    while(nota>0);
    acu=acu+notap;
    prom=acu/cont;
    printf("EL promedio del alumno %d es: %.1f\n", i, prom);
    acu1=acu1+prom;
    if (prom>pmayor)
        {
        pmayor=prom;
        mayor=1;
        }
    if (notap>5)
        {
        cont2=cont2+1;
        }
    i++;
    }
    while(i<=3);
pgeneral=acu1/i;
printf("\nEl promedio general del curso es: %.1f\n", pgeneral);
printf("El alumno con el mayor promedio es el alumno: %d\n", mayor);
printf("%d son los alumnos con 2 o menos notas ingresadas\n", cont1);
printf("%d alumnos que aprobaron el TP\n", cont2);
return 0;
}
