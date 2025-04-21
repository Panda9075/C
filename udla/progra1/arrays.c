#include <stdio.h>

void Array(){
    
    char hola[3][20];
    int arraya[4][3];
    int inversa[4][3];
    for(int fila=0; fila<4; fila++){
        for(int columnas=0; columnas<3; columnas++){
            printf("Fila %d y Columna %d:", fila, columnas);
            scanf("%i", &arraya[fila][columnas]);
            getchar();
        }
    }
    int fila1,columna1=0;
    for(int fila=3; fila>=0; fila--){
        for(int columnas=2; columnas>=0; columnas--){
            inversa[fila1][columna1]=arraya[fila][columnas];
            columna1++;
        }
    }

}
