#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void inicializar(struct nodo *lista)
{
    lista->sig = NULL;
}

void crear_lista(struct nodo *lista, int valor)
{
    struct nodo *num;
    struct nodo *actual;
    num = (struct nodo*) malloc(sizeof(struct nodo) * 1);
    num->val = valor;
    num->sig = NULL;
    if(lista->sig == NULL){
       lista->sig = num;
    }
    else{
            actual = lista->sig;
            while(actual->sig != NULL){
            	actual = actual->sig;
            }
            actual->sig = num;
    }
}
void suma(struct nodo *lista)
{
    int res=0,baul=0;
    float resu=0;
    struct nodo *actual;
    actual = lista->sig;
    while(actual->sig != NULL){
    	res += actual->val;
    	baul += res;
    	actual->val = res;
    	actual = actual->sig;
    }
    res += actual->val;
    baul += res;
    actual->val = res;
    printf("Tiempo total de retorno: %d", baul);
    resu = baul/5;
    printf("\n");
    printf("El promedio es: %.2f", resu);
    printf("\n");
}
void imprimir(struct nodo *lista)
{
    int cont=0;
    struct nodo *actual;
    actual = lista->sig;
    while(actual->sig != NULL){
            if(cont == 0){
                printf ("A = %d", actual->val);
                printf("\n");
            }
            if(cont == 1){
                printf ("B = %d", actual->val);
                printf("\n");
            }
            if(cont == 2){
                printf ("C = %d", actual->val);
                printf("\n");
            }
            if(cont == 3){
                printf ("D = %d", actual->val);
                printf("\n");
            }
    cont++;
    actual = actual->sig;
    }
    printf ("E = %d", actual->val);
    printf("\n");
}
