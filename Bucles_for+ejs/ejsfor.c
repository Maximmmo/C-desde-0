//1_Imprimir los números del 1 al 10 uno abajo del otro.
#include <stdio.h>
#include <stdlib.h>
/*
int main(){
    for (int i = 1; i <= 10; i++) 
    {
        printf("%d\n", i);
    }
    return (0);
}
*/


//2_Imprimir los números del 1 al 10 uno abajo del otro saltando de a dos.
/*
int main(){
    for (int i = 0; i <= 10; i+=2)
    {
        printf("%d \n", i);
    }
    

    return 0;
}
*/


//3. Imprimir los números del 10 al 1 uno abajo del otro.
/*
int main(){
    for (int i = 10; i >= 1;i--)
    {
        printf("%d\n", i);
    }


    return 0;
}
*/


//4. Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.
/*
int main()
{
    int suma=0;
    for( int i=1; i <=10; i= i + 2)
    {
        printf("%d\n",i);
        suma= suma+i;
    }

    printf("la suma de los numeros impares entre el 1 y 10 es: %d\n", suma);
    return(0);
}
*/


//5. Generar un bucle infinito.
/*
int main(){
    for(int i = 0; i < 10 ; i--)
    {
        printf("%d -", i);
    }

    return 0;
}
*/


//6. Suma de los 10 primeros números múltiplos de tres.
/*
int main() {
    int suma = 0;
   
    for(int i = 0; i <= 10; i++)
    {
        suma += i * 3;
    }
    printf("la suma de los 10 primeros multiplos de 3 son: %d", suma); 

    return 0;
}
*/


//7. Diseñe un algoritmo que sume los 20 primeros números impares.
/*
int main(){
    int suma = 0;
    for (int i = 1; i <=40; i += 2)
    {
        suma += i;
    }
    printf("La suma de los 20 primeros es %d", suma);

    return 0;
}
*/


//8. Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número.
/*
int main(){
    int n1, i;
    
    printf("Ingrese un numero: ");
    scanf("%d", &n1);
    
    for(i=1; i<=10; i++) {
        printf("%d . %d = %d\n", n1, i, n1*i);
    }

    return 0;
}
*/

//9. Escriba un programa que escriba la tabla de multiplicar del 1, 2,....,9.
/*
int main()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("1 . %d = %d\n", i, 1*i);
        printf("2 . %d = %d\n", i, 2*i);
        printf("3 . %d = %d\n", i, 3*i);
        printf("4 . %d = %d\n", i, 4*i);
        printf("5 . %d = %d\n", i, 5*i);
        printf("6 . %d = %d\n", i, 6*i);
        printf("7 . %d = %d\n", i, 7*i);
        printf("8 . %d = %d\n", i, 8*i);
        printf("9 . %d = %d\n", i, 9*i);
    }

    return 0;
}
*/


//10. Imprimir por consola 10 veces el carácter @, de manera que se visualice la siguiente salida:
/*
int main(){
    for(char i = 1; i <= 10; i++)
    {
        printf("@\n");
    }

    return 0;
}
*/


//11. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:
/*
int main(){
    
    for(char i = 1; i <= 5; i++)
    {
        printf("@@\n@\n");
        
    }

    return 0;
}
*/


//mas ej de bucles for
//este calcula el promedio de la nota de 10 estudiantes
/*
int main(){
    float notes, sumadenotes = 0, promedio;
    for(int i = 1; i <= 10; i++)
    {
        printf("escriba la nota del alumno num %d: ", i);
        scanf("%f", &notes);
        sumadenotes += notes;
    }
    promedio = sumadenotes / 10;
    printf("\nel promedio de notas de los alumnos es: %.2f", promedio);

    return 0;
}
*/


//escribir todos los num pares entre el 1 al 100
/*
int main(){
    for(int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0){
            printf("%d es par", i);
        } else {
            printf("\n%d es impar\n", i);
        }
    }
    return 0;
}
*/


//pedir un numero y mostrar su tabla de multiplicar
int main(){
    float nummultipl;

    printf("Pon un numero para mostrar su tabla de multiplicar: ");
    scanf("%f", &nummultipl);

    for(float i = 0; i <= 10; i++)
    {
        float total = nummultipl * i;
        printf("%.2f x %.0f = %.2f\n", nummultipl, i, total);
    }

    return 0; 
}