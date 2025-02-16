#include "Diagrama_poo.cpp"
#include <iostream>

using namespace std;

class Cliente : Persona{    // simbolo de la herencia son dos puntos

	private : 
		string nit;
		
		// metodos c(consttructor y metods crud)
	public :
		cliente (){
		}
		Cliente(string nom,string ape,string dir,int tel,string fn,string n) : Persona(nom,ape,dir,tel,fn){
			nit =n;
		}
		
		// set (modificar un atributo o para enviar datos al atributo)
		void setNit(string n){
			nit =n;
		}
		void setNombres(string nom){
			nombres =nom;
		}
		void setApellidos(string ape){
			apellidos =ape;
		}
		void setDireccion(string dir){
			direccion =dir;
		}
		void setTelefono(int tel){
			telefono =tel;
		}
		void setFechaNacimiento(string fn){
			fecha_nacimiento =fn;
		}
		string getNit(){
			return nit;
		}
		string getNombres(){
			return nombres;
		}
		string getApellidos(){
			return apellidos;
		}
		string getDireccion(){
			return direccion;
		}
		int getTelefono(){
			return telefono;
		}
		string getFechaNacimiento(){
			return fecha_nacimiento;
		}
		void leer(){
			cout<<"nit: "<< nit<<endl;
			cout<<"nombres: "<< nombres<<endl;
			cout<<"apellidos: "<< apellidos<<endl;
			cout<<"direccion: "<< direccion<<endl;
			cout<<"telefono: "<< telefono<<endl;
			cout<<"fecha nacimiento: "<< fecha_nacimiento<<endl;
			}
};
