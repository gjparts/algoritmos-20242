#ifndef MASCOTA_H
#define MASCOTA_H

#include<iostream>
using namespace std;

class Mascota{
	private:
	public:
		//atributos publicos
		string nombre;
		string especie;
		int edad;
		char genero;
		bool pedigree;
		//constructores
		Mascota(string nombre, string especie, int edad){
			this->nombre = nombre;
			this->especie = especie;
			this->edad = edad;
			//establecer valores de inicio default para los atributos
			//que no vienen como parametro en el constructor
			this->genero = 'X';
			this->pedigree = false;
		}
		Mascota(string nombre, string especie, int edad, char genero, bool pedigree){
			this->nombre = nombre;
			this->especie = especie;
			this->edad = edad;
			this->genero = genero;
			this->pedigree = pedigree;
		}
		//metodos
		void imprimir(){
			cout << "**** Perfil de la Mascota ****" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Especie: " << this->especie << endl;
			cout << "Edad: " << this->edad << endl;
			//puede llamar metodos de la propia clase desde otros metodos:
			cout << "Genero: " << this->generoDescripcion() << endl;
			cout << "Pedigree: " << ( this->pedigree == true ? "Si" : "No" )<< endl;
		}
		string generoDescripcion(){
			if( this->genero == 'M' ) return "Masculino";
			if( this->genero == 'F' ) return "Femenino";
			return "Otros";
		}
};

#endif










