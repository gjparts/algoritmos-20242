#include<iostream>
#include<fstream>
using namespace std;
int main(){
	//Lectura de archivo de texto
	fstream archivo; //estructura para leer archivos
	
	//ejecutar la apertura del archivo
	//abrir el archivo para solamente leerlo ios::in
	archivo.open("ejemplo_24mil.txt", ios::in );
	
	//verificar si el archivo se pudo abrir
	if( archivo.is_open() ){
		cout << "Archivo abierto" << endl;
	}
	else
		cout << "Archivo no se puede leer o no existe." << endl;
	
	return 678;
}
