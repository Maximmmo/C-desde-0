// EJERCICIOS DEL CVG

//1. Imprimir en la consola los números del 1 al 100.
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
int main()
{
    int num1 = 0;

    while (num1 < 100)
    {
        num1++;
        printf("%d\n", num1);
    }
    
    return 0;
}
*/


//2. Generar un bucle while infinito.
/*
int main(){
    int num1 = 1;
    while (num1 == 1)
    {
        printf("%d", num1);
    }
    return 0;
}
*/


//3. Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
//positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
//(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
//usuario la suma de los 10 números ingresados.
/*
int main(){

    float num1, resultado;
    int i = 0;
    printf("Ingrese 10 numeros reales positivos: ");
    scanf("%f", &num1);
    while (num1 < 0)
    {
        printf("\n%.2f es un numero negativo, ingrese nuevamente el numero: ", num1);
        scanf("%f", &num1);
    }

    resultado += num1;
    
    do
    {
        printf("Ingrese otro num positivo para ser sumado al anterior: ");
        scanf("%f", &num1);
        i++;
        resultado += num1;
    } while (i < 9);
    
    printf("La suma de los anteriores 10 numero es: %.2f ", resultado);
    
    return 0;
}
*/


//4. Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
//Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
//parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
//alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
//mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
//nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
//calculando y por último, el promedio general del curso.

int main()
{
    int parciales, alumnos;




    return 0;
}