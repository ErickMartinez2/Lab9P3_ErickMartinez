#ifndef ALQUIMISTA_H
#define ALQUIMISTA_H
#include <string>
#include "Luchador.h"
using namespace std;

class Alquimista: public Luchador {
	private:
		
	public:
		Alquimista();
		Alquimista(string);
		virtual void Defensa();
		virtual int AtaqueMagico();
		virtual int AtaqueFisico();
};

#endif
