//operadores aritmeticos
//son los mismos de siempre pero los escribo porq soy buena persona
+ //suma 
- //resta
* //multiplicacion
/ //divisiones
% //resto (el MOD) se utiliza siempre asi: 
//if NUMEROCUALQUIERA % 2 == 0 printf("es par");

//tienen simplificaciones
//ej:
int num1 = 10;
int num2 = 5;
//con suma
num1 = num1 + 7;
//simplificacion:
num1 += 7;

//con resta
num1 -= num2;// esto da 5 por ejemplo

//con multiplicacion:
num1 *= num2; //da 50

//con division:
num1 /= num2; //da 2

//modulo o resto;
num1 %= 2; //da 0

//OPERADORES DE INCREMENTO Y DECREMENTO
++ o --
//ej:
#include <stdio.h>
int main() {
    int numero = 5;
    numero++; //lo q hago aca es q la variable numero se incrementa de 5 a 6
    numero--; //y aca disminuyo en una unidad de 6 a 5 en este caso
    printf("%d", numero); 
    return 0;
}