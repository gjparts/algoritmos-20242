#include<iostream>
#include<stdexcept>
#include "Persona.h"
#include "Mascota.h"
#include "Carro.h"
#include "Empleado.h"
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

	Carro *honda = new Carro("Honda","Civic","Negro",2004);
	cout << "Color de honda: " << honda->color << endl;
	//lo siguiente no se puede hacer poque anio es privado para la clase Carro
	//cout << "Anio de honda: " << honda->anio << endl;
	//pero podemos usar el metodo get para consultar el anio:
	cout << "Anio de honda: " << honda->getAnio() << endl;
	//si queremos cambiar el valor de anio entonces usamos el metodo set
	//honda->setAnio(-9999);
	honda->setAnio(2016);
	cout << "Anio de honda: " << honda->getAnio() << endl;
	
	
	
	//probar los get y los set
	Empleado *em1; //declarar
	try{
		em1 = new Empleado("Gerardo",42,'M',10000,'T'); //inicializar
		em1->imprimir();
		
		em1->setEdad(15);
		
	}catch(exception &ex){
		cout << ex.what() << endl;
	}
	
	cout << "la edad de em1 es: " << em1->getEdad() << endl;
	
	return 875;
}























