#include<iostream>
using namespace std;
int main(){
	/*Hacer un programa que calcule e imprima el promedio de 3 numeros double.
	Validar que los valores digitados sean numeros si es asi entonces
	imprimir el promedio, de lo contrario imprimir un mensaje
	indicando que alguno de los valores proporcionados no es correcto.*/
	string a,b,c;
	cout << "Digitar primer numero: ";
	getline(cin,a);
	cout << "Digitar segundo numero: ";
	getline(cin,b);
	cout << "Digitar tercer numero: ";
	getline(cin,c);
	
	try{
		double promedio = ( stod(a)+stod(b)+stod(c) ) / 3.0;
		cout << "El promedio es: " << promedio << endl;
	}catch(exception ex){
		cout << "Alguno de los numeros digitados no es correcto." << endl;
	}
	
	
	
	return 456;
}
