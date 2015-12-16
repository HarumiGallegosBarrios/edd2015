# include <stdio.h>
#include "funciones.h"

int main()
{
    struct nodo arbol;
    int valor;
    inicializar_lista(&arbol);

    printf("Introduce -1 para finalizar\n");
    printf("Dame la ecuacion dando enter en cada caracter\n");

    while(valor!= -1){
        scanf("%d", &valor);
        if (valor != -1){
            insertar(&arbol, valor);
        }
    }
    imprimir(&arbol);
}
