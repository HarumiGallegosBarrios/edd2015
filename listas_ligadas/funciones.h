#ifndef _OPERACIONES_H_
#define _OPERACIONES_H_

#include "nodo.h"

void inicializar(struct nodo_doble *cabecera); //ya

void insertar_al_principio(struct nodo_doble *cabecera, int valor_nuevo); //ya

void insertar_al_final(struct nodo_doble *cabecera, int valor_nuevo); //ya

void insertar_despues_de(struct nodo_doble *cabecera, int valor_nuevo, int valor_antes);

void imprimir_lista(struct nodo_doble *cabecera); //ya

void borrar_lista(struct nodo_doble *cabecera); //ya

#endif
