#ifndef _NODO_H_
#define _NODO_H_

struct nodo_doble {

	int val; //variable donde se guardaran los nodos
	struct	nodo_doble * sig; //puntero dirigido al siguiente nodo
	struct  nodo_doble * ant; //puntero dirigido al anterior nodo
};

#endif
