#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, divid=0, divisor=0;
    float resul;
    printf("Ingrese dos numeros\n");
    scanf("%d",&divid);
    scanf("%d",&divisor);
    do{
        i++;
        }while(divisor*i<=divid);
    resul=i-1;
    do{
        resul=resul+0.001;
        }while(divisor*resul<=divid);

    printf("%d / %d = %.2f\n",divid,divisor,resul);

system("pause");
}
