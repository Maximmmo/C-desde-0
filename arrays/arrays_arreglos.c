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
//ARRAYS MEJOR EXPLICADOS CON EJEMPLOS

//-----------------------ARRAYS DE ENTEROS (NUMEROS)---------------------
#define MAX_ELEMENTOS 100 //aca creamos un constante que tiene valor 100

int main(){

    int numeros2[MAX_ELEMENTOS]; //aca usamos el 100 de max_elemtos como para decir que hay 100 elementos en el array numeros2
    numeros2[22] = 2;//el elemento de indice 22 tiene como valor 2

    int numeros[100]; //ACA HAY UN ARRAY LLAMADO numeros EL CUAL TIENE 100 ELEMENTOS
    numeros[0] = 44;//EN EL INDICE 0 DE numeros HAY GUARDADO UN NUMERO RANDOM, EL 44
    numeros[76] = 33; //EN EL INDICE 76 DE numeros HAY GUARDADO UN NUMERO, EL 33

    //tambien podriamos hacer que el usuario agregue los numeros que quiera al array
   for(int i = 0; i<MAX_ELEMENTOS; i++){       
   numeros[i]=0;
   }
    return 0;
}



// EJEMPLOS RAROS
/*
int main(){
    int numeros[100] = { 2, 1, 0};
    int valores[] = {0, 0, 0};
    int notas[10];
     for (int i = 0; i < 10; i++)
     {
        printf("ingrese la nota de la materia %d:", i);
        scanf("%d", &numeros);
     }

    return 0;
}
*/
/*
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
*/