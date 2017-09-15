#include "Guerrero.h"

Guerrero::Guerrero() {

}

Guerrero::Guerrero(string pnombre) {
	nombre = pnombre;
	salud = 120;
	experiencia = 15;
	defensa_magica = 0;
	defensa_fisica = 0.30;
	experiencia_necesaria = 0;
	experiencia_entregada = 75;
}
