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
/*
int main()
{
    int num_alumnos, num_parciales, i, j;
    float nota, suma, promedio_alumno, promedio_general;

  printf("Ingrese la cantidad de alumnos del curso: ");
  scanf("%d", &num_alumnos);
  printf("Ingrese la cantidad de parciales que se tomaron durante el cuatrimestre: ");
  scanf("%d", &num_parciales);

  i = 1;
  while (i <= num_alumnos) {
    suma = 0;
    printf("\nAlumno %d:\n", i);
    j = 1;
    while (j <= num_parciales) {
      do {
        printf("Ingrese la nota del parcial %d (entre 0 y 10): ", j);
        scanf("%f", &nota);
      } while (nota < 0 || nota > 10);
      suma += nota;
      promedio_alumno = suma / num_parciales;
      printf("Promedio del alumno %d hasta el parcial %d: %.2f\n", i, j, promedio_alumno);
      j++;
    }
    promedio_general += promedio_alumno;
    i++;
  }
  promedio_general = promedio_general / num_alumnos;

  printf("\nEl promedio general del curso es: %.2f", promedio_general);

   

    return 0;
}
*/


//5. Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
//usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
//almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
//usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.
/*
int main(){
    int dni = 38632584;
    float nota = 7;
    int dniingresado;
    int intentos = 1;
    int ingresacorrectamente = 0;

    do
    {
        printf("Buenos dias usuario ingrese su dni para acceder a su nota: ");
        scanf("%d", &dniingresado);
        intentos++;
    } while (dniingresado != dni && intentos <= 3 );
    
    if (dniingresado == dni){
        printf("Bienvenido, su nota es: %.2f", nota);
    }else{
        printf("Haz alcanzado el numero maximo de intentos");
    }

    return 0;
}
*/


//6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio
/*
int main(){
    float notas = 0, promedio, suma, acumulador = 0;
    int respuesta;
    do
    {
        printf("ingrese notas para luego ser sumadas y promediadas: ");
        scanf("%f", &notas);
        acumulador += notas;
        printf("Desea continuar agregando notas? Pon 1 si quieres continuar o cualquier otro numero si deseas no continuar: ");
        scanf("%d", &respuesta);
        suma++;
    } while (respuesta == 1);

    promedio = acumulador / suma;
    printf("La suma de los numero ingresados es: %.2f\n", acumulador);
    printf("Y su promedio es: %.2f", promedio);
    
    return 0;
}
*/


// 7. Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
//datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman.
/*
int main(){
    float numero;
    int cantidad = 0;

    printf("Ingresa un conjunto de numeros distintos a 0: ");
    scanf("%f", &numero);
    while (numero != 0)
    {
        printf("ingrese otro conjunto de numero, o de lo contrario, para finalizar pon un 0: ");
        scanf("%f", &numero);
        cantidad++;
    }
    
    printf("\nLa cantidad de numeros ingresados es: %d", cantidad);

    return 0; 
}
*/


// 8. Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
// calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y
// no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
// por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
// Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
// mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
// el 2,5% de la suma de sus ventas.
/*
int main(){
    int vendedorA, vendedorB, vendedorC, vendedorD, vendedorE;
    float comision, comisionB, comisionC, comisionD, comisionE, ventasA = 0, ventasB = 0, ventasC = 0, ventasD = 0, ventasE = 0, totalA  = 0, totalB = 0, totalC = 0, totalD = 0, totalE = 0, resultado;

    printf("\nBienvenido Vendedor A: \n");
    do
    {
        printf("Ingrese el importe de sus ventas: ");
        scanf("%f", &ventasA);
        totalA += ventasA;
    } while (ventasA != 0);

    comision = totalA * 0.025;
    printf("\nEl vendedor A cobrara una comision de: %.2f\n", comision);
    
    printf("\nBienvenido Vendedor B: \n");
    do
    {
        printf("Ingrese el importe de sus ventas: ");
        scanf("%f", &ventasB);
        totalB += ventasB;
    } while (ventasB != 0);

    comisionB = totalB * 0.025;
    printf("\nEl vendedor B cobrara una comision de: %.2f\n", comisionB);

    printf("\nBienvenido Vendedor C: \n");
    do
    {
        printf("Ingrese el importe de sus ventas: ");
        scanf("%f", &ventasC);
        totalC += ventasC;
    } while (ventasC != 0);

    comisionC = totalC * 0.025;
    printf("\nEl vendedor C cobrara una comision de: %.2f\n", comisionC);

    printf("\nBienvenido Vendedor D: \n");
    do
    {
        printf("Ingrese el importe de sus ventas: ");
        scanf("%f", &ventasD);
        totalD += ventasD;
    } while (ventasD != 0);

    comisionD = totalD * 0.025;
    printf("\nEl vendedor D cobrara una comision de: %.2f\n", comisionD);

    printf("\nBienvenido Vendedor E: \n");
    do
    {
        printf("Ingrese el importe de sus ventas: ");
        scanf("%f", &ventasE);
        totalE += ventasE;
    } while (ventasE != 0);

    comisionE = totalE * 0.025;
    printf("\nEl vendedor E cobrara una comision de: %.2f\n", comisionE);

    resultado = totalA + totalB + totalC + totalD + totalE; 
    printf("\nEl importe total de las ventas es de: %.2f", resultado);

    return 0;
}
*/


