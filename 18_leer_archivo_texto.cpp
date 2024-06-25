#include<iostream>
#include<fstream>
using namespace std;
int main(){
	/*hacer un programa que abra el archivo ejemplo_24mil.txt, lo recorra
	y muestre cuantas lineas tiene, cual es la suma de todos sus numeros,
	cuantos numeros son pares, cuantos numeros son impares, y
	el promedio de todos sus numeros.
	Importante: No imprimir cada linea*/
	fstream archivo;
	archivo.open("ejemplo_24mil.txt", ios::in);
	
	if( archivo.is_open() ){
		string linea;
		int lineas = 0; //contador
		int suma = 0; //acumulador
		int impares = 0, pares = 0; //contadores
		//recorrer el archivo
		while( !archivo.eof() ){
			getline(archivo,linea); //leer linea por linea
			lineas++;
			//sumar cada numero leido (convertir el string a int)
			try{
				suma += stoi(linea);
				if( stoi(linea)%2 == 0 )
					pares++;
				else
					impares++;
			}catch(exception ex){
				//en este caso no es necesario informar que la conversion ha fallado
			}
			
		}
		archivo.close();
		cout << "Lineas en el archivo: " << lineas << endl;
		cout << "Suma: " << suma << endl;
		cout << "Pares: " << pares << endl;
		cout << "Impares: " << impares << endl;
		cout << "Promedio: " << suma/(pares+impares) << endl;
	}	
	else
		cout << "Archivo no existe o no se puede leer." << endl;
	
	return 345;
}







