//que son los arreglos o array
//SON variables que tienen varios datos en el mismo lugar
//la primera posicion empieza en 0 
//un texto normal podria ser una array como por ej:
//char holaworld = "hola world";
// aqui seria h esta en posicion 0, o en 1, l en 2, a en 4, el espacio en 5, m en 6 y asi sucesivamente
//su tamaño es de 10
//ej:
#include <stdio.h>
#include <stdlib.h>
#define TAMANIO 5
int main(){
    //formas de declararlo
    int array [5]; 
    // int arreglo[TAMANIO]; //se definen sin =
    int array2 [] = {0,1,2,3,4,5,6,7}; //asi se pone el tamaño del arreglo

    int array5[TAMANIO];
    printf("ingrese 10 numeros enteros: ");
    for(int i = 0; i <= TAMANIO; i++) 
    {
    printf("\narreglo[%d]: ", i);
    scanf("%d", &array5[i]);
    }

    printf("El arreglo ingresado es: ");
    for (int j = 0; j < TAMANIO; j++)
    {
        printf("\narreglo[%d] = %d", j, array5[j]);
    }
    



    return 0;
}