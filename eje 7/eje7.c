#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, num=0;
    printf("Ingrese un numero entre el 1 y el 10: ");
    scanf("%d", &num);
    for (i=1;i<11;i++){
        printf("%d x %d = %d\n",num, i, num*i);
        }
    system("pause");
}
