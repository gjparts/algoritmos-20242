#include<iostream>
using namespace std;
int main(){
	//Arreglo bidimensional: es un arreglo principal que
	//apunta a varios arreglos secundarios
	//formas de declararlos:
	//forma 1: sin valores iniciales
	int arreglo1[4][3];
	//lo puede llenar manualmente
	arreglo1[0][0] = 7;
	arreglo1[1][1] = 111;
	arreglo1[1][2] = 45;
	arreglo1[2][1] = 13;
	//para recorrer un arreglo bidimensional usando end y begin
	//recorrer el arreglo principal
	for( int i = 0; i < end(arreglo1)-begin(arreglo1); i++ ){
		//recorrer cada arreglo secundario
		for( int j = 0; j < end(arreglo1[i])-begin(arreglo1[i]); j++ ){
			cout << arreglo1[i][j] << "\t"; //imprimir cada valor del arr. secundario
		}
		cout << endl; //pasar a la siguiente linea
	}
	
	//forma 2: prellenado con valores iniciales
	//es obligatorio definir el tamaño del arreglo secundario
	int arreglo2[][5] = {
		{1, 7, 9, 200, 5},
		{5, 8, 111, -2, 0},
		{87, 5, 99, 5, -12},
		{500, 12, 345, 23, 8}
	};
	cout << "***********************************************" << endl;
	for( int i = 0; i < end(arreglo2)-begin(arreglo2); i++ ){
		for( int j = 0; j < end(arreglo2[i])-begin(arreglo2[i]); j++ ){
			cout << arreglo2[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 543;
}

