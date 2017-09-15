#include "Luchador.h"

Luchador::Luchador() {

}

Luchador::Luchador(string pnombre, int pbatallas, int pexperiencia) {
	nombre = pnombre;
	batallas_ganadas = pbatallas;
	experiencia = pexperiencia;
}

string Luchador::getNombre() {
	return nombre;
}

void Luchador::setNombre(string pnombre) {
	nombre = pnombre;
}

int Luchador::getBatallas() {
	return batallas_ganadas;
}

void Luchador::setBatallas(int pbatallas) {
	batallas_ganadas = pbatallas;
}

int Luchador::getExperiencia() {
	return experiencia;
}

void Luchador::setBatallas(int pbatallas) {
	batallas_ganadas = pbatallas;
}

vector<string> Luchador::getClases() {
	return clases_aprendidas;
}

void Luchador::setClases(vector<string> pclases) {
	clases_aprendidas = pclases;
}
