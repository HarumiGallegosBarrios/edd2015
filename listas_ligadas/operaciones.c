#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

void inicializar(struct nodo_doble *cabecera)
{
	cabecera->sig = NULL;
	cabecera->ant = NULL;
}

void insertar_al_final(struct nodo_doble *cabecera, int valor_nuevo)
{
	struct nodo_doble *nuevo;
	struct nodo_doble *actual;
	nuevo = (struct nodo_doble*) malloc(sizeof(struct nodo_doble) * 1);
	nuevo->val = valor_nuevo;
	nuevo->sig = NULL;
	if(cabecera->sig == NULL){
       cabecera->sig = nuevo;
       nuevo->ant = cabecera;
    }
    else{
            actual = cabecera->sig;
            while(actual->sig != NULL){
            actual = actual->sig;
            }
            actual->sig = nuevo;
            nuevo->ant = actual;
    }
}

void insertar_al_principio(struct nodo_doble *cabecera, int valor_nuevo)
{
	struct nodo_doble *nuevo;
	nuevo = (struct nodo_doble*) malloc(sizeof(struct nodo_doble) * 1);
	nuevo->val = valor_nuevo;
	nuevo->sig = cabecera->sig;
	nuevo->ant = cabecera;
	cabecera->sig = nuevo;
}

void insertar_despues(struct nodo_doble *cabecera, int valor_nuevo, int valor_antes)
{
	struct nodo_doble *valore;
	struct nodo_doble *actual;
	struct nodo_doble *despues;
	valore = (struct nodo_doble*) malloc(sizeof(struct nodo_doble) * 1);
	despues = (struct nodo_doble*) malloc(sizeof(struct nodo_doble) * 1);
	valore->val = valor_nuevo;
	despues->val = valor_antes;
	actual = cabecera->sig;
	while(actual->sig != NULL){
            if(actual->val == despues->val){
            valore->sig = actual->sig;
            actual->sig = valore;
            }
            actual = actual->sig;
	}
}

void imprimir_lista(struct nodo_doble *cabecera)
{
	struct nodo_doble *imprimir;
	imprimir = cabecera->sig;
	if(cabecera->sig != NULL){
        while(imprimir->sig != NULL){
        printf("%d <-> ", imprimir->val);
        imprimir = imprimir->sig;
        }
        printf("%d", imprimir->val);
	}
	else{
        printf("La lista esta vacia\n");
	}
}

void borrar_lista(struct nodo_doble *cabecera)
{
	struct nodo_doble *actual;
	struct nodo_doble *borrar;

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

void borrar_elemento(struct nodo_doble *cabecera, int borrar)
{
    struct nodo_doble *valor;
	struct nodo_doble *actual;
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
