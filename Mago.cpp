#include "Mago.h"

Mago::Mago() {

}

Mago::Mago(string pnombre) {
	nombre = pnombre;
	salud = 100;
	experiencia = 0;
	defensa_magica = 0.30;
	defensa_fisica = 0;
	experiencia_necesaria = 200;
	experiencia_entregada = 75;
}
