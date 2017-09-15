#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Luchador.h"
#include <string>
using namespace std;

class LinkedList {
	struct Node {
		Luchador l;
		Node* next;
	};
	private:
		Node* head;
	public:
		LinkedList();
		void Agregar(Luchador);
		string Ver();
};

#endif
