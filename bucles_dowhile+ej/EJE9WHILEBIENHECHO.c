#include <stdlib.h>
#include <stdio.h> 

int main(){

    int dni = 35555555;
    int pass = 1234;
    int saldo = 150000;
    int cbu = 12345678;

    int dniIngresado = 0;
    int passIngesado = 0;

    int intentos = 1;
    int ingresaCorrectamente = 0; 

    printf("\nBienvenido a la pagina del banco, porfavor logeese.\n");
    printf("Ingrese su dni: ");
    scanf("%d", &dniIngresado);

    while (dniIngresado != dni)
    {
        printf("Dni incorrecto, ingreselo nuevamente: ");
        scanf("%d", &dniIngresado);
    }

    printf("Ingrese su contraseña: ");
    scanf("%d", &passIngesado);
    while (passIngesado != pass && intentos < 3)
    {
        intentos++;
        printf("Contraseña incorrecta, ingresela nuevamente: ");
        scanf("%d", &passIngesado);
    }
    if (passIngesado == pass)
    {
        printf("\nBienvenido a la pagina del banco, que desea?\n1. Consultar saldo\n2. Consultar CBU\n3. Salir\nIngreselo aqui: ");
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
                printf("\nEl numero ingresado es incorrecto, cerrando la pagina...");
            break;
        }
    }else if (passIngesado != pass){
        printf("\nHas alcanzado el numero maximo de intentos, intente nuevamente mas tarde.");
    }
    return 0;
}