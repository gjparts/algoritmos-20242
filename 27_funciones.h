//funciones del programa 27_apuntadotes2.cpp
#include<iostream>
#include<cmath>

/*Hacer un programa que mediante el uso de apuntadores
tenga una funcion void que eleve a determinada potencia
el valor de la variable que le enviemos.
La funcion debe afectar a la variable enviada en su
ambito de origen.
La funcion recibira dos numeros: exponente y base.
Se recomienda usar double. Pueden usar pow.*/
void elevar(double *base, double exponente){
	//el exponente no necesito alterarlo
	//asi que no lo recibo como apuntador, en cambio base si
	*base = pow(*base,exponente);
}

/*Hacer una funcion void que mediante
apuntadores divida a la mitad el numero
que le enviemos como parametro.
Dicha funcion debe soportar solo float.*/
void mitad(float *numero){
	*numero = *numero/2;
}


