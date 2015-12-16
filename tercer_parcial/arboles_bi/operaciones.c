#include <stdlib.h>
#include <stdio.h>
#include "funciones.h"

void inicializar_lista(struct nodo *arbol)
{
    arbol->sig = NULL;
    arbol->ant = NULL;
}
void insertar(struct nodo *arbol, int valor)
{
    	struct nodo *nuevo;
	struct nodo *actual;
	nuevo = (struct nodo*) malloc(sizeof(struct nodo) * 1);
	nuevo->valo = valor;
	nuevo->sig = NULL;
	if(arbol->sig == NULL){
       		arbol->sig = nuevo;
       		nuevo->ant = arbol;
    	}
    	else{
            actual = arbol->sig;
            while(actual->sig != NULL){
            	actual = actual->sig;
            }
            actual->sig = nuevo;
            nuevo->ant = actual;
    }
}
void imprimir(struct nodo *arbol)
{
	struct nodo *imprimir;
	imprimir = arbol->sig;
	if(arbol->sig != NULL){
        	while(imprimir->sig != NULL){
        		printf("%d", imprimir->valo);
       			 imprimir = imprimir->sig;
        	}
        	printf("%d", imprimir->valo);
	}
	else{
        	printf("La lista esta vacia\n");
	}
}
