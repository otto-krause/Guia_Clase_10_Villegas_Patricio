#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, num=0, num1=0;
    int producto=0;
    printf("Ingrese dos numero:\n");
    scanf("%d", &num);
    scanf("%d", &num1);
    while(i!=num1){
        producto=producto+num;
        i++;
    }
    printf("El producto es: %d\n", producto);
system("pause");
}
