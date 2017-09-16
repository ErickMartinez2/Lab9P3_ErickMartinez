#ifndef MAGO_H
#define MAGO_H
#include <string>
#include "Luchador.h"
using namespace std;

class Mago: public Luchador {
	private:
		
	public:
		Mago();
		Mago(string);
		virtual void Defensa();
		virtual int AtaqueMagico();
		virtual int AtaqueFisico();
		virtual void Habilidad();
};

#endif
