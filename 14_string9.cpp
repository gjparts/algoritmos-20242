#include<iostream>
using namespace std;
int main(){
	/*Conversiones:
	stoi	string to int
	stod	string to double
	stof	string to float
	to_string	number to string*/
	//de string a entero
	string str = "34abc5.82asffdr";
	int entero = stoi(str);
	//note que la conversion trunca la parte entera, no sucede redondeo
	//observe que se trunca la parte entera hasta donde encuentra el primer char no valido
	//string no puede iniciar con caracteres distintos a numero
	cout << "str: " << str << endl;
	cout << "entero: " << entero << endl;
	
	//de string a float
	string str2 = "3.1416xyz54545";
	float f1 = stof(str2);
	//note que se trunca hasta donde encuentra char que no sean numeros
	//string no puede iniciar con caracteres distintos a numero
	cout << "str2: " << str2 << endl;
	cout << "f1: " << f1 << endl;
	
	//de string a double
	string str3 = "56.3424324323424242456575767676abc4567";
	double d1 = stod(str3);
	//note que se trunca hasta donde encuentra char que no sean numeros
	//string no puede iniciar con caracteres distintos a numero
	cout << "str3: " << str3 << endl;
	cout << "d1: " << d1 << endl;
	
	//de numero a string
	int entero2 = 47;
	float f2 = 5.675674;
	double d2 = 7.645645646456546;
	string str4, str5, str6;
	str4 = to_string(entero2);
	str5 = to_string(f2);
	str6 = to_string(d2);
	//note que la precision de los numeros que pasan hacia el string dependera
	//de como tenga definida la presicion de su programa en la config. del compilador
	//note tambien que al pasar de float, double hacia string se redondea de acuerdo a la presicion
	//establecida en el compilador.
	cout << "entero2: " << entero2 << ", str4: " << str4 << endl;
	cout << "f2: " << f2 << ", str5: " << str5 << endl;
	cout << "d2: " << d2 << ", str6: " << str6 << endl;
	
	return 567;
}
