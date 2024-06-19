#include<iostream>
using namespace std;
int main(){
	//Caza de errores
	/*Hacer un programa que pregunte al usuario
	un numero entero el cual guardaremos en una
	variable string.
	Luego convertir este string en entero, si la
	conversion falla entonces mostrar un mensaje
	indicando que lo que se ha digitado no es un
	numero.*/
	string str;
	cout << "Digite un numero entero: ";
	getline(cin,str);
	
	try{
		//codigo que potencialmente puede fallar
		int x = stoi(str); //convertir el string a entero
	}catch(exception ex){
		//codigo que se ejecuta si falla algo en el try
		cout << "No se ha digitado un numero." << endl;
	}
	
	cout << "Gracias, hasta pronto." << endl;
	
	return 123;
}
