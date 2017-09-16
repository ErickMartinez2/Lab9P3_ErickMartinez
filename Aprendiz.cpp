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
	defensam_activa = false;
	defensaf_activa = false;
}

void Aprendiz::Defensa() {
	salud = (salud * 0.45) + salud;
	defensam_activa = false;
	defensaf_activa = true;
}

int Aprendiz::AtaqueMagico() {
	return 0;
}

int Aprendiz::AtaqueFisico() {
	return 10;
}

void Aprendiz::HabilidadPasiva() {
	experiencia += experiencia_entregada * 2;
}

void Aprendiz::Habilidad() {
	
}

