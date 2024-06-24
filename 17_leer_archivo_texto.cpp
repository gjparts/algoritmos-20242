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
		//recorrer el archivo linea por linea hasta llegar al EOF (end of file)
		//mientras archivo no llegue a EOF:
		//cada linea leida del archivo la debemos volcar en una variable string
		string linea;
		int n = 0; //contador
		while( !archivo.eof() ){
			getline(archivo,linea); //leer una linea del archivo y ponerla en la variable linea
			n++; //leimos una linea, sumamos 1 al contador de lineas
			//el getline anterior es necesario para poder recorrer el archivo y llegar al eof
			cout << linea << endl; //imprimir la linea recien leida (opcional)
		}
		cout << "Cantidad de lineas: " << n << endl;
		//una vez utilizado el archivo, una buena practica es cerrarlo
		archivo.close();
	}
	else
		cout << "Archivo no se puede leer o no existe." << endl;
	
	return 678;
}
