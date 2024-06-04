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
	
	
	return 543;
}

