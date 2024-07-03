//EJEMPLOS SIN USAR PROTOTIPADO
//consiste en definir las funciones con su firma y cuerpo antes de main
#include<iostream>
using namespace std;

int sumar(int a, int b){
	return a+b;
}
int sumar(int a, int b, int c){
	return a+b+c;
}
double sumar(double a, double b){
	return a+b;
}
double calculoISRnatural(double ganancias){
	{
		/* Calculo del ISR
	Hacer una funcion que retorne o devuelva el calcula el ISR para una persona
	natural en Honduras se le enviara como parametro las ganancias del anio./
	el calculo es de acuerdo a la siguiente tasa progresiva:
	Tasa 	Desde 			Hasta
	Exentos L 0.01 			L 209,369.62   aqui hay 209,369.62
	15% 	L 209,369.63 	L 319,251.54   aqui hay 109,881.91
	20% 	L 319,251.55 	L 742,445.49   aqui hay 423,193.94
	25% 	L 742,445.50 en adelante
	la funcion debe utilizar tipo de dato double.*/
	}
	if( ganancias <= 209369.62 ) return 0.00;
	if( ganancias >= 209369.63 && ganancias <= 319251.54 )
		return (ganancias-209369.62)*0.15;
	if( ganancias >= 319251.55 && ganancias <= 742445.49 )
		return 109881.91*0.15+(ganancias-209369.62-109881.91)*0.2;
	if( ganancias >= 742445.50 )
		return 109881.91*0.15+423193.94*0.2+(ganancias-209369.62-109881.91-423193.94)*0.25;
	
	return 0.00;
}

int main(){
	cout << sumar(5,6) << endl;
	cout << sumar(4,5,7) << endl;
	cout << sumar(4.2,3.7) << endl;
	int x = sumar(2,2);
	int y = sumar(3,3);
	cout << x+y << endl;
	cout << calculoISRnatural(800000) << endl;
	cout << calculoISRnatural(400000) << endl;
	cout << calculoISRnatural(300000) << endl;
	
	return 777;
}