// 9. Realizar un programa que permita ver información a un cliente de un banco. Para ello
// el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
// validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
// ingreso de contraseña. Al loguarse correctamente presentar un menú con las
// siguientes opciones:
// 1- Consultar saldo
// 2- Consultar CBU
// 3- Salir
/*
int main(){

    int dni = 35555555;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 12345678;

    int dniIngresado = 0;
    int passIngesado = 0;

    int intentos = 1;
    int intentos2 = 1;
    int ingresaCorrectamente = 0; 

    printf("\nBienvenido a la pagina del banco, porfavor logeese.\n");
    printf("Ingrese su dni: ");
    scanf("%d", &dniIngresado);
    while (intentos < 3 && dniIngresado != dni)
    {
        printf("Dni incorrecto, ingerselo nuevamente: ");
        scanf("%d", &dniIngresado);
        intentos++;
    }
    if(dniIngresado == dni){
        printf("\nDni correcto, porfavor ingrese su contraseña: "); 
        scanf("%d", &passIngesado);
        while (passIngesado != pass && intentos2 < 3)
        {
            printf("Contraseña incorrecta, ingresela nuevamente: ");
            scanf("%d", passIngesado);
            intentos2++;
        }
        
    }else{
        printf("\nHas alcanzado el numero maximo de intentos, porfavor intentelo de nuevo mas tarde. ");
    }

    if (passIngesado == pass)
    {
        printf("\nBienvenido a la pagina del banco, que desea?\n1. Consultar saldo\n2. Consultar CBU\n3. Salir ");
        scanf("%d", &ingresaCorrectamente);

        switch (ingresaCorrectamente)
        {
        case 1:
            printf("Su saldo es de $%d", saldo);
            break;

        case 2:
            printf("Su CBU es %d",cbu);
            break;

        case 3:
            printf("Muchas gracias por visitar la pagina de nuestro banco, vuelva pronto!");
            break;

        default:
            break;
        }
    }else{
        printf("\nHas alcanzado el numero maximo de intentos, porfavor intentelo de nuevo mas tarde. ");
    }

    return 0;
}
*/


// 10. Retomamos el ejercicio 11 del documento LC1 – Práctica 2 – Estructuras de control if y
// switch:
// “Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
// Luego presentar el siguiente menú:
// 1. Informar su suma
// 2. Informar su resta
// 3. Informar su multiplicación
// 4. Informar su división
// 5. Salir
// Seleccione una operación:
// Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
// programa debe terminar.”
// Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras
// este no se ingrese la opción 6.
// Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el
// usuario.
// El menú que se mostrará al usuario quedará entonces de la siguiente forma:
// 1. Informar su suma
// 2. Informar su resta
// 3. Informar su multiplicación
// 4. Informar su división
// 5. Informar cantidad de operaciones realizadas
// 6. Salir
// Seleccione una operación:
int main(){
    float resultado, num1, num2;
    int datas, contador = 0;
    printf("Ingrese dos numeros, el primero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);
   
    do
    {    
    printf("\n1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicación\n4. Informar su división\n5. Informar la cantidad de operaciones realizadas\n6. Salir\nIngreselo aqui: ");
    scanf("%d", &datas);
    switch (datas)
    {
    case 1:
        resultado = num1 + num2;
        printf("\nSu suma es: %.2f\n", resultado);
        contador += 1;
        break;
    case 2:
        resultado = num1 - num2;
        printf("\nSu resta es: %.2f\n", resultado);
        contador += 1;

        break;
    case 3:
        resultado = num1 * num2;
        printf("\nSu multiplicacion es: %.2f\n", resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("\nSu division es: %.2f\n", resultado);
        contador += 1;
        break;
    case 5:
        printf("\nLa cantidad de operaciones realizadas es de: %d\n", contador);
        break;
    case 6:
        printf("\nSaliendo... Gracias por usar la calculadora\n");
        break;
    default:
        printf("\nEl numero ingresado es incorrecto, ingreselo nuevamente\n");
        break;
    }
    } while (datas != 6);

    return 0;
}