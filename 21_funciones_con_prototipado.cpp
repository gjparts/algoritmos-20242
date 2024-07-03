/*funciones en C++
formas de declararlas:
1) por prototipado
2) sin prototipado (implementacion directa), puede ser:
	a) mediante un archivo h (header)
	b) dentro del propio archivo cpp*/
//EJEMPLOS USANDO PROTOTIPADO
//consiste en definir las firmas de las funciones
//antes de comenzar a trabajar en el main, solo se coloca
//las firmas no se coloca el cuerpo de la funcion.
//el cuerpo de la funcion se implementa despues de main.
//-> su objetivo era que el programador que lea el codigo sepa que funciones
//   hay disponibles sin tener que ir a recorrer el codigo para saberlo.
#include<iostream>
using namespace std;

//prototipos de funcion
int sumar(int a, int b);
int sumar(int a, int b, int c);
double sumar(double a, double b);
/* Calculo del ISR
Hacer una funcion que retorne o devuelva el calcula el ISR para una persona natural en Honduras
se le enviara como parametro las ganancias del anio./
el calculo es de acuerdo a la siguiente tasa progresiva:
Tasa 	Desde 			Hasta
Exentos L 0.01 			L 209,369.62   aqui hay 209,369.62
15% 	L 209,369.63 	L 319,251.54   aqui hay 109,881.91
20% 	L 319,251.55 	L 742,445.49   aqui hay 423,193.94
25% 	L 742,445.50 en adelante
la funcion debe utilizar tipo de dato double.*/


/*conceptos:
firma de funcion (signature): esta determinada por el tipo de dato de retorno, nombre
							  y tipos de dato de los parametros de una funcion
sobrecarga de funciones: dos o mas funciones pueden llamarse igual siempre y cuando
                         tengan diferente firma.*/

int main(){
	cout << sumar(5,6) << endl;
	cout << sumar(4,5,7) << endl;
	cout << sumar(4.2,3.7) << endl;
	int x = sumar(2,2);
	int y = sumar(3,3);
	cout << x+y << endl;
	
	return 777;
}

//implementacion de los prototipos
int sumar(int a, int b){
	return a+b;
}
int sumar(int a, int b, int c){
	return a+b+c;
}
double sumar(double a, double b){
	return a+b;
}



