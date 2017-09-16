#ifndef DRAGONBORN_H
#define DRAGONBORN_H
#include <string>
#include "Luchador.h"
using namespace std;

class DragonBorn: public Luchador {
	private:
		
	public:
		DragonBorn();
		DragonBorn(string);
		virtual void Defensa();
		virtual int AtaqueMagico();
		virtual int AtaqueFisico();
};

#endif
