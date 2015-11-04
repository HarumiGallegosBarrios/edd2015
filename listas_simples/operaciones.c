#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = NULL;
}

void insertar_al_final(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;
	struct nodo *actual;
	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;
	nuevo->sig = NULL;
	if(cabecera->sig == NULL){
       cabecera->sig = nuevo;
    }
    else{
            actual = cabecera->sig;
            while(actual->sig != NULL){
            actual = actual->sig;
            }
            actual->sig = nuevo;
    }
}

void insertar_al_principio(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;
	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;
	nuevo->sig = cabecera->sig;
	cabecera->sig = nuevo;
}

void insertar_despues(struct nodo *cabecera, int nuevo, int antes)
{
	struct nodo *valor;
	struct nodo *actual;
	struct nodo *despues;
	valor = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	despues = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	valor->val = nuevo;
	despues->val = antes;
	actual = cabecera->sig;
    while(actual->sig != NULL){
        if(actual->val == despues->val){
            valor->sig = actual->sig;
            actual->sig = valor;
            }
        actual = actual->sig;
        }
}

void imprimir_lista(struct nodo *cabecera)
{
	struct nodo *imprimir;
	imprimir = cabecera->sig;
	if(cabecera->sig != NULL){
        while(imprimir->sig != NULL){
        printf("%d -> ", imprimir->val);
        imprimir = imprimir->sig;
        }
        printf("%d", imprimir->val);
	}
	else{
        printf("La lista esta vacia\n");
	}
}

void borrar_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;

	if (cabecera->sig != NULL) {
		actual = cabecera->sig;
		borrar = cabecera->sig;
		while (actual->sig != NULL) {
			actual = actual->sig;
			free(borrar);
			borrar = actual;
		}
		free(borrar);
		cabecera->sig = NULL;
	}
}

void borrar_elemento(struct nodo *cabecera, int borrar)
{
    struct nodo *valor;
	struct nodo *actual;
	actual = cabecera;
	if(actual->sig != NULL){
        while(actual->sig->val  != borrar){
            actual = actual->sig;
        }
        valor = actual->sig;
        actual->sig = valor->sig;
        free(valor);
	}
}
