#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
//forma: “Índice: X, Valor: Y” en el orden ingresado y de atrás hacia adelante.
int main(){
    int i;
    int array[5];
    for(i = 1; i <= 5 ; i++)
    {
        printf("Asignele un valor a 5 elementos: ");
        scanf("%d", &array[i - 1]);
    }

    for(i = 0; i < 5; i++)
    {
    printf("%d\n", array[i]);
    }

    printf("\n");

    for ( i = 5; i >= 0; i--)
    {
    printf("%d\n", array[i]);
    }
return 0;
}