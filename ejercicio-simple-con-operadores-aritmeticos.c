/*
Determinar la nota final de un alumno (con promedio)
sabiendo q se compone de 2 examenes
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    float examen1, examen2;
    float promedio;

    printf("ingrese la nota del primer examen del alumno: \n");
    scanf("%f", &examen1);
    printf("ingerse la nota del seg examen: \n");
    scanf("%f", &examen2);

    promedio = (examen1 + examen2)/2;
    printf("La nota final es: %.2f", promedio);
    return 0;
}
