//secuencias de escape
//nos ayudan a modificar los mensajes q querramos escribir
//todas se hacen con la barra invertida \ q se pone con alt + 92 
\0 //nulo
\b //retroceso
\t //tabulador sangria seria
\n //salto de linea
\f //salto de pagina
\r //retorno de carro
\? // signo de interrogacion
\\ //barra invertida
\" //comillas "\ //para poner comillas dentro de un mensaje

//ejemplos:
#include <stdio.h>
int main(){
    printf("\t bienvenido \"mundo\" xD");
    printf("\nhola sexoo."); //aunq no esten en la misma fila se pone junto asi q usamos el salto de linea
    return 0;
}