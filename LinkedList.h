#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include "Luchador.h"
#include <string>
using namespace std;

class LinkedList {
	struct Node {
		Luchador* luchador;
		Node* nodo;
	};
	private:
		Node* raiz;
	public:
		LinkedList();
		void insert(Luchador*);
		int getSize();
		Luchador* get(int, int);
		void Delete();
		//string Ver();
};

#endif
