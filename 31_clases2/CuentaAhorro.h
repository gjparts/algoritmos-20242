#ifndef CUENTAAHORRO_H
#define CUENTAAHORRO_H

#include<iostream>
#include<stdexcept>
using namespace std;

class CuentaAhorro{
	private:
		float saldo;
	public:
		string cliente;
		//constructor
		CuentaAhorro(string cliente){
			this->cliente = cliente;
			this->saldo = 0.00; //saldo siempre inicia en CERO
		}
		//metodos
		float getSaldo(){
			return this->saldo;
		}
		void depositar(float monto){
			if( monto < 0 )
				throw invalid_argument("CuentaAhorro: monto a depositar no puede ser negativo.");
			else
				this->saldo += monto; //se acepta
		}
		void retirar(float monto){
			if( monto < 0 )
				throw invalid_argument("CuentaAhorro: monto a retirar no puede ser negativo.");
			else{
				if( monto > this->saldo )
					throw invalid_argument("CuentaAhorro: monto a retirar no puede superar al saldo actual");
				else
					this->saldo -= monto; //se acepta
			}
		}
};

#endif









