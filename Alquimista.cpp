#include "Alquimista.h"

Alquimista::Alquimista() {

}

Alquimista::Alquimista(string pnombre) {
	nombre = pnombre;
	salud = 130;
	experiencia = 0;
	defensa_magica = 0.20;
	defensa_fisica = 0.20;
	experiencia_necesaria = 300;
	experiencia_entregada = 100;
}
