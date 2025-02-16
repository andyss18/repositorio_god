#include <iostream>
using namespace std;
class Persona {
	// atributos
	protected : // cuando es solo para heredar 
	string nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	// metodos
	protected :
	Persona(){  // dos constructores, uno que no reciba ningun parametro y otro que los reciba todos
	}
	Persona(string nom, string ape, string dir, int tel, string fn){
		nombres = nom;
		apellidos = ape;
		direccion = dir;
		telefono = tel;
		fecha_nacimiento = fn;
	}
	// crud
	void crear();
	void leer();
	void actualizar();
	void borrar();
};
