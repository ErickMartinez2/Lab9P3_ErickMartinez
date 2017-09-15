#include <iostream>
#include "LinkedList.h"
#include "Luchador.h"
using namespace std;

int main() {
	LinkedList list;
	Luchador lu("Comer", 2);
	list.Agregar(lu);
	/*list.Agregar(10);
	list.Agregar(15);
	cout << list.Ver() << endl;
	cout << list.Ver() << endl;*/
	cout << list.Ver() << endl;
	return 0;
}
