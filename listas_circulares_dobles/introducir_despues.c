#include <stdio.h>
#include "funciones.h"

int main()
{
    struct nodo_doble cabecera;
    int valor_nuevo = 0;
    int valor_antes;
    int borrar;
    inicializar(&cabecera);

    printf("Introduce los datos\nIntroduce -1 cuando finalices\n");
    while(valor_nuevo != -1){
            scanf("%d", &valor_nuevo);
            if(valor_nuevo != -1){
        insertar_al_final(&cabecera, valor_nuevo);
            }
    }
    imprimir_lista(&cabecera);
    printf("\nDame el numero que quieres introducir\n");
    scanf("%d", &valor_nuevo);
    printf("Despues de que numero lo quieres introducir?\n");
    scanf("%d", &valor_antes);
    insertar_despues(&cabecera, valor_nuevo, valor_antes);
    imprimir_lista(&cabecera);
    borrar_lista(&cabecera);

    return 0;
}
