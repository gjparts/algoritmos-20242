#include<iostream>
#include "27_funciones.h"
using namespace std;

int main(){
	double n = 8;
	cout << "n antes de elevar: " << n << endl;
	elevar(&n,3);
	cout << "n despues de elevar: " << n << endl;
	
	float z = 5;
	cout << "z antes de mitad: " << z << endl;
	mitad(&z);
	cout << "z despues de mitad: " << z << endl;
	
	return 123;
}
