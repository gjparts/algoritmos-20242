#include<iostream>
#include<stdexcept>
using namespace std;

double dividir(double dividendo, double divisor){
	if( divisor == 0 ) //guard clause: sin divisor es CERO lanzamos excepcion
		throw invalid_argument("divisor no puede ser cero");
		
	return dividendo/divisor;
}

int main(){
	/*GUARD CLAUSES
	son sentencias que permite proteger nuestro codigo
	para evitar que por ejemplo una funcion reciba datos
	incorrectos, lo que hacen las guard clauses es generar
	una excepcion que puede ser capturable con try-catch la
	cual impide la ejecucion del codigo que recibe parametros
	incorrectos. Esto es mejor que simplemente imprimir un mensaje
	con cout ya que permite al programador capturar las excepciones.*/
	cout << "Hola" << endl;
	cout << dividir(5,2) << endl;
	cout << dividir(5,0) << endl;
	cout << "Adios" << endl;
	
	return 567;
}
