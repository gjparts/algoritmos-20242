#include<iostream>
using namespace std;
int main(){
	//arreglo de string
	string colores[] = {"rojo","amarillo","azul","verde","naranja"};
	//imprimir uno de los items
	cout << colores[4] << endl;
	//imprimir el caracter 1 de elemento 2
	cout << colores[2][1] << endl;
	//obtener el tamaño del arreglo principal
	cout << "numero de elementos en colores: " << end(colores)-begin(colores) << endl;
	//alterar uno de los string del arreglo
	colores[2] = colores[2]+'.';
	cout << colores[2] << endl;	
	//alterar otro
	colores[3] = colores[3] + " olivo";
	cout << colores[3] << endl;	
	//cuanto mire el elemento 4
	cout << colores[4].length() << endl;
	//imprimir todos los elementos del arreglo
	cout << "*************************************" << endl;
	for( int i = 0; i < end(colores)-begin(colores); i++ ){
		cout << colores[i] << endl;
	}
	/*Ejercicio: hacer un arreglo de string que tenga las siguientes frutas:
	pera, manzana, naranja, uva, fresa, sandia, mandarina
	luego hacer una rutina que altere cada fruta agregando un
	ASTERISCO entre cada caracter de cada una de las frutas,
	por ultimo imprimir dicho arreglo */
	string frutas[] = {"pera", "manzana", "naranja", "uva",
						"fresa", "sandia", "mandarina"};
	
	//recorrer fruta por fruta
	for( int i = 0; i < end(frutas)-begin(frutas); i++ ){
		//extraer la fruta actual en un string
		string tmp = frutas[i];
		//vaciar la fruta actual en el arreglo
		frutas[i] = "";
		//recorrer la fruta actual caracter por caracter
		//copiando cada caracter hacia el elemento i del arreglo junto a un asterisco
		for( int j = 0; j < tmp.length(); j++ ){
			frutas[i] = frutas[i]+tmp[j]+'*';
		}
		//imprimir la nueva fruta
		cout << frutas[i] << endl;
	}
	
	return 567;
}
