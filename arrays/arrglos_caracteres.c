#include <stdio.h>
#include<stdlib.h>
/*
#define NUMERO 15
int main(){
    char apellido[NUMERO] = "Lopez";
    char nombre[NUMERO] = "Juan";

    printf("%s\n", apellido);
    printf("%s\n", nombre);

    return 0;
}
*/


//PUTS funcion para leer los datos dentro del array
//GETS funcion para almacenar los datos del arreglo

/*
#define NUM 6
int main(){
    char nombre[NUM];
    printf("Ingrese su nombre: ");
    gets(nombre); //almacenamos los datos del array
    puts(nombre); //aca mostramos esos datos (como un printf)

    return 0;
}
*/

int main(){
    char *frutas [5]; //el * hace referencia a punteros
    frutas[0] = "Frutilla";
    frutas[1] = "Macarroneshet";
    frutas[2] = "penelope";
    frutas[3] = "daleee";
    frutas[4] = "shet";

    for(int i = 0; i < 5; i++)
    {
        printf(frutas[i]);
        printf("\n");
    }


    return 0;
}