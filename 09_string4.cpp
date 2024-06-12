#include<iostream>
using namespace std;

int main(){
	//comparar dos string (se considera mayusculas y minusculas)
	string a,b;
	cout << "Digitar a: ";
	getline(cin,a);
	cout << "Digitar b: ";
	getline(cin,b);
	
	if( a == b )
		cout << "a b son iguales.";
	else
		cout << "a b NO son iguales";
	
	cout << endl;
	
	return 888;
}
