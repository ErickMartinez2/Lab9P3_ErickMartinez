#include "LinkedList.h"

LinkedList::LinkedList() {
	raiz = NULL;
}

void LinkedList::insert(Luchador* luchador2) {
	Node* n = new Node();
	n -> luchador = luchador2;
	n -> nodo = raiz;
	raiz = n;
}

int LinkedList::getSize() {
	int contador = 0;
	vector<Luchador*> luchadores2;
	do {
		Node* n = raiz;
		Luchador* luchador = n -> luchador;
		luchadores2.push_back(luchador);
		raiz = raiz -> nodo;
		contador++;
	} while (raiz != NULL);
	for (int i = luchadores2.size() - 1; i >= 0; i--) {
		Node* n = new Node();
		n -> luchador = luchadores2[i];
		n -> nodo = raiz;
		raiz = n;
	}
	return contador;
}

Luchador* LinkedList::get(int posicion, int size) {
	int nueva_posicion = size - posicion;
	Luchador* luchador_posicion;
	vector<Luchador*> luchadores2;
	for (int i = 0; i <= nueva_posicion; i++) {
		Node* n = raiz;
		luchador_posicion = n -> luchador;
		luchadores2.push_back(luchador_posicion);
		raiz = raiz -> nodo;
	}
	for (int i = luchadores2.size(); i >= 0; i--) {
		Node* n = new Node();
		n -> luchador = luchadores2[i];
		n -> nodo = raiz;
		raiz = n;
	}
	return luchador_posicion;
}


/*string LinkedList::Ver() {
  Node* n = raiz;
  Luchador* luchador3 = n -> luchador;
  raiz = raiz -> nodo;
  delete n;
  return luchador3.getNombre();
  }*/
