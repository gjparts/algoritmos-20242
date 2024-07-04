//EJEMPLOS SIN USAR PROTOTIPADO USANDO UN ARCHIVO EXTERNO
//consiste en definir las funciones con su firma y cuerpo dentro de un
//archivo externo, normalmente nombrado con extension .h (header)
//la ventaja de esta forma es que se puede reutilizar el archivo h
//a lo que se le llama programacion modular.
#include<iostream>
#include "mis_funciones.h"
using namespace std;

int main(){
	cout << sumar(5,6) << endl;
	cout << sumar(4,5,7) << endl;
	cout << sumar(4.2,3.7) << endl;
	int x = sumar(2,2);
	int y = sumar(3,3);
	cout << x+y << endl;
	cout << calculoISRnatural(800000) << endl;
	cout << calculoISRnatural(400000) << endl;
	cout << calculoISRnatural(300000) << endl;
	
	return 777;
}
