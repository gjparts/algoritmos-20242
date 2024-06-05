#include<iostream>
#include<ctime>
using namespace std;

int main(){
	/*Hacer un arreglo bidimensional de 7x6 de numeros enteros
	llenar cada elemento del arreglo con numero al azar entre
	-5 y 30. No importa que se repitan numeros.
	Imprimir dicho arreglo en formato tabular.*/
	
	int arreglo[7][6];
	srand(time(NULL));
	
	//llenar e imprimir el arreglo
	for( int i = 0; i < end(arreglo)-begin(arreglo); i++ ){
		for( int j = 0; j < end(arreglo[i])-begin(arreglo[i]); j++ ){
			arreglo[i][j] = rand()%(30-(-5)+1)+(-5);
			cout << arreglo[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 123;
}
