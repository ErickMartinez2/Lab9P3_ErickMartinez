#include "Luchador.h"

Luchador::Luchador() {

}

Luchador::Luchador(string pnombre) {
	nombre = pnombre;
	batallas_ganadas = 0;
	experiencia = 0;
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

void Luchador::setExperiencia(int pexperiencia) {
	experiencia = pexperiencia;
}

int Luchador::getSalud() {
	return salud;
}

void Luchador::setSalud(int psalud) {
	salud = psalud;
}

double Luchador::getDefensaMagica() {
	return defensa_magica;
}

void Luchador::setDefensaMagica(double pdefensa_magica) {
	defensa_magica = pdefensa_magica;
}

double Luchador::getDefensaFisica() {
	return defensa_fisica;
}

void Luchador::setDefensaFisica(double pdefensa_fisica) {
	defensa_fisica = pdefensa_fisica;
}

vector<string> Luchador::getClases() {
	return clases_aprendidas;
}

void Luchador::setClases(vector<string> pclases) {
	clases_aprendidas = pclases;
}

int Luchador::getExperienciaNecesaria() {
	return experiencia_necesaria;
}

void Luchador::setExperienciaNecesaria(int pexperiencia_necesaria) {
	experiencia_necesaria = pexperiencia_necesaria;
}

int Luchador::getExperienciaEntregada() {
	return experiencia_entregada;
}

void Luchador::setExperienciaEntregada(int pexperiencia_entregada) {
	experiencia_entregada = pexperiencia_entregada;
}

bool Luchador::getDefensaM() {
	return defensam_activa;
}

void Luchador::setDefensaM(bool pdefensam_activa) {
	defensam_activa = pdefensam_activa;
}

bool Luchador::getDefensaF() {
	return defensaf_activa;
}

void Luchador::setDefensaF(bool pdefensaf_activa) {
	defensaf_activa = pdefensaf_activa;
}

int Luchador::AtaqueMagico() {
	return 0;
}

int Luchador::AtaqueFisico() {
	return 0;
}

void Luchador::Habilidad() {
	
}

void Luchador::HabilidadPasiva() {
	
}

void Luchador::Defensa() {

}
