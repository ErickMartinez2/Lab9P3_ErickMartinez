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
	defensam_activa = false;
	defensaf_activa = false;
}

void Alquimista::Defensa() {
	salud = (salud * 0.45) + salud;
	defensam_activa = true;
	defensaf_activa = true;
}

int Alquimista::AtaqueMagico() {
	return 10;
}

int Alquimista::AtaqueFisico() {
	return 10;
}

