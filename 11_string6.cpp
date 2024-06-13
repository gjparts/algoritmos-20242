#include<iostream>
using namespace std;

int main(){
	/*BUG que ocurre cuando venimos de leer cualquier numero y posteriomente
	queremos leer un String en la consola del sistema*/
	int x;
	string str;
	
	cout << "Digite un numero entero para x: ";
	cin >> x;
	
	cout << "Digite un string: ";
	//si viene de leer numeros con cin entonces
	//y va a leer un string usando cin por medio de getline
	//entonces debe vaciar el buffer de entrada
	cin.ignore();
	getline(cin,str);
	
	cout << "El valor de x es : " << x << endl;
	cout << "El valor de str es : " << str << endl;
	
	return 0;
}
