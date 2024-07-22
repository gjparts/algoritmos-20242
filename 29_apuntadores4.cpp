#include<iostream>
#include "29_funciones.h"
using namespace std;

int main(){
	/*Apuntadores cuando usamos tipos object o struct
	1) en el parametro de la funcion se coloca el simbolo
	de apuntador (asterisco) asi como lo hicimos con
	los tipos de dato primitivos.
	2) cuando enviamos desde el ambito externo la variable
	utilizamos el simbolo & asi como lo hicimos con
	los tipos de dato primitivos.
	3) no es posible tener acceso a los elementos/miembros del objeto
	o struct de forma directa, para resolverlo hacemos una copia
	trabajamos sobre ella y luego la enviamos a la variable
	apuntada.*/
	string pais = "Honduras";
	cout << "pais antes: " << pais << endl;
	cout << "offset antes: " << &pais << endl;
	mayusculas(&pais);
	cout << "pais despues: " << pais << endl;
	cout << "offset despues: " << &pais << endl;
	
	string oracion = "Bienvenidos a UNAH Cortes VS CURN o como quiera";
	cout << oracion << endl;
	reemplazoEspaciosGuiones(&oracion);
	cout << oracion << endl;
	
	return 777;
}
