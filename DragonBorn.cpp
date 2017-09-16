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
	defensam_activa = false;
	defensaf_activa = false;
}

void DragonBorn::Defensa() {
	salud = (salud * 0.45) + salud;
	defensam_activa = true;
	defensaf_activa = true;
}

int DragonBorn::AtaqueMagico() {
	return 25;
}

int DragonBorn::AtaqueFisico() {
	return 23;
}

