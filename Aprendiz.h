#ifndef APRENDIZ_H
#define APRENDIZ_H
#include <string>
#include "Luchador.h"
using namespace std;

class Aprendiz: public Luchador {
	private:
		
	public:
		Aprendiz();
		Aprendiz(string);
		virtual void Defensa();
		virtual int AtaqueMagico();
		virtual int AtaqueFisico();
		virtual void HabilidadPasiva();
};

#endif
