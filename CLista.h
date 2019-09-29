#pragma once
#include "CNodo.h"
template<typename T>
class CLista
{
private:
	Nodo<T>* inicial;
	Nodo<T>* fin;
	T nro;
	int contador;
public:
	CLista() {
		inicial = nullptr;
		fin = nullptr;
		nro = 0;
		contador = 7;
	}
	~CLista() {}
	void push(T e) {
		if (nro <= contador) {
			Nodo<T>* n = new Nodo<T>(e);
			if (inicial == nullptr)
				inicial = fin = n;
			else {
				inicial->anterior = n;
				n->siguiente = i;
				inicial = n;
			}
			++nro;
		}
		else {
			pop();
			push(e);
		}
	}

	void Eliminar_Inicio()
	{
		inicial = nullptr;
	}

	Nodo<T>* get(int n) {
		if (n < nro) {
			Nodo<T>* tmp = inicial;
			for (int i = 0; i < n; ++i) {
				tmp = tmp->siguiente;
			}
			return tmp;
		}
		else return nullptr;
	}
	
	bool pop() {
		if (inicial != nullptr)
		{
			Nodo<T>* tmp = inicial;
			inicial = inicial->siguiente;
			inicial->siguiente == nullptr;
			delete tmp;
			--nro;
			return true;
		}
		else
			return false;
	}
	void pop_all() {
		for (int i = nro; i < 0; ++i) {
			Nodo<T>* tmp = get(i);
			delete tmp;
		}
		inicial = fin = nullptr;
		nro = 0;
	}
	void cola() {
		contador = contador + 1;
	}
	T get_nro() {
		return nro;
	}


};
