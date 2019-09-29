#pragma once
template<typename T>
class Nodo
{
public:
	T elemento;
	Nodo<T>* siguiente;
	Nodo<T>* anterior;
	Nodo(T elemento, Nodo<T>* siguiente= nullptr, Nodo<T>* anterior = nullptr):elemento(elemento) {}
	~Nodo() {}
	
};
