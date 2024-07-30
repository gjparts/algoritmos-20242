#ifndef PERSONA_H
#define PERSONA_H

#include<iostream>
using namespace std;

class Persona{
	private:
		//aqui va todo lo del ambito (scope) privado
		//o sea no es accesible desde fuera de esta clase
	public:
		//aqui va todo lo del ambito publico
		//todo esto es accesible desde cualquier parte
		//atributos
		string nombre;
		int edad;
		char genero;
		long long dni;
		//constructores (casi siempre son public y se llaman igual que la clase)
		//los constructores son funciones sin tipo puesto que devuelven una
		//direccion de memoria.
		Persona(){
			//por ejemplo este es un constructor sin parametros
			//los constructores sin paeametros normalmente se usan para
			//inicializar a los atributos con valores de fabrica (default, predeterminados)
			this->nombre = "No tiene";
			this->edad = 0;
			this->genero = 'X';
			this->dni = 0;
		}
		//podemos tener mas de un constructor por clase
		Persona(string nombre, int edad){
			//este es un constructor con parametros
			this->nombre = nombre;
			this->edad = edad;
			this->genero = 'X';
			this->dni = 0;
		}
		//hagamos otro constructor con mas parametros
		Persona(string nombre, int edad, char genero, long long dni){
			//este es un constructor con parametros
			this->nombre = nombre;
			this->edad = edad;
			this->genero = genero;
			this->dni = dni;
		}
}; //no olvidar este punto y coma

#endif



