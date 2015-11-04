#ifndef _OPERACIONES_H_
#define _OPERACIONES_H_

#include "nodo.h"

void inicializar(struct nodo *cabecera); //ya

void insertar_al_principio(struct nodo *cabecera, int valor_nuevo); //ya

void insertar_al_final(struct nodo *cabecera, int valor_nuevo); //ya

void insertar_despues(struct nodo *cabecera, int nuevo, int antes);//ya

void imprimir_lista(struct nodo *cabecera); //ya

void borrar_lista(struct nodo *cabecera); //ya

void borrar_elemento(struct nodo *cabecera, int borrar);

#endif
