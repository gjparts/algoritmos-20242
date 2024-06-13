#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//buscar un string dentro de otro string
	string str = "El tiempo transcurre inexorable ante atardeceres que parecen no tener fin.";
	cout << str << endl;
	
	string buscar;
	cout << "Digite el texto que desea buscar: ";
	getline(cin,buscar);
	
	//el programa nos va a decir en que posicion de str encontro lo que deseamos buscar
	int posicion = str.find(buscar,0);
	/*donde:
	str 	es el string dentro del cual haremos la busqueda
	buscar 	es el string que deseamos buscar dentro de str
	0		indica la posicion desde donde vamos a comenzar a hacer la busqueda
			CERO indica que comenzaremos a buscar desde el primer caracter de str.
	IMPORTANTE: Si find retorna -1 quiere decir que no se encontro la cadena buscada.
	IMPORTANTE: find es case sensitive, o sea NO ignora mayusculas y minusculas
	*/
	cout << "Buscar SIN ignorar mayusc./minusc." << endl;
	if( posicion == -1 )
		cout << "no se encontro" << endl;
	else
		cout << "se encontro en la posicion " << posicion << endl;
		
	/*Hacer la rutina que dentro de str busque al string buscar; pero ignorando mayusculas/minusculas;
	imprimir la posicion donde se encontró y no debe alterar los string originales.*/
	//tienen 5 minutos y enviar al whastapp captura
	string copiaStr = str, copiaBuscar = buscar;
	transform(copiaStr.begin(), copiaStr.end(), copiaStr.begin(), ::tolower );
	transform(copiaBuscar.begin(), copiaBuscar.end(), copiaBuscar.begin(), ::tolower );
	
	posicion = copiaStr.find(copiaBuscar,0);
	
	cout << "******************************" << endl;
	cout << "Buscar ignorando mayusc./minusc." << endl;
	if( posicion == -1 )
		cout << "no se encontro" << endl;
	else
		cout << "se encontro en la posicion " << posicion << endl;
	
	return 123;
}
