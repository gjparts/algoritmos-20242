//funciones del archivo 29_apuntadores4.cpp
#include<iostream>
#include<algorithm>
using namespace std;

/*hacer una funcion void que reciba un string apuntado
y lo altere pasando el string a mayusculas*/
void mayusculas(string *cadena){
	//hacer una copia local de la variable apuntada
	string copia = *cadena;
	//trabajar sobre la copia:
	transform(copia.begin(), copia.end(), copia.begin(), ::toupper);
	//sobreescribir a la variable apuntada con lo realizado en la copia
	*cadena = copia;
}

/*hacer una funcion void que reciba un string apuntado
y lo altere reemplazando los espacios en blanco por guiones bajos*/
void reemplazoEspaciosGuiones(string *cadena){
	//hacer copia
	string copia = *cadena;
	//trabajar sobre la copia
	for( int i = 0; i < copia.length(); i++ )
		if( copia[i] == ' ' ) copia[i] = '_';
	//sobreescribir a la variable apuntada con lo realizado en la copia
	*cadena = copia;
}



