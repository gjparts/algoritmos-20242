#include<iostream>
#include<stdexcept>
using namespace std;

double dividir(double dividendo, double divisor){
	if( divisor == 0 ) //guard clause: si divisor es CERO lanzamos excepcion
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
	//la funcion dividir puede generar una excepcion
	try{
		//controlamos la excepcion con try-catch
		cout << dividir(5,2) << endl;
		cout << dividir(5,0) << endl;
	}catch(exception &ex){
		//note que se puso un & en la declaracion de ex
		//what() devuelve el mensaje de la excepcion
		cout << ex.what() << endl;
	}
	
	cout << "Adios" << endl;
	
	return 567;
}
