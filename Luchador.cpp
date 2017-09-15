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

/*int Luchador::getAtaqueMagico() {
	return ataque_magico;
}

void Luchador::setAtaqueMagico(int pataque_magico) {
	ataque_magico = pataque_magico;
}

int Luchador::getAtaqueFisico() {
	return ataque_fisico;
}

void Luchador::setAtaqueFisico(int pataque_fisico) {
	ataque_fisico = pataque_fisico;
}*/

int Luchador::getDefensaMagica() {
	return defensa_magica;
}

void Luchador::setDefensaMagica(int pdefensa_magica) {
	defensa_magica = pdefensa_magica;
}

int Luchador::getDefensaFisica() {
	return defensa_fisica;
}

void Luchador::setDefensaFisica(int pdefensa_fisica) {
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

