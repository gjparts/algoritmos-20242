#include<iostream>
using namespace std;
int main(){
	/*Arreglo: es una estructura de datos estatica,
	secuencial y homogenea.*/
	//por ejemplo: en C++ no se puede tener un arreglo
	//que ocupe 5 millones de posiciones secuenciales
	//int arreglo[5000000];
	
	//declarar un arreglo sin inicializar sus valores:
	int arreglo1[5];
	//que valores tiene arreglo1 en este momento?
	//los arreglos se numeran de 0 a N-1 (Zero indexing)
	for( int i = 0; i < 5; i++ ){
		cout << arreglo1[i] << endl;
	}
	/*en C++ cuando no inicializa los valores de un arreglo probablemente
	estos tomen datos que ya estaban guardados en las posiciones de memoria
	usadas por el arreglo, a estos datos se les llama datos basura.
	para evitarlo se recomienda inicializar los valores del arreglo,
	por ejemplo usando cero.*/
	//inicializar todos los valores de arreglo1 con cero:
	for( int i = 0; i < 5; i++ ){
		arreglo1[i] = 0;
	}
	cout << "**********************************" << endl;
	//imprimir los elementos
	for( int i = 0; i < 5; i++ ){
		cout << arreglo1[i] << endl;
	}
	
	//tambien se puede asignar los valores uno por uno
	cout << "**********************************" << endl;
	double arreglo2[6];
	arreglo2[0] = 2.34;
	arreglo2[1] = 5.6;
	arreglo2[2] = 5.65456456456;
	arreglo2[3] = -7.87676;
	arreglo2[4] = 9;
	arreglo2[5] = 3.141624645534564;
	//imprimir los elementos
	for( int i = 0; i < 6; i++ ){
		cout << arreglo2[i] << endl;
	}
	
	//tambien se puede declarar el arreglo con valores prellenados:
	float arreglo3[] = { 5, 6.8, 9.2, 3.5, 111, -8, 40, 1001.3 };
	cout << "**********************************" << endl;
	//imprimir los elementos
	for( int i = 0; i < 8; i++ ){
		cout << arreglo3[i] << endl;
	}
	
	/*saber el tamaño de un arreglo (NOTA: se necesita configurar
	la version de la libreria standard en 11 o mas.
	-std=c++11 en la opcion del compilador.)*/
	cout << "Tamaño del arreglo3: " << end(arreglo3)-begin(arreglo3) << endl;
	cout << "Posicion inicial en memoria para arreglo3: " << begin(arreglo3) << endl;
	cout << "Posicion final en memoria para arreglo3: " << end(arreglo3) << endl;
	cout << "**********************************" << endl;
	//imprimir los elementos del arreglo3 usando end y begin
	for( int i = 0; i < end(arreglo3)-begin(arreglo3); i++ ){
		cout << arreglo3[i] << endl;
	}
	
	//imprimir las direcciones de memoria de los elementos de un arreglo
	for( int i = 0; i < end(arreglo3)-begin(arreglo3); i++ ){
		cout << &arreglo3[i] << endl;
	}
	
	cout << "**************************************" << endl;
	double arreglo4[] = {4.75675767, 5.654646, 3.1416, 2.2, 5, 9.923};
	//recuerde que los double miden 8 bytes por lo tanto los saltos entre las direcciones de memoria
	//de cada elemento seran de 8.
	//imprimir los valores y direcciones de los elementos del arreglo4 usando end y begin
	for( int i = 0; i < end(arreglo4)-begin(arreglo4); i++ ){
		cout << &arreglo4[i] << " = " << arreglo4[i] << endl;
	}
	cout << "begin del arreglo4: " << begin(arreglo4) << endl;
	//si el arreglo es de double, entonces end es la direccion de memoria del
	//ultimo elemento mas 8 bytes
	cout << "end del arreglo4: " << end(arreglo4) << endl;
	
	cout << "**************************************" << endl;
	int arreglo5[] = {3,8,7,111,678754,6,-9876};
	//las variables int miden 4 bytes, los saltos seran de 4 entre la direccion de cada elemento
	//imprimir los valores y direcciones de los elementos del arreglo5 usando end y begin
	for( int i = 0; i < end(arreglo5)-begin(arreglo5); i++ ){
		cout << &arreglo5[i] << " = " << arreglo5[i] << endl;
	}
	cout << "begin del arreglo5: " << begin(arreglo5) << endl;
	cout << "end del arreglo5: " << end(arreglo5) << endl;
	
	return 543;
}
