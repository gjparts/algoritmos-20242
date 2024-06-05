#include<iostream>
using namespace std;
int main(){
	//cadena de texto
	string x = "hola UNAH";
	//un string es un arreglo de elementos char
	//imprimir cada char de un string
	for( int i = 0; i < x.length(); i++ ){
		cout << x[i] << endl;
	}
	//longitud del string
	cout << "x tiene " << x.length() << " caracteres." << endl;
	
	//podemos reemplazar cualquiera de los char de un string:
	//solo puede haber un caracter por posicion
	x[4] = '_';
	x[0] = 'R';
	cout << "nuevo valor de x: " << x << endl;
	
	//concatenar un string a otro string
	string c1 = "Gerardo";
	string c2 = "Sistemas";
	string c3 = "Hola soy "+c1+" y estudio "+c2;
	cout << c3 << endl;
	
	//se puede concatenar un char a un string
	string x1 = "Universidad";
	x1 = x1 + '7';
	cout << x1 << endl;
	
	return 4321;
}
