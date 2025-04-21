#include <stdio.h>

typedef struct {
    char nombre[50];
    int edad;
    float salario;
} Empleado;

void guardarArchivo(){
    FILE *f = fopen("empleados.txt","a+");
    

}


float promedio(Empleado *emp, int size){
    float prom=0;
    for (int i = 0; i < size; i++)
    {
        prom+=emp[i].edad;
    }
    return prom/3;
}

FILE *fp;
FILE *fl;


int main(){

    char nombre[50];
    int edad;
    float salario;


    fp = fopen("datos.txt", "w");
    fl = fopen("datos.txt", "r");


    Empleado empleados[3];

    for (int i = 1; i < 4; i++) {
        printf("Empleado: %d\n", i);
        printf("Escriba su nombre: ");
        fgets(empleados[i].nombre, sizeof(empleados[i].nombre), stdin);

        printf("Escriba su edad: ");
        scanf("%d", &empleados[i].edad);
        getchar();

        printf("Escriba el salario: ");
        scanf("%f", &empleados[i].salario);
        getchar();
    }

    //Escribir en el archivo
    for (int i = 1; i < 4; i++) {
        fprintf(fp, "Nombre: %s", empleados[i].nombre);
        fprintf(fp, "Edad:%d\n", empleados[i].edad);
        fprintf(fp, "Salrio:%.2f\n", empleados[i].salario);        
    }

    
    for (int i = 1; i < 4; i++) {
        printf("Nombre:%s", empleados[i].nombre);
        printf("Edad:%d\n", empleados[i].edad);
        printf("Salario: %.2f\n", empleados[i].salario);        
    }

    printf("------------------");
    printf("\nMostrar los datos del archivo\n");
    
    for(int k=1; k<4; k++){
        fgets(nombre, sizeof(nombre), fl);
        printf("Nombre%d: %s\n", k,nombre);
        fscanf(fl, "%d", edad);
        printf("Edad %d:%d\n", k, edad);
        getchar();
        fscanf(fl,"%f", salario);
        printf("Salario %d: %f\n", k,salario);
    }
    
    
    }
    suma = suma/3;

    printf("\nEl promedio de edades es: %.2f", suma);

    fclose(fp);
    return 0;
    
}
    

