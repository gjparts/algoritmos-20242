#include<iostream>
#include<stdexcept>
#include<cmath>
using namespace std;
/*1. Escriba una funcion llamada elevar que reciba dos numeros enteros,
	uno para la base y otro para la potencia, la funcion debe retornar un entero
	resultado de elevar el numero base a la potencia sin utilizar la funcion pow.
	-> la potencia no puede ser un numero negativo (en este ejercicio)*/
//long double (soporta enteros de mas de 64 bits) 1.79769313486231571e+308
//solo long es de 64 bits, en cambio long double es como juntar a dos variables long
long double elevar(long double base, long double potencia){
	if( potencia < 0 )
		throw invalid_argument("potencia no puede ser numero negativo.");
	
	long double tmp = 1;
	for( long double i = 1; i <= potencia; i++ )
		tmp = tmp * base;
		
	return tmp; //retornar el resultado
}
/*2. Defina una funcion llamada hipotenusa que retorne
la longitud de la hipotenusa de un triángulo rectángulo,
la funcion recibira los lados de dicho trinagulo.
La funcion debera funcionar con numeros double.*/
double hipotenusa(double opuesto, double adyacente){
	return sqrt( pow(opuesto,2)+pow(adyacente,2) );
}

/*3. Escriba una funcion que reciba dos numeros enteros y retorne true
si el primer numero es multiplo del segundo o false en caso contrario.*/
bool esMultiplo(int dividendo, int divisor){
	//sin usar operador ternario (tradicional)
	/*if( dividendo%divisor == 0 )
		return true;
	else
		return false;*/
	//utilizando operador ternario:
	return ( dividendo%divisor == 0 ? true : false );
}

/*4. Escriba una funcion que imprima un rectagulo de caracteres,
dicha funcion recibira como parametros el ancho y largo del mismo
asi como otro parametro con el caracter a usar para dibujar
dicho rectangulo.*/
void imprimirRectangulo(int largo, int ancho, char caracter){
	for( int i = 0; i < largo; i++ ){
		for(int j = 0; j < ancho; j++)
			cout << caracter;
		cout << endl;
	}
}

/*5. Hacer una funcion que retorne el area de un circulo,
dicha funcion debera recibir el radio como parametro.
Usando sobrecarga de funciones haga que la funcion pueda
trabajar con numeros double o con numeros float.*/




