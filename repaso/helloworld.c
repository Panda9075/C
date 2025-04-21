#include <stdio.h>

int main(){
    FILE *fp;
    int a,b,c;

    fp = fopen("datos.txt", "r");

    int con1=0;
    while(fscanf(fp, "%d,%d,%d", &a,&b,&c)==3){
        printf("Fila %d: %d %d %d\n", con1+1, a,b,c);
        con1+=1;
        
    }

    
    fclose(fp);

    
    return 0;

}