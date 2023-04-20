//aca son todos los operadores iguales q sabemos desde hace millones de años
//ig aca van unos ej de ejemplo asi este archivo no queda vacio
//aca es para ver si es mayoor de edad o no;
#include <stdio.h>
#include <stdlib.h>
int main() {
    int edad;
    printf("ingrese su edad: \n");
    scanf("%d", &edad);
    if(edad >= 18)
    {
        printf("Usted es mayor de edad.");
    }
    else
    {
        printf("Usted es menor de edad");
    }
    return 0;
}

//este es otro ej tipico de ver si es par o impar
int main() {
    float numero;
    printf("digame un numero para comprobar si es par o impar: \n");
    scanf("%f", numero);
    if(numero % 2 == 0)
    {
        printf("el numero es par");
    }
    else
    {
        printf("su numero es impar");
    }
    return 0;
}