#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	//transformar un string todo a mayusc., todo a minusc.
	//transformar un string a mayusculas, alterando el string original
	string str1;
	cout << "digitar un string: ";
	getline(cin,str1);
	//aplicar la transformacion hacia str1
	transform( str1.begin(), str1.end(), str1.begin(), ::toupper );
	cout << "el valor de str1 es: " << str1 << endl;
	
	//si desea conservar el string original entonces haga una copia
	string str2, copia;
	cout << "digitar str2: ";
	getline(cin,str2);
	//hacer la copia:
	copia = str2;
	//aplicar la transformacion hacia la copia
	transform( copia.begin(), copia.end(), copia.begin(), ::toupper );
	cout << "el valor de str2 es: " << str2 << endl;
	cout << "el valor de copia es: " << copia << endl;
	
	//transformar a minusculas, sin afectar la variable original
	string str3, copia2;
	cout << "digitar str3: ";
	getline(cin,str3);
	//hacer la copia
	copia2 = str3;
	//transformar la copia
	transform( copia2.begin(), copia2.end(), copia2.begin(), ::tolower );
	cout << "el valor de str3 es: " << str3 << endl;
	cout << "el valor de copia2 es: " << copia2 << endl;
	
	return 654;
}
