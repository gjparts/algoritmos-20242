#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include<iostream>
#include "Nodo.h"
using namespace std;

class ListaSimple{
	private:
		int length;
		Nodo *first;
		Nodo *last;
	public:
		//constructor
		ListaSimple(){
			this->length = 0;
			this->first = NULL;
			this->last = NULL;
		}
		//metodos
		int getLength(){
			return this->length;
		}
		Nodo *getFirst(){
			return this->first;
		}
		Nodo *getLast(){
			return this->last;
		}
		void push(int value){
			//1) crear Nodo tmp
			Nodo *tmp = new Nodo(value);
			//2) evaluar:
			if( this->length == 0 ){
				//a) si length es CERO
				//last y first apuntan a tmp
				this->first = tmp;
				this->last = tmp;
			}
			else{
				//b) si length > 0
				//el next de last apunta a tmp
				this->last->next = tmp;
				//last apuntara a tmp
				this->last = tmp;
			}
			//3) length suma 1
			this->length++;
		}
};

#endif





