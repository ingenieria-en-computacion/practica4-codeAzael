#include <stdio.h>
#include "nodo.h"
#include <stdlib.h>

int main(){
    nodo *primero = NULL;
    nodo *temp;//sirve para crear nodos
    nodo *otro;//cambia las direcciones de memoria
    nodo arr[100]; //no afecta nada
    
    primero =crear_nodo(1);
    otro = crear_nodo(1);
    otro->sig = crear_nodo(3);
    primero->sig = crear_nodo(2);
    primero->sig->sig = crear_nodo(3);
    printf("%p\n", primero);
    print_nodo(primero);

    printf("%p\n", primero->sig);
    print_nodo(primero->sig);
    
    printf("%p\n", primero->sig->sig);
    print_nodo(primero->sig->sig);

    borrar_nodo(primero->sig->sig);
    borrar_nodo(primero->sig);
    borrar_nodo(otro->sig);
    borrar_nodo(primero);
    return 0;
}