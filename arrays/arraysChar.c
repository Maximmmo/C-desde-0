//-------------------------ARRAYS DE CARACTERES----------------------------
#include <stdio.h>
#include <stdlib.h>
/*
int main(){
    char nombre[] = "Maximo"; //siempre al final de una array caracter toma un espacio nulo con un \0
    puts(nombre); //aca se utiliza el puts en vez del printf debido a q si pones el printf te muestra un caracter random corte ♀
                 //Si queres poner un printf tenes que poner %s en vez de %c
    return 0;
}
*/

//otro ejemplo
#define MAX_X 7
int main(){
    char cadena[MAX_X] = "ABCDEF";
    int i;
    printf("%s\n",cadena);

    for(i = 0; i < 7; i++)
    {
        printf("%c\n", cadena[i]);

    }


    return 0;
}

//otro ejemplo
