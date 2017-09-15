#include "Aprendiz.h"

Aprendiz::Aprendiz() {

}

Aprendiz::Aprendiz(string pnombre) {
	nombre = pnombre;
	salud = 60;
	experiencia = 0;
	defensa_magica = 0;
	defensa_fisica = 0.10;
	experiencia_necesaria = 400;
	experiencia_entregada = 25;
}
