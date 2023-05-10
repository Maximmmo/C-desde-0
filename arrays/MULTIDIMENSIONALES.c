
//------------------------ARRAYS MULTIDIMENSIONALES------------------------
//---------------------------(DE DIS DUNEBSUIBES)-------------------------
//por cada dimension hay q agregar un for mas para leer sus datos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_X 10
#define MAX_Y 10

int main(){
    
    //defino un array
    int numeros[MAX_X][MAX_Y];
    int i, j;

    //inicializacion del array
    for ( i = 0; i < MAX_X; i++)
    {
        for ( j = 0; j < MAX_Y; j++)
        {
            numeros[i][j] = 0;
        }
        
    }
    numeros[0][0] = 0;



    return 0;
}