#ifndef _OPERACIONES_H_
#define _OPERACIONES_H_

#include "nodo.h"

void inicializar(struct nodo_doble *cabecera);

void insertar_al_principio(struct nodo_doble *cabecera, int valor_nuevo); 

void insertar_al_final(struct nodo_doble *cabecera, int valor_nuevo);

void imprimir_lista(struct nodo_doble *cabecera);

void resultado(struct nodo_doble *cabecera);
#endif
