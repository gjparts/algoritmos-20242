#include<iostream>
#include<ctime>
using namespace std;

int main(){
	/*generar un numero al azar entre 3 y 17*/
	
	//inicializar el generador de numeros aleatorios
	//el valor dentro de srand es la semilla (seed) para generar
	//numeros aleatorios
	srand(time(NULL));
	
	int n;
	//numero al azar: rand()%(max-min+1)+min;
	n = rand()%(17-3+1)+3;
	cout << "numero generado: " << n << endl; 
	
	//generar 8 numeros al azar entre -15 a 30
	for( int i = 1; i <= 8; i++ ){
		cout << rand()%(30-(-15)+1)+(-15) << endl;
	}
	
	return 567;
}
