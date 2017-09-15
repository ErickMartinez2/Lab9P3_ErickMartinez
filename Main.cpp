#include <iostream>
#include <string>
#include "LinkedList.h"
#include "Luchador.h"
#include "Aprendiz.h"
#include "Mago.h"
#include "Guerrero.h"
#include "Alquimista.h"
#include "DragonBorn.h"
using namespace std;

int main() {
	/*LinkedList list;
	  Luchador lu;
	  list.Agregar(lu);
	  list.Agregar(10);
	  list.Agregar(15);
	  cout << list.Ver() << endl;
	  cout << list.Ver() << endl;
	  cout << list.Ver() << endl;*/
	int opcion;
	LinkedList luchadores;
	do {
		cout << endl;
		cout << "*** Simulacion Skyrim ***" << endl
			<< "1. Agregar Luchador" << endl
			<< "2. Listar Luchadores" << endl
			<< "3. Simulacion" << endl
			<< "4. Salir" << endl
			<< "Ingrese su opción: ";
		cin >> opcion;
		cout << endl;
		switch (opcion) {
			case 1:{
					   cout << "-> Agregar Luchador" << endl;
					   cout << "Ingrese el nombre del luchador: ";
					   string nombre;
					   cin >> nombre;
					   cout << endl;
					   cout << "-> Tipos de Luchadores" << endl
						   << "1. Aprendiz" << endl
						   << "2. Guerrero" << endl
						   << "3. Mago" << endl
						   << "4. Alquimista" << endl
						   << "5. DragonBorn"<< endl
						   << "Ingrese su opcion: ";
					   int opcion_luchador;
					   cin >> opcion_luchador;
					   cout << endl;
					   switch (opcion_luchador) {
						   case 1:{
									  Luchador* luchador = new Aprendiz(nombre);
									  luchadores.insert(luchador);
									  cout << "Aprendiz Agregado!" << endl;
								  }break;
						   case 2:{
									  Luchador* luchador = new Guerrero(nombre);
									  luchadores.insert(luchador);
									  cout << "Guerrero Agregado!" << endl;
								  }break;
						   case 3:{
									  Luchador* luchador = new Mago(nombre);
									  luchadores.insert(luchador);
									  cout << "Mago Agregado!" << endl;
								  }break;
						   case 4:{
									  Luchador* luchador = new Alquimista(nombre);
									  luchadores.insert(luchador);
									  cout << "Alquimista Agregado!" << endl;
								  }break;
						   case 5:{
									  Luchador* luchador = new DragonBorn(nombre);
									  luchadores.insert(luchador);
									  cout << "DragonBorn Agregado!" << endl;
								  }break;
					   }
				   }break;
			case 2:{
						cout << "-> Lista de Luchadores " << endl;
						for (int i = 1; i <= luchadores.getSize(); i++) {
							cout << i << ". " << luchadores.get(i, luchadores.getSize()) -> getNombre() << endl;
						}
				   }break;
			case 3:{

				   }break;
			case 4:{
					   cout << "Hasta Pronto Ana!" << endl;
				   }break;
		}
	} while (opcion != 4);
	for (int i = 1; i <= luchadores.getSize(); i++) {
		delete luchadores.get(i, luchadores.getSize());
	}
	return 0;
}
