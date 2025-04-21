#include <stdio.h>


/* 

1. Vender
2. Reabastecer
3. Info actualizada 
4. Mostrar  ganancias obtenidas hasta el momento a partir de las ventas
realizadas.
5. FIn

*/

int main(){
    int id;
    char nombre[50];
    int cantidadstock;
    int precio;
    
    int ventas=0;
    int variable=0;
    printf("------------------------------\n");
    printf("Programa de comerciante de un producto\n");
    printf("Escribe el ID del producto: ");
    scanf("%d", &id);
    getchar();
    printf("Escribe el nombre del producto: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Escriba la cantidad inicial de stock: ");
    scanf("%d", &cantidadstock);
    printf("Esciba el precio unitario del producto: ");
    scanf("%d", &precio);
   

    while (variable != 5) {
        printf("\n--- Menu ---\n");
        printf("1. Vender # de unidades\n");
        printf("2. Agregar más producto\n");
        printf("3. Consultar información actualizada del producto\n");
        printf("4. Ganancias obtenidas hasta el momento\n");
        printf("5. Finalizar el programa\n");
        printf("Seleccione una opción: ");
        scanf("%d", &variable);

        switch (variable){
            case 1: {
                int numero;
                printf("¿Cuántas unidades quieres vender?: ");
                scanf("%d", &numero);
                if (numero <= cantidadstock) {
                    cantidadstock -= numero;
                    ventas += numero * precio;
                    printf("Venta realizada con éxito.\n");
                } else {
                    printf("No hay suficiente stock para vender esa cantidad.\n");
                }
                break;
            }
            case 2: {
                int numero1;
                printf("¿Cuántos productos quieres agregar?: ");
                scanf("%d", &numero1);
                cantidadstock += numero1;
                printf("Stock actualizado.\n");
                break;
            }
            case 3:
                printf("ID del producto: %d\n", id);
                printf("Nombre del producto: %s", nombre);
                printf("Cantidad en stock: %d\n", cantidadstock);
                printf("Precio unitario: %d\n", precio);
                break;

            case 4:
                printf("Ganancias obtenidas hasta el momento: %d\n", ventas);
                break;

            case 5:
                printf("Finalizando el programa...\n");
                break;

            default:
                printf("La opción es incorrecta.\n");
                break;
        }
    }

    return 0;
}