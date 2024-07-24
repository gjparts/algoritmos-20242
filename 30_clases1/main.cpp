#include<iostream>
#include "Persona.h"
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
	
	return 875;
}








