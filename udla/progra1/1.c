#include <stdio.h>


int main(){
    char nombres[5][20];
    int tralaleritos[3][3];

    for(int i=0; i<5; i++){
        printf("Escribe el nombre:");
        fgets(nombres[i], sizeof(nombres), stdin);
    }

    for(int j=0; j<5; j++){
        printf("%s", nombres[j]);
    }

    int hola=0;
    printf("sos un capo");

    return 0;
}
