#ifndef GUERRERO_H
#define GUERRERO_H
#include <string>
#include "Luchador.h"
using namespace std;

class Guerrero: public Luchador {
	private:
		
	public:
		Guerrero();
		Guerrero(string);
};

#endif
