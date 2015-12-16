#include <stdio.h>
#include "funciones.h"

int main()
{
    struct nodo lista;
    int i;
    int valor;
    inicializar(&lista);

    printf("Dame el numero\n");
    scanf("%d", &valor);
    while(valor != -1){
        scanf("%d", &valor);
        crear_lista(&lista, valor);
    }
    suma(&lista);
    imprimir(&lista);

    return 0;
}
