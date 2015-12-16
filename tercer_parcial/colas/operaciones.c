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
            nuevo->ant = actual;
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
	imprimir = cabecera->sig;
   	 if(cabecera->sig == NULL){
        	printf("La Cola esta vacia\n");
    	}
    	else{
    	printf("\nEl primer numero de la cola es: %d\n", imprimir->val);
    	}
}

void borrar_el_primero(struct nodo *cabecera)
{
	struct nodo *frente;
	struct nodo *finale;
    	frente = cabecera;
    	finale = frente;
    	if(frente->sig != NULL){
        	frente = frente->sig;
        	finale = frente->sig;
        	cabecera->sig = finale->val;
        	finale->ant = cabecera;
    	}
    	free(frente);
    	printf("\nEliminamos el primero de la cola:  %d\n");
}
