#include<iostream>
#include "25_funciones.h"

using namespace std;

int main(){
	/*Hacer un programa en c++ con dos archivos:
	a) un archivo .cpp donde se encuentre la funcion main
	b) un archivo .h donde pondremos nuestras demas funciones.
	c) el archivo .h debe ser incluido en el archivo .cpp
	d) hacer las siguientes funciones: leer intrucciones en el archivo .h*/
	cout << elevar(2,4) << endl;
	cout << elevar(5,3) << endl;
	cout << elevar(9,700) << endl;
	cout << hipotenusa(3,4) << endl;
	cout << esMultiplo(5,2) << endl; //0 es false
	cout << esMultiplo(6,2) << endl; //1 es true
	//las funciones void no retornan nada, por lo tanto estas
	//no se pueden usar en situaciones como cout por ejemplo
	//cout << imprimirRectangulo(4,8,'*') << endl;
	imprimirRectangulo(4,8,'*');
	cout << areaCirculo(3.53543f) << endl;
	cout << areaCirculo(7.543535353) << endl;
	
	cout << minimo(14,5,6) << endl;
	cout << minimo(3.5f,58.0f,1.3f) << endl;
	cout << minimo(14.54353,5.543534,6.5435345) << endl;
	
	return 777;
}
