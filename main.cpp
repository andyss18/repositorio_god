#include "Cliente.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombres,apellidos,direccion,fecha_nacimiento;
	int telefono;
	
	cout<<"ingrese nit: ";
	cin>>nit;
	cout<<"ingrese nombres: ";
	cin>>nombres;
	cout<<"ingrese apellidos: ";
	cin>>apellidos;
	cout<<"ingrese direccion: ";
	cin>>direccion;
	cout<<"ingrese fecha de nacimiento: ";
	cin>>fecha_nacimiento;
	cout<<"ingrese telefono: ";
	cin>>telefono;
	Cliente objc = Cliente(nombres,apellidos,direccion,telefono,fecha_nacimiento,nit);
	objc.leer();
	
}
