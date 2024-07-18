#include<iostream>
using namespace std;

void sumar(int x){
	x = x + 100;
}
//sumarUtilizandoApuntador recibira la direccion de memoria de un entero
//y lo depositara en una variable llamada x
void sumarUtilizandoApuntador(int *x){
	//cuando la variable apuntada es un tipo de dato primitivo
	//debe llevar el simbolo de apuntador en cada operacion
	//que se le haga
	*x = *x + 100;
}

int main(){
	int x = 5;
	sumar(x);
	cout << x << endl;
	/*note que x en main() no es la misma x en sumar()
	por lo tanto en main x sigue siendo 5
	si Usted quisiera alterar a x desde una funcion
	externa o sea desde un ambito externo necesitara
	del uso de apuntadores.*/
	/*APUNTADORES (punteros, pointers)
	permiten el paso de una variable de un ambito a otro, cualquier
	cambio que reciba en el otro ambito le afectara en el ambito original.
	-> a esto se le conoce como pase por referencia.*/
	//primer hay que comprender que una variable tiene dos componentes:
	//su valor:
	cout << "El value de x es " << x << endl;
	//su direccion de memoria (reference, referencia, offset)
	cout << "La referencia de x es " << &x << endl;
	
	//usemos la funcion que envia a x como apuntador (de x se envia la direccion de memoria)
	sumarUtilizandoApuntador(&x);
	cout << "El value de x es " << x << endl;
	
	return 777;
}
