#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

void inicializar_lista(struct nodo *cabecera)
{
    cabecera->sig = NULL;
    cabecera->ant = NULL;
}

void introducir_al_final(struct nodo *cabecera, int valore)
{
	struct nodo *nuevo;
	struct nodo *actual;
	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->val = valore;
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
            nuevo->ant = actuaal;
    }
}

void imprimir_lista(struct nodo *cabecera)
{
	struct nodo *imprimir;
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

void imprimir_el_primero(struct nodo *cabecera)
{
	struct nodo *imprimir;
	imprimir = cabecera;
    	while(imprimir->sig != NULL){
        	imprimir = imprimir->sig;
    	}
    	printf("\nEl primer numero que sale es: %d\n", imprimir->val);
}

void borrar_el_primero(struct nodo *cabecera)
{
	struct nodo *actual;
	struct nodo *borrar;
    	actual = cabecera;
    	while (actual->sig != NULL){
        	actual = actual->sig;
        	borrar = actual->ant;
    	}
    	free(actual);
    	borrar->sig = NULL;
    	printf("\nEliminamos el primero de la pila;  %d\n");
}
