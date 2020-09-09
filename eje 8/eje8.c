#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, num1, i=1, multi, suma;
    printf("ingrese dos numeros\n");
    scanf("%d",&num);
    scanf("%d",&num1);
    while (5*i<num)
       i++;
       multi=5*i;
    while (multi<num1)
        {
        if(multi!=num)
            {
            suma=suma+multi;
            printf(" %d ",multi);
            }
        multi=multi+5;
        }
printf("\n La suma de los multiplos de 5 es %d ",suma);
system("pause");
}
