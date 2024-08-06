#include<iostream>
#include "CuentaAhorro.h"
#include<stdexcept>
using namespace std;

int main(){
	CuentaAhorro *cuenta1 = new CuentaAhorro("Gerardo");
	/*
	cout << "Saldo de cuenta1: " << cuenta1->getSaldo() << endl;
	cuenta1->depositar(6000);
	cuenta1->depositar(10.50);
	cout << "Saldo de cuenta1: " << cuenta1->getSaldo() << endl;
	//cuenta1->depositar(-100);
	cuenta1->retirar(4000);
	cout << "Saldo de cuenta1: " << cuenta1->getSaldo() << endl;
	cuenta1->retirar(3000);
	cout << "Saldo de cuenta1: " << cuenta1->getSaldo() << endl;
	*/
	int opcion;
	do{
		system("cls");
		cout << "Bienvenido " << cuenta1->cliente << endl;
		cout << "1) depositar" << endl;
		cout << "2) retirar" << endl;
		cout << "3) consultar saldo" << endl;
		cout << "4) salir" << endl;
		cout << "Seleccione una opcion: ";
		cin >> opcion;
		float monto;
		switch(opcion){
			case 1:
				cout << "Digite monto a depositar: ";
				cin >> monto;
				try{
					cuenta1->depositar(monto);
				}catch(exception &ex){
					cout << ex.what() << endl;
				}
			break;
			case 2:
				cout << "Digite monto a retirar: ";
				cin >> monto;
				try{
					cuenta1->retirar(monto);
				}catch(exception &ex){
					cout << ex.what() << endl;
				}
			break;
			case 3:
				cout << "***************************************" << endl;
				cout << "Monto disponible en la cuenta: " << cuenta1->getSaldo() << endl;
				cout << "***************************************" << endl;
			break;
			case 4:
				cout << "Adios" << endl;
			break;
			default:
				cout << "Opcion no valida" << endl;
		}
		system("pause");
	}while(opcion != 4);
	
	
	return 123;
}










