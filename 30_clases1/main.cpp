#include<iostream>
#include "Persona.h"
#include "Mascota.h"
using namespace std;

int main(){
	//instanciar un objeto de la clase Persona
	Persona *p1 = new Persona();
	//imprimir la informacion de los atributos de p1
	cout << "valores default de p1: ****************" << endl;
	cout << p1->nombre << endl;
	cout << p1->edad << endl;
	cout << p1->genero << endl;
	cout << p1->dni << endl;
	
	//podemos cambiar los valores de los atributos
	//al gusto
	p1->nombre = "Gerardo";
	p1->edad = 42;
	p1->genero = 'M';
	p1->dni = 1401198201055;
	
	cout << "nuevos valores de p1: ****************" << endl;
	cout << p1->nombre << endl;
	cout << p1->edad << endl;
	cout << p1->genero << endl;
	cout << p1->dni << endl;
	
	//podemos crear un objeto usando un constructor
	//con parametros
	Persona *p2 = new Persona("Irene",42);
	//imprimir la informacion de los atributos de p2
	cout << "valores default de p2: ****************" << endl;
	cout << p2->nombre << endl;
	cout << p2->edad << endl;
	cout << p2->genero << endl;
	cout << p2->dni << endl;
	
	//hagamos otros objeto de clase Persona
	Persona *p3 = new Persona("Viena",15,'F',1234123412345);
	//imprimir la informacion de los atributos de p3
	cout << "valores default de p3: ****************" << endl;
	cout << p3->nombre << endl;
	cout << p3->edad << endl;
	cout << p3->genero << endl;
	cout << p3->dni << endl;
	//Persona cuenta con un constructor sin parametros:
	Persona *alguien = new Persona();
	//en cambio Mascota no tiene un constructor sin param.
	//por lo tanto debe de usar alguno de los constr. disponibles
	Mascota *abc = new Mascota("Mandarino","Gato",4);
	Mascota *xyz = new Mascota("Rambo","Perro",2,'M',true);
	//si imprime el objeto lo que obtendra es una direccion de memoria:
	cout << "direccion de memoria de abc: " << abc << endl;
	
	Mascota *qwe = new Mascota("Loreta","Perico",1); // =  NULL
	cout << "direccion de memoria de qwe: " << qwe << endl;
	if( qwe == NULL )
		cout << "qwe no tiene asignada una direccion de memoria." << endl;
	else
		cout << qwe->especie << endl;

	abc->imprimir();
	xyz->imprimir();
	
	abc->genero = 'M';
	cout << "genero de abc: " << abc->generoDescripcion() << endl;

	return 875;
}








