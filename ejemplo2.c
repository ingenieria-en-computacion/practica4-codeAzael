#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arreglo, num, cont;
    printf("¿Cuántos elementos tiene el conjunto?\n");
    scanf("%d", &num);
    printf("%p\n", arreglo);
    arreglo = (int*)calloc(num , sizeof(int)); //1. numero, 2. tamaño
    if(arreglo != NULL){
        printf("Vector reservado:\n\t[");
        for(cont =0; cont <num; cont++){
            printf("\t%d %p", *(arreglo + cont), (arreglo + cont));            
        }
        printf("\t]\n");
        printf("Liberando el espacio reservado\n");
        free(arreglo);        
    }
    return 0;
}