//BUClE WHILE (MIENTRAS)
// Hace una repeticion del codigo hasta que se cumpla una condicion, o mientras se cumpla esa misma
//condicion se repita hasta q no se siga cumpliendo
//se revisa la condision y luego se revisa el codigo para ver si se tiene q repetir la el codigo para que la consicion este bien o fuera de los limites
#include <stdlib.h>
#include <stdio.h>

//BUCLE DO WHILE
//es muy parecido, se ejecuta el codigo primero y luego se revisa la condicion
// siempre se ejecuta por lo menos una vez el codigo

//este es un simple contador
/*
int main() {
    int contado = 0;
    do {
        contado ++;
    } while (contado < 10);
    printf("Contador = %d", contado);



    return 0;
}
*/

//Calcula el dinero ingresado de la venta del dia de hoy
int main() {
    float ventaCliente, ventaTotal = 0;
    
    do {
        printf("ingrese la venta: ");
        scanf("%f", &ventaCliente); 
        ventaTotal += ventaCliente;

    } while (ventaCliente != 0);
    printf("\nla venta total del dia es: %.2f", ventaTotal);

    return 0; 
}



