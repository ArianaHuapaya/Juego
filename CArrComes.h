#pragma once
#include"CComestible.h"
template<typename T>
class CArrComes
{
private:
	vector<Comestible*> arrC;
public:
	CArrComes() {
	arrC=  vector<Comestible*>();
	}
	~CArrComes() {}
	void agregar(int x, int y) {
		Comestible *objComestible;
		objComestible = new Comestible(x, y);
		arrC.push_back(objComestible);
	}
	void dibujar(Graphics^ bg) {
		for (int i = 0; i < arrC.size(); ++i) {
			arrC.at(i)->dibujar(bg);
		}
	}
	bool colision(int x, int y) {
		for (int i = 0; i < arrC.size(); ++i) {
			if (arrC.at(i)->getx() == x	&& arrC.at(i)->gety() == y) {
				arrC.erase(arrC.begin() + i);
				return true;
				break;
			}
		}
		return false;
	}
	void borrar() {
		arrC.clear();
	}
	int Longitud() { return arrC.size(); }



};
