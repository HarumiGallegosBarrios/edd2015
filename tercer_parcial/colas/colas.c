#include <stdio.h>
#include "funciones.h"

int main()
{
    struct nodo cabecera;
    int valor = 0;
    inicializar_lista(&cabecera);

    printf("Introduce -1 para finalizar\n");
    printf("Dame los numeros\n");
    while(valor != -1){
        scanf("%d", &valor);
        if (valor != -1){
            introducir_al_final(&cabecera, valor);
        }
    }
    imprimir_lista(&cabecera);
    imprimir_el_primero(&cabecera);
    borrar_el_primero(&cabecera);
    imprimir_lista(&cabecera);
}
