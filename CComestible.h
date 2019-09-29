#pragma once
#include "iostream"
#include "vector"
#include "fstream"
#include "CJugador.h"
using namespace std;
using namespace System::Drawing;
using namespace System::Windows::Forms;
class Comestible {
private:
	int x;
	int y;
public:
	Comestible(int x, int y) {
		this->x = x;
		this->y = y;
	}
	void dibujar(Graphics^ bg) {
		bg->FillEllipse(Brushes::LightGreen, x + 3, y + 3, 19, 19);
		bg->DrawEllipse(Pens::Green, x + 3, y + 3, 19, 19);
	}
	int getx() { return x; }
	int gety() { return y; }
};


