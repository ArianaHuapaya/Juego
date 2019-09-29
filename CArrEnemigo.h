#pragma once
#include <vector>
#include "CEnemigo.h"
using namespace std;
template<typename T>
class CArrEnemigo
{
public:
	CArrEnemigo()
	{
		arrEnemigo = vector<Enemigo*>();
	}
	void agregar(int x, int y) {
		Enemigo *objEnemigo;
		objEnemigo = new Enemigo(x, y);
		arrEnemigo.push_back(objEnemigo);
	}
	void dibujar(Graphics^ bg) {
		for (int i = 0; i < arrEnemigo.size(); ++i) {
			arrEnemigo.at(i)->dibujar(bg);
		}
	}
	bool colision(int x, int y) {
		for (int i = 0; i < arrEnemigo.size(); ++i) {
			if (arrEnemigo.at(i)->getx() == x
				&& arrEnemigo.at(i)->gety() == y) {
				return true;
			}
		}
		return false;
	}
	void mover(int x, int y) {
		for (int i = 0; i < arrEnemigo.size(); ++i) {
			arrEnemigo.at(i)->mover(x, y);
		}
	}
	void borrar() {
		arrEnemigo.clear();
	}
	int Longitud() { return arrEnemigo.size(); }

private:
	vector<Enemigo*> arrEnemigo;
};
