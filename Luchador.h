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
		double defensa_magica;
		double defensa_fisica;
		int experiencia_necesaria;
		int experiencia_entregada;
		bool defensam_activa;
		bool defensaf_activa;
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
		void setDefensaMagica(double);
		double getDefensaMagica();
		void setDefensaFisica(double);
		double getDefensaFisica();
		int getExperienciaNecesaria();
		void setExperienciaNecesaria(int);
		int getExperienciaEntregada();
		void setExperienciaEntregada(int);
		vector<string> getClases();
		void setClases(vector<string>);
		bool getDefensaM();
		void setDefensaM(bool);
		bool getDefensaF();
		void setDefensaF(bool);
		virtual int AtaqueMagico();
		virtual int AtaqueFisico();
		virtual void Defensa();
		virtual void Habilidad();
		virtual void HabilidadPasiva();
};

#endif
