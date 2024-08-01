#ifndef EMPLEADO_H
#define EMPLEADO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Empleado{
	private:
		int edad;
		float salario;
		char genero;
		char tipoContrato;
	public:
		string nombre;
		//constructor
		Empleado(string nombre, int edad,
				 char genero, float salario,
				 char tipoContrato){
			this->nombre = nombre;
			//aplicar las reglas de los atributos privados tambien aqui:
			this->setEdad(edad);
			this->setGenero(genero);
			this->setSalario(salario);
			this->setTipoContrato(tipoContrato);
		}
		//metodos
		void imprimir(){
			cout << "**** Perfil de Empleado ****" << endl;
			cout << "Nombre: " << this->nombre << endl;
			cout << "Edad: " << this->edad << endl;
			cout << "Genero: " << this->genero << endl;
			cout << "Salario: " << this->salario << endl;
			cout << "Tipo de Contrato: " << this->tipoContrato << endl;
		}
		//getters: permiten consultar un atributo que es privado
		int getEdad(){
			return this->edad;
		}
		char getGenero(){
			return this->genero;
		}
		float getSalario(){
			return this->salario;
		}
		char getTipoContrato(){
			return this->tipoContrato;
		}
		//setters: permiten escribir en un atributo que es privado
		void setEdad(int edad){
			if( edad < 18 )
				throw invalid_argument("Empleado: la edad no puede ser < 18");
			else
				this->edad = edad; //se acepta
		}
		void setSalario(float salario){
			if( salario < 0 )
				throw invalid_argument("Empleado: el salario no puede ser negativo");
			else
				this->salario = salario; //se acepta
		}
		void setGenero(char genero){
			if( genero == 'M' || genero == 'F' || genero == 'X' )
				this->genero = genero; //se acepta
			else
				throw invalid_argument("Empleado: genero debe de ser M F X");
		}
		void setTipoContrato(char tipoContrato){
			if( tipoContrato == 'P' || tipoContrato == 'T' )
				this->tipoContrato = tipoContrato; //se acepta
			else
				throw invalid_argument("Empleado: tipo de contrato debe de ser P T");
		}
};

#endif









