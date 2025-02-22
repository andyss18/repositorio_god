#include "Diagrama_poo.cpp"
#include <iostream>
using namespace std;

class Empleado : Persona{
	private :
		string codigo,puesto;
		
	// metodos (costructor y metods crud)
	public :
		Empleado (){
		}
		Empleado (string nom,string ape,string dir,int tel,string fn,string cod,string pue) : Persona(nom,ape,dir,tel,fn){
			codigo = cod;
			puesto = pue;
		}
		// set (modificar un atributo o para enviar datos al atributo)
		void setCodigo(string cod){
			codigo = cod;
		}
		void setPuesto(string pue){
			puesto = pue;
		}
	
		void setNombres(string nom){
			nombres = nom;
		}
		void setApellidos(string ape){
			apellidos = ape;
		}
		void setDireccion(string dir){
			direccion = dir;
		}
		void setTelefono(int tel){
			telefono = tel;
		}
		void setFechaNacimiento(string fn){
			fecha_nacimiento = fn;
		}
		string getCodigo(){
			return codigo;
		}
		string getPuesto(){
			return puesto;
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
			cout<<"Codigo: "<< codigo<<endl;
			cout<<"Puesto: "<< puesto<<endl;
			cout<<"Nombres: "<<nombres<<endl;
			cout<<"Apellidos:"<<apellidos<<endl;
			cout<<"Direccion:"<<direccion<<endl;
			cout<<"Telefono:"<<telefono<<endl;
			cout<<"Fecha Nacimiento:"<<fecha_nacimiento<<endl;		
			}
};
