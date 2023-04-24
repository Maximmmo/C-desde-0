/*
este es un ejercicio utilizando el switch para elegir
un numero y que ese numero tenga un dia de la semana adentro
*/
#include <stdio.h>
int main() {
    int dia;
    printf("Ingrese un numero del 1 al 7");
    scanf("%d", &dia);
   
    switch (dia)
    {
    case 1:
        printf("El dia numero 1 es Lunes.");
        break;
    case 2:
        printf("El dia numero 2 es el Martes.");
        break;
    case 3:
        printf("El dia numero 3 es el Miercoles.");
        break; 
    case 4:
        printf("El dia numero 4 es Jueves.");
        break;
    case 5:
        printf("El dia numero 5 es VIernes.");
        break;
    case 6:
        printf("El dia numero 6 es Sabado.");
        break;
    case 7:
        printf("El dia numero 7 es Domingo.");
        break;
    default:
        printf("seleccione un numero dentro del 1 al 7");
        break;
    }
    return 0;
}