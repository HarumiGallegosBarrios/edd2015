#include <stdio.h>
#include "funciones.h"

int main()
{
    struct nodo cabecera;
    int valor_nuevo = 0;
    int valor_antes;
    int borrar;
    int nuevo, antes;
    inicializar(&cabecera);

    printf("Introduce los datos\nIntroduce -1 cuando finalices\n");
    while(valor_nuevo != -1){
            scanf("%d", &valor_nuevo);
            if(valor_nuevo != -1){
                insertar_al_final(&cabecera, valor_nuevo);
            }
    }
    imprimir_lista(&cabecera);

    printf("\nQue numero quieres borrar?\n");
    scanf("%d", &borrar);
    borrar_elemento(&cabecera, borrar);

    imprimir_lista(&cabecera);
    borrar_lista(&cabecera);

    return 0;
}
