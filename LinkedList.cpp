#include "LinkedList.h"

LinkedList::LinkedList() {
	head = NULL;
}

void LinkedList::Agregar(Luchador l2) {
	Node* n = new Node();
	n -> l = l2;
	n -> next = head;
	head = n;
}

string LinkedList::Ver() {
	Node* n = head;
	Luchador l3 = n -> l;
	head = head -> next;
	delete n;
	return l3.getNombre();
}
