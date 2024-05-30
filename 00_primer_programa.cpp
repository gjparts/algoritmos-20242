#include<iostream>
#include<iomanip> //libreria para poder usar setprecision, setw, left, right
using namespace std;

int main(){
	//cout = console out
	cout << "Hola" << endl << "UNAH" << endl;
	//cin = console in
	int a;
	cout << "Digitar un entero: ";
	cin >> a;
	cout << "valor de a: " << a << endl;
	
	double x,y,z;
	cout << "Digitar tres numeros decimales, separelos con espacio: ";
	cin >> x >> y >> z;
	cout << "valor de x: " << x << endl;
	cout << "valor de y: " << y << endl;
	cout << "valor de z: " << z << endl;
	
	float q,w = 6.784234324234234324234234454465656;
	q = 2.345;
	cout << "valor de q: " << q << endl;
	cout << "valor de w: " << setprecision(10) << w << endl;
	
	cout << setw(20) << left << "nombre";
	cout << setw(6) << right << "edad";
	cout << setw(25) << left << "carrera";
	cout << setw(15) << left << "campus" << endl;
	
	cout << setw(20) << left << "Gerardo Portillo";
	cout << setw(6) << right << "42";
	cout << setw(25) << left << "Ing. En Sistemas";
	cout << setw(15) << left << "UNAH-VS" << endl;
	
	return 7777;
}
