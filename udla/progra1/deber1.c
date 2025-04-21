#include <stdio.h>


typedef struct 
{
    int nota1;
    int nota2;
    int nota3;

}Estudiantes;


int maxest(int not1, int not2, int not3) {
    if(not1 > not2 && not1 > not3){
        return not1;
    }
    else if(not2 > not1 && not2 > not3){
        return not2;
    }
    else{
        return not3;
    }    
}

int minest(int not1, int not2, int not3) {
    if(not1 < not2 && not1 < not3){
        return not1;
    }
    else if(not2 < not1 && not2 < not3){
        return not2;
    }
    else{
        return not3;
    }    
}

Estudiantes estudiante[6];

int main(){
    char materia1[50];
    char materia2[50];
    char materia3[50];


    printf("Ingresa el nombre de la mateteria 1: ");
    fgets(materia1, sizeof(materia1), stdin);
    printf("Ingresa el nombre de la mateteria 2: ");
    fgets(materia2, sizeof(materia2), stdin);
    printf("Ingresa el nombre de la mateteria 3: ");
    fgets(materia3, sizeof(materia3), stdin);

    printf("\nMateria 1: %s", materia1);
    for(int i=1; i<6; i++){
        printf("Ingresa la nota del estudiante %d: ", i);
        scanf("%d", &estudiante[i].nota1);

        while(estudiante[i].nota1 < 0 || estudiante[i].nota1 > 11) {
            printf("❌ Nota inválida. Ingrese un valor entre 0 y 10: ");
            scanf("%d", &estudiante[i].nota1);
        }
    }

    printf("\nMateria 2: %s", materia2);
    for(int i=1; i<6; i++){
        printf("Ingresa la nota del estudiante %d: ", i);
        scanf("%d", &estudiante[i].nota2);

        while(estudiante[i].nota2 < 0 || estudiante[i].nota2 > 11) {
            printf("❌ Nota inválida. Ingrese un valor entre 0 y 10: ");
            scanf("%d", &estudiante[i].nota2);
        }
    }

    printf("\nMateria 3: %s", materia3);
    for(int i=1; i<6; i++){
        printf("Ingresa la nota del estudiante %d: ", i);
        scanf("%d", &estudiante[i].nota3);

        while(estudiante[i].nota3 < 0 || estudiante[i].nota3 > 11) {
            printf("❌ Nota inválida. Ingrese un valor entre 0 y 10: ");
            scanf("%d", &estudiante[i].nota3);
        }
    }
    //Promedio de cada materia
    float promediomateria1=0;
    for(int i=1; i<6; i++){
        promediomateria1+=estudiante[i].nota1;
    }
    promediomateria1=(float)(promediomateria1)/5;
    printf("El promedio de la materia %s es: %f\n", materia1, promediomateria1);

    float promediomateria2=0;
    for(int i=1; i<6; i++){
        promediomateria2+=estudiante[i].nota2;
    }
    promediomateria2=(float)(promediomateria2)/5;
    printf("El promedio de la materia %s es: %f\n", materia2, promediomateria2);

    float promediomateria3=0;
    for(int i=1; i<6; i++){
        promediomateria3+=estudiante[i].nota3;
    }
    promediomateria3=(float)(promediomateria3)/5;
    printf("El promedio de la materia %s es: %f\n", materia3, promediomateria3);

    //Promedio de estudiante 
    for(int i = 1; i < 6; i++) {
        float promedio = (estudiante[i].nota1 + estudiante[i].nota2 + estudiante[i].nota3) / 3.0;
        printf("El promedio del estudiante %d es: %.2f\n", i, promedio);
    }
 

    //Calificación más alta y baja por estudiante y por asignatura
    
    int x;
    int j;
    for(int i=1; i<6; i++){
        x = maxest(estudiante[i].nota1, estudiante[i].nota2, estudiante[i].nota3);
        printf("\nLa calificacion mas alta del estudiante %d es: %d\n", i, x);
        j = minest(estudiante[i].nota1, estudiante[i].nota2, estudiante[i].nota3);
        printf("La calificacion mas baja del estudiante %d es: %d\n", i, j);
    }

   
    // asignatura 
    int aprobados1=0;
    int reprobados1=0;
    int aprobados2=0;
    int reprobados2=0;
    int aprobados3=0;
    int reprobados3=0;
    int max1=0;
    int min1=10;
    int max2=0;
    int min2=10;
    int max3=0;
    int min3=10;
    //asignatura 1
    for(int i=1; i<6; i++){
        if(estudiante[i].nota1 < 6){
            reprobados1+=1;
        }
        if(estudiante[i].nota1 >= 6){
            aprobados1+=1;
        }
        if(estudiante[i].nota1 > max1){
            max1 = estudiante[i].nota1;
        }
        if(estudiante[i].nota1 < min1){
            min1 = estudiante[i].nota1;
        }
    }
    printf("\nLa nota maxima de la asignatura %s es: %d", materia1, max1);
    printf("\nLa nota minima de la asignatura %s es: %d", materia1, min1);
    printf("\nEl numero de aprobados de la asignatura %s es: %d", materia1, aprobados1);
    printf("\nEl numero de reprobados de la asignatura %s es: %d", materia1, reprobados1);

    //asignatura 2
    for(int i=1; i<6; i++){
        if(estudiante[i].nota2 < 6){
            reprobados2+=1;
        }
        if(estudiante[i].nota2 >= 6){
            aprobados2+=1;
        }
        if(estudiante[i].nota2 > max2){
            max2 = estudiante[i].nota2;
        }
        if(estudiante[i].nota2 < min2){
            min2 = estudiante[i].nota2;
        }
    }
    printf("\nLa nota maxima de la asignatura %s es: %d", materia2, max2);
    printf("\nLa nota minima de la asignatura %s es: %d", materia2, min2);
    printf("\nEl numero de aprobados de la asignatura %s es: %d", materia2, aprobados2);
    printf("\nEl numero de reprobados de la asignatura %s es: %d", materia2, reprobados2);

    //asignatura 3
    for(int i=1; i<6; i++){
        if(estudiante[i].nota3 < 6){
            reprobados3+=1;
        }
        if(estudiante[i].nota3 >= 6){
            aprobados3+=1;
        }
        if(estudiante[i].nota3 > max3){
            max3 = estudiante[i].nota3;
        }
        if(estudiante[i].nota3 < min3){
            min3 = estudiante[i].nota3;
        }
    }
    printf("\nLa nota maxima de la asignatura %s es: %d", materia3, max3);
    printf("\nLa nota minima de la asignatura %s es: %d", materia3, min3);
    printf("\nEl numero de aprobados de la asignatura %s es: %d", materia3, aprobados3);
    printf("\nEl numero de reprobados de la asignatura %s es: %d", materia3, reprobados3);

    return 0;
}