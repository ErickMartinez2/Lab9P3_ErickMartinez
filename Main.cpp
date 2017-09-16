#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>
#include "LinkedList.h"
#include "Luchador.h"
#include "Aprendiz.h"
#include "Mago.h"
#include "Guerrero.h"
#include "Alquimista.h"
#include "DragonBorn.h"
using namespace std;

int main() {
	int opcion;
	LinkedList luchadores;
	do {
		cout << endl;
		cout << "*** Simulacion Skyrim ***" << endl
			<< "1. Agregar Luchador" << endl
			<< "2. Listar Luchadores" << endl
			<< "3. Eliminar Luchador" << endl
			<< "4. Simulacion" << endl
			<< "5. Salir" << endl
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
					   int size = luchadores.getSize();
					   for (int i = 1; i <= size; i++) {
						   if (typeid(*luchadores.get(i, size)) == typeid(Aprendiz)) {
							   cout << "- (Aprendiz) " << luchadores.get(i, size) -> getNombre() << " / Experiencia: " <<  luchadores.get(i, size) -> getExperiencia() << endl;
						   } else {
							   if (typeid(*luchadores.get(i, size)) == typeid(Guerrero)) {
								   cout << "- (Guerrero) " << luchadores.get(i, size) -> getNombre() << " / Experiencia: " <<  luchadores.get(i, size) -> getExperiencia() << endl;
							   } else {
								   if (typeid(*luchadores.get(i, size)) == typeid(Mago)) {
									   cout << "- (Mago) " << luchadores.get(i, size) -> getNombre() << " / Experiencia: " <<  luchadores.get(i, size) -> getExperiencia() << endl;
								   } else {
									   if (typeid(*luchadores.get(i, size)) == typeid(Alquimista)) {
										   cout << "- (Alquimista) " << luchadores.get(i, size) -> getNombre() << " / Experiencia: " <<  luchadores.get(i, size) -> getExperiencia() << endl;
									   } else {
										   if (typeid(*luchadores.get(i, size)) == typeid(DragonBorn)) {
											   cout << "- (DragonBorn) " << luchadores.get(i, size) -> getNombre() << " / Experiencia: " <<  luchadores.get(i, size) -> getExperiencia() << endl;
										   }
									   }
								   }
							   }
						   }
					   }
				   }break;
			case 3:{
					   cout << "-> Eliminar Luchador" << endl;
					   int size = luchadores.getSize();
					   for (int i = 1; i <= size; i++) {
						   if (typeid(*luchadores.get(i, size)) == typeid(Aprendiz)) {
							   cout << i << ". (Aprendiz) " << luchadores.get(i, size) -> getNombre() << endl;
						   } else {
							   if (typeid(*luchadores.get(i, size)) == typeid(Guerrero)) {
								   cout << i << ". (Guerrero) " << luchadores.get(i, size) -> getNombre() << endl;
							   } else {
								   if (typeid(*luchadores.get(i, size)) == typeid(Mago)) {
									   cout << i << ". (Mago) " << luchadores.get(i, size) -> getNombre() << endl;
								   } else {
									   if (typeid(*luchadores.get(i, size)) == typeid(Alquimista)) {
										   cout << i << ". (Alquimista) " << luchadores.get(i, size) -> getNombre() << endl;
									   } else {
										   if (typeid(*luchadores.get(i, size)) == typeid(DragonBorn)) {
											   cout << i << ". (DragonBorn) " << luchadores.get(i, size) -> getNombre() << endl;
										   }
									   }
								   }
							   }
						   }
					   }
					   cout << "Ingrese el numero del luchador: ";
					   int num_luchador;
					   cin >> num_luchador;
					   luchadores.remove(num_luchador, size);
					   cout << endl;
					   cout << "Luchador Eliminado!" << endl;
				   }break;
			case 4:{
					   cout << "-> Simulacion" << endl;
					   int size = luchadores.getSize();
					   ofstream archivo("Luchadores.txt", ios::app);
					   for (int i = 1; i <= size; i++) {
						   if (typeid(*luchadores.get(i, size)) == typeid(Aprendiz)) {
							   cout << i << ". (Aprendiz) " << luchadores.get(i, size) -> getNombre() << endl;
						   } else {
							   if (typeid(*luchadores.get(i, size)) == typeid(Guerrero)) {
								   cout << i << ". (Guerrero) " << luchadores.get(i, size) -> getNombre() << endl;
							   } else {
								   if (typeid(*luchadores.get(i, size)) == typeid(Mago)) {
									   cout << i << ". (Mago) " << luchadores.get(i, size) -> getNombre() << endl;
								   } else {
									   if (typeid(*luchadores.get(i, size)) == typeid(Alquimista)) {
										   cout << i << ". (Alquimista) " << luchadores.get(i, size) -> getNombre() << endl;
									   } else {
										   if (typeid(*luchadores.get(i, size)) == typeid(DragonBorn)) {
											   cout << i << ". (DragonBorn) " << luchadores.get(i, size) -> getNombre() << endl;
										   }
									   }
								   }
							   }
						   }
					   }
					   cout << "Ingrese el numero del primer luchador: ";
					   int num_luchador;
					   cin >> num_luchador;
					   cout << "Ingrese el numero del segundo luchador: ";
					   int num_luchador2;
					   cin >> num_luchador2;
					   bool ganador = false;
					   int turno = 1;
					   cout << endl;
					   cout << "*** La Simulacion Skyrim Ha Comenzado ***" << endl;
					   archivo << "-> Simulacion Skyrim \n";
					   do {
						   cout << endl;
						   if (turno == 1) {
							   cout << "-> Turno Primer Luchador" << endl;
							   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Aprendiz)) {
								   cout << "Luchador (Aprendiz) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
							   } else {
								   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Guerrero)) {
									   cout << "Luchador (Guerrero) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
								   } else {
									   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Mago)) {
										   cout << "Luchador (Mago) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
									   } else {
										   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Alquimista)) {
											   cout << "Luchador (Alquimista) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
										   } else {
											   if (typeid(*luchadores.get(num_luchador, size)) == typeid(DragonBorn)) {
												   cout << "Luchador (DragonBorn) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
											   }
										   }
									   }
								   }
							   }
							   cout << "Salud: " << luchadores.get(num_luchador, size) -> getSalud() << endl;
							   cout << "1. Ataque Magico" << endl
								   << "2. Ataque Fisico" << endl
								   << "3. Defender" << endl
								   << "4. Habilidad" << endl
								   << "Ingrese su opcion: ";
							   int opcion2;
							   cin >> opcion2;
							   cout << endl;
							   switch (opcion2) {
								   case 1:{
											  if (luchadores.get(num_luchador, size) -> AtaqueMagico() > 0) {
												  if (luchadores.get(num_luchador2, size) -> getDefensaM()) {
													  double nuevo_ataque = luchadores.get(num_luchador, size) -> AtaqueMagico() - (luchadores.get(num_luchador2, size) -> getDefensaMagica() * luchadores.get(num_luchador, size) -> AtaqueMagico());
													  luchadores.get(num_luchador2, size) -> setSalud(luchadores.get(num_luchador2, size) -> getSalud() - nuevo_ataque);
												  } else {
													  luchadores.get(num_luchador2, size) -> setSalud(luchadores.get(num_luchador2, size) -> getSalud() - luchadores.get(num_luchador, size) -> AtaqueMagico());
												  }
												  cout << "Ataque Magico Realizado!" << endl;
												  archivo << "- " << luchadores.get(num_luchador, size) -> getNombre()  << " (Ataque Magico) " << luchadores.get(num_luchador2, size) -> getNombre() << "\n";
												  turno++;
											  } else {
												  cout << "No tienes Ataque Magico!" << endl;
											  }
										  } break;
								   case 2:{
											  if (luchadores.get(num_luchador, size) -> AtaqueFisico() > 0) {
												  if (luchadores.get(num_luchador2, size) -> getDefensaF()) {
													  double nuevo_ataque = luchadores.get(num_luchador, size) -> AtaqueFisico() - (luchadores.get(num_luchador2, size) -> getDefensaFisica() * luchadores.get(num_luchador, size) -> AtaqueFisico());
													  luchadores.get(num_luchador2, size) -> setSalud(luchadores.get(num_luchador2, size) -> getSalud() - nuevo_ataque);
												  } else {
													  luchadores.get(num_luchador2, size) -> setSalud(luchadores.get(num_luchador2, size) -> getSalud() - luchadores.get(num_luchador, size) -> AtaqueFisico());
												  }
												  cout << "Ataque Fisico Realizado!" << endl;
												  archivo << "- " << luchadores.get(num_luchador, size) -> getNombre()  << " (Ataque Fisco) " << luchadores.get(num_luchador2, size) -> getNombre() << "\n";
												  turno++;
											  } else {
												  cout << "No tienes Fisico Magico!" << endl;
											  }
										  } break;
								   case 3:{
											  luchadores.get(num_luchador, size) -> Defensa();
											  cout << "Defensa Activada!" << endl;
											  archivo << "- " << luchadores.get(num_luchador, size) -> getNombre()  << " (Defensa Activada) \n";
											  turno++;
										  } break;
								   case 4:{
											  luchadores.get(num_luchador, size) -> Habilidad();
											  cout << "Habilidad Activada!" << endl;
											  archivo << "- " << luchadores.get(num_luchador, size) -> getNombre()  << " (Habilidad Activada) \n";
											  turno++;
										  } break;
							   }
						   } else {
							   cout << "-> Turno Segundo Luchador" << endl;
							   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Aprendiz)) {
								   cout << "Luchador (Aprendiz) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
							   } else {
								   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Guerrero)) {
									   cout << "Luchador (Guerrero) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
								   } else {
									   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Mago)) {
										   cout << "Luchador (Mago) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
									   } else {
										   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Alquimista)) {
											   cout << "Luchador (Alquimista) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
										   } else {
											   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(DragonBorn)) {
												   cout << "Luchador (DragonBorn) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
											   }
										   }
									   }
								   }
							   }
							   cout << "Salud: " << luchadores.get(num_luchador2, size) -> getSalud() << endl;
							   cout << "1. Ataque Magico" << endl
								   << "2. Ataque Fisico" << endl
								   << "3. Defender" << endl
								   << "4. Habilidad" << endl
								   << "Ingrese su opcion: ";
							   int opcion2;
							   cin >> opcion2;
							   cout << endl;
							   switch (opcion2) {
								   case 1:{
											  if (luchadores.get(num_luchador2, size) -> AtaqueMagico() > 0) {
												  if (luchadores.get(num_luchador, size) -> getDefensaM()) {
													  double nuevo_ataque = luchadores.get(num_luchador2, size) -> AtaqueMagico() - (luchadores.get(num_luchador, size) -> getDefensaMagica() * luchadores.get(num_luchador2, size) -> AtaqueMagico());
													  luchadores.get(num_luchador, size) -> setSalud(luchadores.get(num_luchador, size) -> getSalud() - nuevo_ataque);
												  } else {
													  luchadores.get(num_luchador, size) -> setSalud(luchadores.get(num_luchador, size) -> getSalud() - luchadores.get(num_luchador2, size) -> AtaqueMagico());
												  }
												  cout << "Ataque Magico Realizado!" << endl;
												  archivo << "- " << luchadores.get(num_luchador2, size) -> getNombre()  << " (Ataque Magico) " << luchadores.get(num_luchador, size) -> getNombre() << "\n";
												  turno = 1;
											  } else {
												  cout << "No tienes Ataque Magico!" << endl;
											  }
										  } break;
								   case 2:{
											  if (luchadores.get(num_luchador2, size) -> AtaqueFisico() > 0) {
												  if (luchadores.get(num_luchador, size) -> getDefensaF()) {
													  double nuevo_ataque = luchadores.get(num_luchador2, size) -> AtaqueFisico() - (luchadores.get(num_luchador, size) -> getDefensaFisica() * luchadores.get(num_luchador2, size) -> AtaqueFisico());
													  luchadores.get(num_luchador, size) -> setSalud(luchadores.get(num_luchador, size) -> getSalud() - nuevo_ataque);
												  } else {
													  luchadores.get(num_luchador, size) -> setSalud(luchadores.get(num_luchador, size) -> getSalud() - luchadores.get(num_luchador2, size) -> AtaqueFisico());
												  }
												  cout << "Ataque Fisico Realizado!" << endl;
												  archivo << "- " << luchadores.get(num_luchador2, size) -> getNombre()  << " (Ataque Fisco) " << luchadores.get(num_luchador, size) -> getNombre() << "\n";
												  turno = 1;
											  } else {
												  cout << "No tienes Fisico Magico!" << endl;
											  }
										  } break;
								   case 3:{
											  luchadores.get(num_luchador2, size) -> Defensa();
											  cout << "Defensa Activada!" << endl;
											  archivo << "- " << luchadores.get(num_luchador2, size) -> getNombre()  << " (Defensa Activada) \n";
											  turno = 1;
										  } break;
								   case 4:{
											  luchadores.get(num_luchador2, size) -> Habilidad();
											  cout << "Habilidad Activada!" << endl;
											  archivo << "- " << luchadores.get(num_luchador2, size) -> getNombre()  << " (Habilidad Activada) \n";
											  turno = 1;
										  } break;
							   }
						   }
						   if (luchadores.get(num_luchador2, size) -> getSalud() <= 0) {
							   cout << endl;
							   cout << "Ha Ganado el ";
							   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Aprendiz)) {
								   cout << "Luchador (Aprendiz) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
								   luchadores.get(num_luchador, size) -> HabilidadPasiva();
								   archivo << "- " << luchadores.get(num_luchador, size) -> getNombre() << " (Habilidad Pasiva) \n";
								   cout << "Has Ganado " << luchadores.get(num_luchador, size) -> getExperienciaEntregada() * 2 << " de Experiencia!" << endl;
							   } else {
								   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Guerrero)) {
									   cout << "Luchador (Guerrero) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
									   luchadores.get(num_luchador, size) -> setExperiencia(luchadores.get(num_luchador, size) -> getExperiencia() + luchadores.get(num_luchador, size) -> getExperienciaEntregada());
									   cout << "Has Ganado " << luchadores.get(num_luchador, size) -> getExperienciaEntregada() << " de Experiencia!" << endl;
								   } else {
									   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Mago)) {
										   cout << "Luchador (Mago) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
										   luchadores.get(num_luchador, size) -> setExperiencia(luchadores.get(num_luchador, size) -> getExperiencia() + luchadores.get(num_luchador, size) -> getExperienciaEntregada());
										   cout << "Has Ganado " << luchadores.get(num_luchador, size) -> getExperienciaEntregada() << " de Experiencia!" << endl;
									   } else {
										   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Alquimista)) {
											   cout << "Luchador (Alquimista) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
											   luchadores.get(num_luchador, size) -> setExperiencia(luchadores.get(num_luchador, size) -> getExperiencia() + luchadores.get(num_luchador, size) -> getExperienciaEntregada());
											   cout << "Has Ganado " << luchadores.get(num_luchador, size) -> getExperienciaEntregada() << " de Experiencia!" << endl;
										   } else {
											   if (typeid(*luchadores.get(num_luchador, size)) == typeid(DragonBorn)) {
												   cout << "Luchador (DragonBorn) " << luchadores.get(num_luchador, size) -> getNombre() << endl;
												   luchadores.get(num_luchador, size) -> setExperiencia(luchadores.get(num_luchador, size) -> getExperiencia() + luchadores.get(num_luchador, size) -> getExperienciaEntregada());
												   cout << "Has Ganado " << luchadores.get(num_luchador, size) -> getExperienciaEntregada() << " de Experiencia!" << endl;
											   }
										   }
									   }
								   }
							   }
							   archivo << "Ganador: " << luchadores.get(num_luchador, size) -> getNombre() << "\n";
							   archivo << "\n";
							   ganador = true;
						   } else {
							   if (luchadores.get(num_luchador, size) -> getSalud() <= 0) {
								   cout << endl;
								   cout << "Ha Ganado el ";
								   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Aprendiz)) {
									   cout << "Luchador (Aprendiz) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
									   luchadores.get(num_luchador2, size) -> HabilidadPasiva();
									   archivo << "- " << luchadores.get(num_luchador2, size) -> getNombre() << " (Habilidad Pasiva) \n";
									   cout << "Has Ganado " << luchadores.get(num_luchador2, size) -> getExperienciaEntregada() * 2 << " de Experiencia!" << endl;
								   } else {
									   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Guerrero)) {
										   cout << "Luchador (Guerrero) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
										   luchadores.get(num_luchador2, size) -> setExperiencia(luchadores.get(num_luchador2, size) -> getExperiencia() + luchadores.get(num_luchador2, size) -> getExperienciaEntregada());
										   cout << "Has Ganado " << luchadores.get(num_luchador2, size) -> getExperienciaEntregada() << " de Experiencia!" << endl;

									   } else {
										   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Mago)) {
											   cout << "Luchador (Mago) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
											   luchadores.get(num_luchador2, size) -> setExperiencia(luchadores.get(num_luchador2, size) -> getExperiencia() + luchadores.get(num_luchador2, size) -> getExperienciaEntregada());
											   cout << "Has Ganado " << luchadores.get(num_luchador2, size) -> getExperienciaEntregada() << " de Experiencia!" << endl;

										   } else {
											   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Alquimista)) {
												   cout << "Luchador (Alquimista) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
												   luchadores.get(num_luchador2, size) -> setExperiencia(luchadores.get(num_luchador2, size) -> getExperiencia() + luchadores.get(num_luchador2, size) -> getExperienciaEntregada());
												   cout << "Has Ganado " << luchadores.get(num_luchador2, size) -> getExperienciaEntregada() << " de Experiencia!" << endl;

											   } else {
												   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(DragonBorn)) {
													   cout << "Luchador (DragonBorn) " << luchadores.get(num_luchador2, size) -> getNombre() << endl;
													   luchadores.get(num_luchador2, size) -> setExperiencia(luchadores.get(num_luchador2, size) -> getExperiencia() + luchadores.get(num_luchador2, size) -> getExperienciaEntregada());
													   cout << "Has Ganado " << luchadores.get(num_luchador2, size) -> getExperienciaEntregada() << " de Experiencia!" << endl;

												   }
											   }
										   }
									   }
								   }
								   archivo << "Ganador: " << luchadores.get(num_luchador2, size) -> getNombre() << "\n";
								   archivo << "\n";
								   ganador = true;
							   } 
						   }
					   } while (!ganador);
					   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Aprendiz)) {
						   luchadores.get(num_luchador, size) -> setSalud(60);
					   } else {
						   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Guerrero)) {
							   luchadores.get(num_luchador, size) -> setSalud(120);
						   } else {
							   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Mago)) {
								   luchadores.get(num_luchador, size) -> setSalud(100);
							   } else {
								   if (typeid(*luchadores.get(num_luchador, size)) == typeid(Alquimista)) {
									   luchadores.get(num_luchador, size) -> setSalud(130);
								   } else {
									   if (typeid(*luchadores.get(num_luchador, size)) == typeid(DragonBorn)) {
										   luchadores.get(num_luchador, size) -> setSalud(200);
									   }
								   }
							   }
						   }
					   }
					   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Aprendiz)) {
						   luchadores.get(num_luchador2, size) -> setSalud(60);
					   } else {
						   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Guerrero)) {
							   luchadores.get(num_luchador2, size) -> setSalud(120);
						   } else {
							   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Mago)) {
								   luchadores.get(num_luchador2, size) -> setSalud(100);
							   } else {
								   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(Alquimista)) {
									   luchadores.get(num_luchador2, size) -> setSalud(130);
								   } else {
									   if (typeid(*luchadores.get(num_luchador2, size)) == typeid(DragonBorn)) {
										   luchadores.get(num_luchador2, size) -> setSalud(200);
									   }
								   }
							   }
						   }
					   }
					   archivo.close();
				   }break;
			case 5:{
					   cout << "Hasta Pronto Ana!" << endl;
				   }break;
		}
	} while (opcion != 5);
	luchadores.Delete();
	return 0;
}
