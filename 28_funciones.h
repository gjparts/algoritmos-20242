//funciones para 28_apuntadores3.cpp
/*Uso de apuntadores en arreglos
1) No es posible calcular el tamaño de un arreglo
   desde un ambito externo mediante end-begin
2) cada elemento del arreglo es un apuntador y por
   lo tanto es necesario colocar el simbolo de
   asterisco cuando hacemos referencia a un arreglo
   desde un ambito externo.
3) cuando colocamos un arreglo apuntado como parametro
   de una funcion no se coloca los brackets []
4) cuando un parametro de la funcion es un arreglo
   apuntado; entonces desde el ambito origen no se
   envia con el simbolo de & porque el arreglo
   por si solo ya es un apuntador de memoria.*/

#include<iostream>
#include<ctime>
#include<cmath>
#include<stdexcept>
using namespace std;
/*hacer una funcion void que llene todos los elementos de un
arreglo apuntado de numeros enteros con numeros al azar
entre un valor minimo y un valor maximo todos proporcionados
como parametros de la funcion.*/
void llenarArregloAzar(int *arreglo, int tamanoArreglo, int minimo, int maximo){
	if( minimo > maximo )
		throw invalid_argument("minimo no debe superar a maximo");
	
	srand(time(NULL));
	for( int i = 0; i < tamanoArreglo; i++ )
		arreglo[i] = rand()%(maximo-minimo+1)+minimo;
	//observe que a la izquierda de arreglo[i] no puse el simbolo *
	//ya que los arreglos son colecciones de apuntadores
}
//funcion para imprimir arreglos
//(no ocupa apuntadores porque no voy a cambiar nada)
// observe que el parametro para el arreglo lleva los brackets porque
// no es un arreglo apuntado.
void imprimirArreglo(int arreglo[], int tamanoArreglo){
	for( int i = 0; i < tamanoArreglo; i++ )
		cout << i << "\t" << arreglo[i] << endl;
}
/*hacer una funcion void que reciba un arreglo de numeros double como apuntador
y que divida todos sus elementos entre 2 alterando al arreglo original*/







