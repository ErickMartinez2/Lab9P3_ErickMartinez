#include "Guerrero.h"

Guerrero::Guerrero() {

}

Guerrero::Guerrero(string pnombre) {
	nombre = pnombre;
	salud = 120;
	experiencia = 0;
	defensa_magica = 0;
	defensa_fisica = 0.30;
	experiencia_necesaria = 0;
	experiencia_entregada = 75;
	defensam_activa = false;
	defensaf_activa = false;
}

void Guerrero::Defensa() {
	salud = (salud * 0.45) + salud;
	defensam_activa = false;
	defensaf_activa = true;
}

int Guerrero::AtaqueMagico() {
	return 0;
}

int Guerrero::AtaqueFisico() {
	return 15;
}

void Guerrero::Habilidad() {
	salud += 40;
}

