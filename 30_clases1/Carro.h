#ifndef CARRO_H
#define CARRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class Carro{
	private:
		//atributos privados (no se pueden ver desde otra clase)
		//(no se pueden ver desde main)
		int anio;
	public:
		//atributos publicos
		string marca;
		string modelo;
		string color;
		//constructor
		Carro(string marca, string modelo, string color, int anio){
			this->marca = marca;
			this->modelo = modelo;
			this->color = color;
			//desde el constr. si puede inicializar un atributo privado
			//pero para ello debe usar el metodo set
			this->setAnio(anio);
		}
		//metodos
		//para poder leer un atributo privado desde fuera se usa un metodo get
		//el get debe tener el mismo tipo de dato del atributo a leer
		int getAnio(){
			return this->anio;
		}
		//para poder escribir un atributo privado desde fuera se usa un metodo set
		//el set normalmente no retorna nada, por eso se hace void
		//el set recibe normalmente un parametro usando para establecer
		//el valor nuevo al atributo
		void setAnio(int anio){
			//usualmente se usa metodos set para validar la informacion
			//que se va a asignar a un atributo o sea aplicar las reglas del atributo
			if( anio <= 0 )
				throw invalid_argument("Carro: anio debe ser >= 0");
			else
				this->anio = anio; //se acepta el valor enviado
		}
};

#endif






