#include<iostream>
#include<stdexcept>
using namespace std;
/*1. Escriba una funcion llamada elevar que reciba dos numeros enteros,
	uno para la base y otro para la potencia, la funcion debe retornar un entero
	resultado de elevar el numero base a la potencia sin utilizar la funcion pow.
	-> la potencia no puede ser un numero negativo (en este ejercicio)*/
int elevar(int base, int potencia){
	if( potencia < 0 )
		throw invalid_argument("potencia no puede ser numero negativo.");
	
	int tmp = 1;
	for( int i = 1; i <= potencia; i++ )
		tmp = tmp * base;
		
	return tmp; //retornar el resultado
}
