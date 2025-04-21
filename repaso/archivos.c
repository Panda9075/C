#include <stdio.h>

int main(){

    int lista[10]= {1,2,3,4,5};

    lista[5]=5;
    int a,b,c;


    
    scanf("%d", &a);
    getchar();
    scanf("%d", &b);
    getchar();  
    scanf("%d", &c);

    lista[6]=a;
    lista[7]=b;
    lista[8]=c;
    

    for(int i = 0; i < 10; i++) {
        printf("Elemento en posicion %d: %d\n", i, lista[i]);
    }


    

    return 0;
}