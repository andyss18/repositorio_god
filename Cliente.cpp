#include <iostream>
#include "Diagrama_poo.cpp"
using namespace std;

class Cliente : Persona{    // simbolo de la herencia son dos puntos

	private : 
		string nit;
		
		// metodos c(consttructor y metods crud)
	public :
		cliente (){
		}
		cliente (string nom,string ape,string dir,int tel,string fn,string n) : Persona(nom,ape,dir,tel,fn,n){
			nit =n;
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
