#include "DragonBorn.h"

DragonBorn::DragonBorn() {

}

DragonBorn::DragonBorn(string pnombre) {
	nombre = pnombre;
	salud = 200;
	experiencia = 0;
	defensa_magica = 0.20;
	defensa_fisica = 0.20;
	experiencia_necesaria = 400;
	experiencia_entregada = 150;
}
