#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, anio;
    int limite;
    int verif=0;


while(verif==0)
    {

        printf("ingresar el dia\n");
        scanf("%d",&dia);
        printf("ingresar el mes\n");
        scanf("%d",&mes);
        printf("ingresar el a%co\n",164);
        scanf("%d",&anio);


        switch (mes){
        case 1:
            limite=31;
            break;
        case 2:
            if(((anio % 4) == 0) && ((anio % 100) != 0) || ((anio %400)==0))
                limite=29;
            else
                limite=28;
            break;
        case 3:
            limite=31;
            break;
        case 4:
            limite=30;
            break;
        case 5:
            limite=31;
            break;
        case 6:
            limite=30;
            break;
        case 7:
            limite=31;
            break;
        case 8:
            limite=31;
            break;
        case 9:
            limite=30;
            break;
        case 10:
            limite=31;
            break;
        case 11:
            limite=30;
            break;
        case 12:
            limite=31;
            break;
        default:
            printf("Fecha no valida\n");
            verif=1;
            break;
        }

        if ((dia>limite) || (dia<=0)){
            printf("Fecha no valida\n");
            verif=1;
        }

        if (anio<=0){
            printf("Fecha no valida\n");
            verif=1;
        }

        if(verif==0){
            printf("%d/%d/%d\n",dia,mes,anio);
            printf("La Fecha es valida\n");
        }

    }
    return 0;
}
