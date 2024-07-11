#include<iostream>
#include<stdexcept>
#define _USE_MATH_DEFINES //esto se coloca antes de incluir math.h o cmath
						  //para poder traer constantes como PI (M_PI)
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
double areaCirculo(double radio){
	return M_PI*pow(radio,2);
}
float  areaCirculo(float radio){
	return M_PI*pow(radio,2);
}

/*6. Escriba una función llamada minimo que retorne
el menor de tres números, dicha funcion debera poder
funcionar con tres numeros enteros o con
tres numeros double o tres numeros float.
Para evitar hacer lo mismo 3 veces con diferente tipo, se recomienda
reutilizar la funcion que soporte numeros de mayor precision y mandarla
a llamar desde las que usan numeros de menor precision*/
//IMPORTANTE: la funcion a reutilizar debe definirse antes que las que la mandan a llamar
double minimo(double a, double b, double c){
	//cout << "usando minimo con double" << endl;
	//de las 3 funciones sobrecargadas esta es la de mayor precision
	if( a <= b && a <= c ) return a;
	if( b <= a && b <= c ) return b;
	if( c <= a && c <= b ) return c;
}
int minimo(int a, int b, int c){
	//cout << "usando minimo con int" << endl;
	//pasar los valores int a valores double
	//para que la funcion minimo ejecutada sea la de doubles
	double x = a, y = b, z = c;
	return minimo(x,y,z);
}
float minimo(float a, float b, float c){
	//cout << "usando minimo con float" << endl;
	//pasar los valores float a valores double
	//para que la funcion minimo ejecutada sea la de doubles
	double x = a, y = b, z = c;
	return minimo(x,y,z);
}








