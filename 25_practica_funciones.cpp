#include<iostream>
#include<ctime>
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
	
	//IMPORTANTE: inicializar el generador de numeros aleatorios
	//este no puede ir dentro de la funcion azar porque generaria
	//el mismo numero en cada llamado
	srand(time(NULL));
	
	for( int i = 1; i <= 5; i++ )
		cout << azar(7,100) << endl;
		
	cout << todoMayusculas("pera roja") << endl;
	cout << todoMayusculas("pEra roja") << endl;
	cout << todoMayusculas("PerA ROJA") << endl;
	cout << todoMayusculas("PERA ROJA") << endl;
	
	cout << buscar('H',"UNAH") << endl;
	cout << buscar('h',"UNAH") << endl;
	cout << buscar('n',"tamarindo") << endl;
	
	cout << "****************************" << endl;
	string colores[] = {"rojo","verde","azul","amarillo","blanco","negro"};
	int s = end(colores)-begin(colores);
	cout << buscarDentroDeArreglo("blanco",colores,s) << endl;
	cout << buscarDentroDeArreglo("rojo",colores,s) << endl;
	cout << buscarDentroDeArreglo("negro",colores,s) << endl;
	cout << buscarDentroDeArreglo("lila",colores,s) << endl;
	
	return 777;
}
