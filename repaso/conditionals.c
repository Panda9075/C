#include <stdio.h>

typedef struct 
{
    char nombre[50];
    int precio;
    int cantidad;

}Producto;

int main(){
    int cuantos;
    printf("Cuantos productos deseas registar: ");
    scanf("%d", &cuantos);
    getchar();

    Producto productos[cuantos];

    for(int i=0; i<cuantos; i++){
        printf("Producto: %d\n", i+1);


        printf("Nombres del producto: ");
        fgets(productos[i].nombre, sizeof(productos[i].nombre), stdin);
        
        printf("Precio del producto: ");
        scanf("%d", &productos[i].precio);
        getchar();
        
        printf("Cuantos productos hay: ");
        scanf("%d", &productos[i].cantidad);
        getchar();
    }



    printf("\nTodos los productos\n");
    for (int i = 0; i < cuantos; i++) {
        printf("\nProducto %d:\n", i+1);

        printf("Nombre: %s", productos[i].nombre);
        printf("Costo: %d\n", productos[i].precio);
        printf("Cantidad: %d", productos[i].cantidad);
    }

    return 0;

}