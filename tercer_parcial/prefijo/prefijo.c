#include <stdio.h>
#include "funciones.h"

int main()
{
    struct nodo_doble cabecera;
    int valor_nuevo = 0;
    inicializar(&cabecera);

    printf("Introduce los datos\nIntroduce -1 cuando finalices\n");
    while(valor_nuevo != -1){
            scanf("%d", &valor_nuevo);
            if(valor_nuevo != -1){
                if(valor_nuevo != '-' ||valor_nuevo != '+' ||valor_nuevo != '*'||valor_nuevo != '/'){
                    insertar_al_final(&cabecera, valor_nuevo);
                }
            }
            else{
                    if(valor_nuevo != -1){
                        insertar_al_principio(&cabecera, valor_nuevo);
                    }
            }
    }
    resultado(&cabecera);
    imprimir_lista(&cabecera);

    return 0;
}
