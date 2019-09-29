#pragma once
#include <vector>
#include "CBloque.h"
using namespace std;
template<typename T>
class CArregloBloque {
private:
	vector<CBloque*> arrBloque;
public:
	CArregloBloque()
	{
		arrBloque = vector<CBloque*>();
	}
	void agregar(int x, int y) {
		CBloque *objBloque;
		objBloque = new CBloque(x, y);
		arrBloque.push_back(objBloque);
	}
	void dibujar(Graphics^ bg) {
		for (int i = 0; i < arrBloque.size(); ++i) {
			arrBloque.at(i)->dibujar(bg);
		}
	}
	bool colision(int x, int y) {
		for (int i = 0; i < arrBloque.size(); ++i) {
			if (arrBloque.at(i)->getx() == x
				&& arrBloque.at(i)->gety() == y) {
				return true;
			}
		}
		return false;
	}
	void pop() {
		arrBloque.pop_back();
	}
	void borrar() {
		arrBloque.clear();
	}
	int tamaño() { return arrBloque.size(); }
};