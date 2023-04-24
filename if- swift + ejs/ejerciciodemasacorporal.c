#include <stdio.h>
#include <stdlib.h>

int main(){
   
    float peso, altura;
    float masaCorporal;
   
    printf("bienvenido a la calculadora de masa corporal, esta indica su indice en relacion de altura/peso");
    printf("\ningrese su peso porfavor(en KG): \n");
   
    scanf("%f", &peso);
    printf("ingese porfavor su altura: \n");
    scanf("%f", &altura);

    masaCorporal = peso / (altura * altura); 
    printf("su promedio de masa corporal es de: %.2f\n ", masaCorporal);
    
    if(masaCorporal <= 18.5)
    {
        printf("Usted esta por debajo del peso convencional");
    }
    else if (masaCorporal > 18.5 && masaCorporal <= 24.8)
    {
        printf("Usted esta en el peso correcto");
    }
    else if (masaCorporal > 25 && masaCorporal <= 29.9)
    {
        printf("Usted esta un poco pasado de peso");
    }
    else
    {
        printf("Usted es obesisimo gordo de mierda");
    }
    
    return 0;
}