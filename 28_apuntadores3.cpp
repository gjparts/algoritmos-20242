#include<iostream>
#include "28_funciones.h"
using namespace std;

int main(){
	//no olvide que un arreglo es una
	//coleccion de apuntadores de memoria
	int numeros[] = {5, 8, 11, 23, 45, 2};
	cout << "direccion de memoria de numeros: " << numeros << endl;
	//cuando se imprime una variable que contiene a un arreglo
	//se devuelve la direccion de memoria del elemento CERO
	//de dicho arreglo
	cout << "direccion de memoria del elemento 0 en numeros: " << &numeros[0] << endl;
	//direcciones de memoria de todos los elementos en numeros
	cout << "***********************************" << endl;
	for( int i = 0; i < end(numeros)-begin(numeros); i++ )
	{
		cout << "direccion de memoria del elemento " << i << " en numeros: " << &numeros[i] << endl;
	}
	cout << "end para el arreglo numeros: " << end(numeros) << endl;
	
	int arreglo[6];
	llenarArregloAzar(arreglo,end(arreglo)-begin(arreglo),5,65);
	//note que arreglo no lo enviamos con &, porque un arreglo envia una direccion
	//de memoria sin necesidad de usar &
	imprimirArreglo(arreglo,end(arreglo)-begin(arreglo));
	
	
	return 111;
}
