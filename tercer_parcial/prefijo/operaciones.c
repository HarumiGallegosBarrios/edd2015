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
void imprimir_lista(struct nodo_doble *cabecera)
{
	struct nodo_doble *imprimir;
	imprimir = cabecera->sig;
	if(cabecera->sig != NULL){
        while(imprimir->sig != NULL){
        printf("%d ", imprimir->val);
        imprimir = imprimir->sig;
        }
        printf("%d ", imprimir->val);
	}
	else{
        printf("La lista esta vacia\n");
	}
}
void resultado(struct nodo_doble *cabecera)
{
    //struct nodo_doble *resultado;
    struct nodo_doble *actual;
    int res, resu, resultado;
    actual = cabecera->sig;
	if(cabecera->sig != NULL){
        while(actual->sig != NULL){
            if(actual == '+'){
                res = actual->ant;
                resu = actual->sig;
                resultado = res + resu;
            }
            if(actual == '-'){
                res = actual->ant;
                resu = actual->sig;
                resultado = res - resu;
            }
            if(actual == '*'){
                res = actual->ant;
                resu = actual->sig;
                resultado = res * resu;
            }
            if(actual == '/'){
                res = actual->ant;
                resu = actual->sig;
                resultado = res / resu;
            }
            actual =actual->sig;
        }
        cabecera->val = resultado;
	}
}
