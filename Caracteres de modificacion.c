#include <stdio.h>
int main(){
    printf("hola mundo");
    return 0;
}

//todo eso es la base con la q se escribe un programa en C.

//caracteres de modificacion
//sirve para indicar que tipo de dato es la variable
//los marcador con *** son  los q mas importan
%c //unico caracter *** 
%d //entero int ***
%u //entero sin signo de base decimal
%o //entero en baso octal
%x //entero en base hexadecimal
%e //num real en coma float con exponente
%f //float normal ***
%s //cadena de caracteres string ***
%p //puntero o direccion de memoria ***
//ejemplos:
int main(){
    int edad = 18;
    int edad2 = 55;
    printf(" tuve novia desde los %d hasta los %d", edad, edad2);
    return 0;
}
//asi se declara una constante:
#define NOMBRECONSTANTE valordelaconstante;
#define gravedad 9,13;
//y asi una variable
float sueldo = 200.000;
//ejemplos:
int main(){
    float enfermedad = 2;
    float enfermedadplus = 1;
    enfermedad += enfermedadplus; //aca enfermedad se suma a si misma con enfermedadplus osea enfermedad = enfermedad + enfermedadplus
    printf("%f", enfermedad);
    return 0;
}


