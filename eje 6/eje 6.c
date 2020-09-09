#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned long int fact=1;
    int i=0, n;
    printf("Ingresar un numero: ");
    scanf("%d", &n);
    if (n>0){
        for (i=n;i>1;i--){
        fact=fact*i;
        }
    printf("El factorial de %d es  %llu \n", n, fact);
    }
system("pause");
}
