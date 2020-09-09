#include <stdio.h>
#include <stdlib.h>
int main()
{
signed long int dni=0;
int naci=0, menor=0, men=0;
int cont=0, m30=0, ptotal=1 ,conth=0, contm=0; //contadores
float porc=0;
char sexo;
do{
    printf("Persona: %d\n",ptotal);
    printf("Ingrese su DNI: ");
    scanf("%li", &dni);

    if (dni>0)
        {
        printf("Ingrese su sexo(H o F): ");
        scanf("%s", &sexo);
        printf("Ingrese su a%co de nacimiento: ", 164);
        scanf("%d", &naci);
        }
    men=2020-naci;
    if (men<18){
        menor++;
        }

    porc=menor+100/ptotal;

    if (dni<30000000 && dni>0){
        m30++;
        }

    if(sexo=='h' || sexo=='H'){
        conth++;
        }

    if(sexo=='f' || sexo=='F'){
        contm++;
        }

    ptotal++;
    }while(dni>0);

printf("Se ingresaron %d mujeres y %d hombres\n", contm, conth);
printf("Hay un %d %c de menores\n", porc, 37);
printf("%d personas tienen un DNI inferior a 30 millones\n",m30);
system("pause");
}
