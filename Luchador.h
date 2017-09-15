#ifndef LUCHADOR_H
#define LUCHADOR_H
#include <string>
#include <vector>
using namespace std;

class Luchador {
	private:
		string nombre;
		int batallas_ganadas;
		int experiencia;
		vector<string> clases_aprendidas;
	public:
		Luchador();
		Luchador(string, int, int);
		string getNombre();
		void setNombre(string);
		int getBatallas();
		void setBatallas(int);
		int getExperiencia();
		void setExperiencia(int);
		vector<string> getClases();
		void setClases(vector<string>);
};

#endif
