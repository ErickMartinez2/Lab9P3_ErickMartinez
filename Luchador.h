#ifndef LUCHADOR_H
#define LUCHADOR_H
#include <string>
#include <vector>
using namespace std;

class Luchador {
	protected:
		string nombre;
		int batallas_ganadas;
		int experiencia;
		vector<string> clases_aprendidas;
		int salud;
		/*int ataque_magico;
		int ataque_fisico;*/
		int defensa_magica;
		int defensa_fisica;
		int experiencia_necesaria;
		int experiencia_entregada;
	public:
		Luchador();
		Luchador(string);
		string getNombre();
		void setNombre(string);
		int getBatallas();
		void setBatallas(int);
		int getExperiencia();
		void setExperiencia(int);
		int getSalud();
		void setSalud(int);
		/*int getAtaqueMagico();
		void setAtaqueMagico(int);
		int getAtaqueFisico();*/
		void setDefensaMagica(int);
		int getDefensaMagica();
		void setDefensaFisica(int);
		int getDefensaFisica();
		//void setAtaqueFisico(int);
		int getExperienciaNecesaria();
		void setExperienciaNecesaria(int);
		int getExperienciaEntregada();
		void setExperienciaEntregada(int);
		vector<string> getClases();
		void setClases(vector<string>);
};

#endif
