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
	defensam_activa = false;
	defensaf_activa = false;
}

void Mago::Defensa() {
	salud = (salud * 0.45) + salud;
	defensam_activa = true;
	defensaf_activa = false;
}

int Mago::AtaqueMagico() {
	return 15;
}

int Mago::AtaqueFisico() {
	return 0;
}

void Mago::Habilidad() {
		
}

