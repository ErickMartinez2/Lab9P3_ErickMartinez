#include <iostream>
#include "LinkedList.h"
#include "Luchador.h"
#include "Aprendiz.h"
using namespace std;

int main() {
	LinkedList list;
	Luchador lu;
	list.Agregar(lu);
	/*list.Agregar(10);
	list.Agregar(15);
	cout << list.Ver() << endl;
	cout << list.Ver() << endl;*/
	cout << list.Ver() << endl;
	return 0;
}
