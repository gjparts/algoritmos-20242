#include<iostream>
#include<fstream>
using namespace std;
int main(){
	/*Hacer un programa que muestre un menu:
	DIARIO
	1) Agregar entrada al diario
	2) Mostrar todo el diario
	3) Borrar todo el diario
	4) Salir
	Digitar la opcion deseada: 
	
	* el menu se volverá a mostrar hasta que el usuario
	  seleccione la opcion de salir
	* en la opcion 1: preguntar al usuario el texto de la entrada se escribirá al final del diario
	* en la opcion 2 imprimir el archivo de diario en pantalla hacer una pausa cada 10 lineas
	* en la opcion 3 se vaciara el archivo del diario*/
	
	int opcion;
	fstream archivo;
	do{
		system("cls"); //limpiar la pantalla
		cout << "DIARIO" << endl;
		cout << "1) Agregar entrada al diario" << endl;
		cout << "2) Mostrar todo el diario" << endl;
		cout << "3) Borrar todo el diario" << endl;
		cout << "4) Salir" << endl;
		cout << "Digitar la opcion deseada: ";
		cin >> opcion;
		
		if( opcion == 1 ){
			string str;
			cout << "Agregar entrada al diario ***********************" << endl;
			cout << "Digitar el texto a registrar en el diario: ";
			//venimos de leer un numero por medio de cin, toca vaciar el buffer de entrada
			cin.ignore();
			getline(cin,str);
			//escribir la entrada en el diario sin perder el contenido previo
			archivo.open( "diario.txt", ios::app );
			if( archivo.is_open() ){
				archivo << str << endl; //escribir la entrada en el archivo
				archivo.close(); //cerrar el archivo
			}
			else
				cout << "No se puede escribir el archivo" << endl;
		}
		if( opcion == 2 ){
			cout << "Diario *********************************" << endl;
			archivo.open("diario.txt", ios::in);
			if( archivo.is_open() ){
				//recorrer el archivo
				string linea;
				int n = 0; //variable para llevar la cuenta de cuantas lineas hemos leido
				while( !archivo.eof() ){
					getline(archivo,linea);
					cout << linea << endl; //imprimir cada linea
					n++;
					//se ha leido 10 lineas, hace una pausa
					if( n%10 == 0 ){
						system("pause");
					}
				}
				archivo.close(); //cerrar el archivo
			}
			else
				cout << "No se puede leer el archivo, quiza no existe aun." << endl;
		}
		if( opcion == 3 ){
			cout << "Borrar todo el diario ******************************" << endl;
			//en mi caso le voy a preguntar al usuario si desea continuar
			char decision;
			cout << "Desea vaciar el archivo de diario? (conteste S para Si o N para No): ";
			cin >> decision;
			if( decision == 'S' || decision == 's' ){
				archivo.open("diario.txt", ios::out); //abrir el archivo para sobreescritura
				if( archivo.is_open() ){
					archivo.close(); //cerrar el archivo
					cout << "IMPORTANTE: Se ha borrado todo el diario." << endl;
				}
				else
					cout << "No se puede escribir el archivo." << endl;
			}
		}
		
		system("pause"); //hacer una pausa antes de hacer otra iteracion
	}while(opcion != 4);
	
	//cout << "Hola" << endl;
	//pausar la ejecucion del programa
	//system("pause");
	//limpiar la pantalla
	//system("cls");
	//reinicia el equipo en 1 minuto
	//system("shutdown /r");
	//inicia chrome 10 veces
	//for(int i = 1; i <= 10; i++)
	//	system("start  chrome");
	//cout << "Adios" << endl;
	
	return 111;
}
