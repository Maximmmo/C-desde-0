//Este ej calcula e informa la suma de 10 num reales ingresados por teclado
#include <stdlib.h>
#include <stdio.h>
int main(){
    float numeroIngresado, suma = 0;
    for(float i = 1; i <= 10; i++)
    {
        printf("ingresa un numero: \n");
        scanf("&f", &numeroIngresado);
        suma += numeroIngresado;
    }
    printf("La suma es = %.2f \n", suma);

    return 0;
}
//no me anda no se porque