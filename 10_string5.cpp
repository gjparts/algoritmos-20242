#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	/*Hacer un programa que solicite al usuario digitar dos
	cadenas de texto, una vez capturadas que el programa diga
	si son iguales o si son diferentes; pero ignorando mayusculas
	y minusculas y SIN alterar las dos cadenas de texto leidas.
	Tienen 5 minutos para resolverlo y me envian captura de
	pantalla del programa en el grupo de WhatsApp.*/
	string x,y;
	cout << "Digitar x: ";
	getline(cin,x);
	cout << "Digitar y: ";
	getline(cin,y);
	
	//hacer copia de los string leidos para no afectar los originales
	string copia_x, copia_y;
	//transformar las copias al mismo character casing (capitalizacion)
	transform(copia_x.begin(), copia_x.end(), copia_x.begin(), ::toupper);
	transform(copia_y.begin(), copia_y.end(), copia_y.begin(), ::toupper);
	
	if( copia_x == copia_y )
		cout << "Los string son iguales ignorando mayusc./minusc.";
	else
		cout << "Los string NO son iguales ignorando mayusc./minusc.";
	
	cout << endl;
	
	return 123;
}
