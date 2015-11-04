#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

void inicializar(struct nodo *cabecera)
{
	cabecera->sig = cabecera;
}

void insertar_al_final(struct nodo *cabecera, int valor_nuevo)
{
	struct nodo *nuevo;
	struct nodo *actual;
	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valor_nuevo;
	nuevo->sig = cabecera;
	if(cabecera->sig == cabecera){
       cabecera->sig = nuevo;
    }
    else{
            actual = cabecera->sig;
            while(actual->sig != cabecera){
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

void insertar_despues(struct nodo *cabecera, int valor_nuevo, int valor_antes)
{
	struct nodo *valor;
	struct nodo *actual;
	struct nodo *despues;
	valor = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	despues = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	valor->val = valor_nuevo;
	despues->val = valor_antes;
	actual = cabecera->sig;
    while(actual->sig != cabecera){
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
        while(imprimir->sig != cabecera){
        printf("%d -> ", imprimir->val);
        imprimir = imprimir->sig;
        }
        printf("%d -> Cabecera", imprimir->val);
	}
	else{
        printf("La lista esta vacia\n");
	}
}

void borrar_lista(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;

	if (cabecera->sig != cabecera) {
		actual = cabecera->sig;
		borrar = cabecera->sig;
		while (actual->sig != cabecera) {
			actual = actual->sig;
			free(borrar);
			borrar = actual;
		}
		free(borrar);
		cabecera->sig = cabecera;
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
