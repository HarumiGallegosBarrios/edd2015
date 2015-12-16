#ifndef _OPERACIONES_H_
#define _OPERACIONES_H_

#include "nodo.h"

void inicializar_lista(struct nodo *cabecera);

void introducir_al_final(struct nodo *cabecera, int valore);

void imprimir_el_primero(struct nodo *cabecera);

void borrar_el_primero(struct nodo *cabecera);

void imprimir_lista(struct nodo *cabecera);

#endif
