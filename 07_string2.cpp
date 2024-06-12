#include<iostream>
using namespace std;

int main(){
	//para leer string que llevan espacios en blanco se recomienda
	//usar getline la cual permite leer texto desde un origen y depositarlo en un string
	//sin verse afectado por separadores como espacios en blanco.
	string str;
	cout << "digite una cadena de texto: ";
	getline(cin,str);
	cout << "string leido: " << str << endl;
	
	/*capturar un string y luego imprimirlo pero dejando tres asteriscos
	entre cada caracter sin afectar a la cadena capturada, ejemplo
	digite un string: Pera
	resultado: P***e***r***a***
	
	*/
	string s1;
	cout << "Digite un string: ";
	getline(cin,s1);
	for( int i = 0; i < s1.length(); i++ ){
		cout << s1[i] << "***";
	}
	cout << endl;
	
	/*Hacer un programa que lea un string s1, luego el programa va a tener
	otro string llamado s2, copiar el contenido de s1 dentro de s2; pero
	dejando tres asteriscos entre cada caracter, luego imprimir s1 y s2. ejemplo:
	digitar string: Pera
	s1: Pera
	s2: P***e***r***a***
	
	*/
	
	
	
	
	return 543;
}
